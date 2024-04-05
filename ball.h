#ifndef BALL_H
#define BALL_H

// Define a structure to represent a sprite
typedef struct {
    int width;
    int height;
    char* data; // Assuming the data represents the color of each pixel
} Sprite;

// Declare the baseball sprite
extern Sprite ball;

#endif /* BALL_H */
