#include "display.h"

// Define framebuffer
char framebuffer[SCREEN_WIDTH * SCREEN_HEIGHT];

// Function definition for drawing a sprite
void draw_sprite(int x, int y, Sprite* sprite) {
    // Iterate over each pixel in the sprite
    for (int dy = 0; dy < sprite->height; dy++) {
        for (int dx = 0; dx < sprite->width; dx++) {
            // Calculate the framebuffer position for the current pixel
            int framebuffer_x = x + dx;
            int framebuffer_y = y + dy;

            // Check if the current pixel is within the framebuffer bounds
            if (framebuffer_x >= 0 && framebuffer_x < SCREEN_WIDTH && framebuffer_y >= 0 && framebuffer_y < SCREEN_HEIGHT) {
                // Get the color of the current pixel from the sprite data
                char color = sprite->data[dy * sprite->width + dx];

                // Set the color of the corresponding pixel on the framebuffer
                framebuffer[framebuffer_y * SCREEN_WIDTH + framebuffer_x] = color;
            }
        }
    }
}
