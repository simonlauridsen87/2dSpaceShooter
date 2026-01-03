#ifndef GUI_HPP
#define GUI_HPP

#include <string>
#include "libraries/pico_display_2/pico_display_2.hpp"
#include "drivers/st7789/st7789.hpp"
#include "libraries/pico_graphics/pico_graphics.hpp"
#include "drivers/rgbled/rgbled.hpp"
#include "drivers/button/button.hpp"

using namespace pimoroni;

class Gui {
    public:
        Gui();
        void clear();
        void writeText(const std::string &text, int x, int y, int wrapWidth);
    private:
        PicoGraphics_PenRGB332 graphics;
        Pen BG;
        Pen WHITE;
        Point text_location;
};

#endif