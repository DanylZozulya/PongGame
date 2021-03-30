//
// Created by danyilzozulia on 25.03.2021.
//

#ifndef PONG2_PADDLE_H
#define PONG2_PADDLE_H

#include "Entity.h"

class Paddle: public Entity {
public:
    Paddle(SDL_Renderer* renderer);
    ~Paddle();

    void Update(float delta);
    void Render(float delta);

private:
    SDL_Texture* texture;

};

#endif //PONG2_PADDLE_H
