#include "Gui.hpp"
#include <string.h>
#include <math.h>
#include <vector>
#include <cstdlib>
#include <sstream>

#include "pico/stdlib.h"
#include "hardware/gpio.h"

using namespace pimoroni;

// Initialize the ST7789 display driver
ST7789 st7789(320, 240, ROTATE_0, false, get_spi_pins(BG_SPI_FRONT));

Gui::Gui() 
    : graphics(st7789.width, st7789.height, nullptr),
      text_location(0, 0)
{
    // Initialize the display
    st7789.set_backlight(255);
    
    // Create pens
    BG = graphics.create_pen(0, 0, 0);      // Black background
    WHITE = graphics.create_pen(255, 255, 255);  // White text
    
    // Clear the screen initially
    clear();
}

void Gui::clear() {
    graphics.set_pen(BG);
    graphics.clear();
    
    // Update the display
    st7789.update(&graphics);
}

void Gui::writeText(const std::string &text, int x, int y, int wrapWidth) {
    // Set the pen to white for text
    graphics.set_pen(WHITE);
    
    // Draw the text
    // Parameters: text, position, wrap width, scale, angle
    graphics.text(text, Point(x, y), wrapWidth, 2.0f, 0.0f);
    
    // Update the display to show the text
    st7789.update(&graphics);
}
