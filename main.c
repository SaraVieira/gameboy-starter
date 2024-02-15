#include <gb/gb.h>
#include <string.h>
#include <stdio.h>
#include <gbdk/platform.h>
#include <gbdk/font.h>
#include <gbdk/bcd.h>
#include "TestSprite.c"

void main()
{

    int x = 88;
    int y = 84;
    int bit_shown_A = 1;
    int bit_shown_B = 2;

    // init fonts & set custom font
    font_init();
    font_set(font_load(font_spect));

    // show sprites & set size
    SHOW_SPRITES;
    SPRITES_8x8;

    // load sprite
    set_sprite_data(0, 3, Test);
    set_sprite_tile(0, 0);
    move_sprite(0, x, y);

    while (1)
    {

        if (joypad() & J_A)
        {
            // change tile shown
            set_sprite_tile(0, bit_shown_A);

            // toggle bit back and forth
            if (bit_shown_A == 1)
                bit_shown_A = 0;
            else
                bit_shown_A = 1;
        }
        if (joypad() & J_B)
        {
            // change tile shown
            set_sprite_tile(0, bit_shown_B);

            // toggle bit back and forth
            if (bit_shown_B == 2)
                bit_shown_B = 0;
            else
                bit_shown_B = 2;
        }

        // move sprite in x and y
        if (joypad() & J_UP)
            y--;

        if (joypad() & J_DOWN)
            y++;

        if (joypad() & J_LEFT)
            x--;

        if (joypad() & J_RIGHT)
            x++;

        if (joypad())
        {
            move_sprite(0, x, y);
            delay(10);
        }

        // Done processing, yield CPU and wait for start of next frame
        wait_vbl_done();
        vsync();
    }
}