//
// Created by danyilzozulia on 25.03.2021.
//

#ifndef PONG2_BALL_H
#define PONG2_BALL_H

#include "Entity.h"
#include <math.h>

// Define a ball speed in pixels per second
const float BALL_SPEED = 900;

class Ball: public Entity {
public:
    Ball(SDL_Renderer* renderer);
    ~Ball();

    void Update(float delta);
    void Render(float delta);

    void SetDirection(float dirx, float diry);

    float dirx, diry;

private:
    SDL_Texture* texture;

};

#endif //PONG2_BALL_H
