//
// Created by danyilzozulia on 25.03.2021.
//

#ifndef PONG2_ENTITY_H
#define PONG2_ENTITY_H

#include "SDL.h"
#include "SDL_image.h"

class Entity {
public:
    Entity(SDL_Renderer* renderer);
    virtual ~Entity();

    float x, y, width, height;
    int score;

    virtual void Update(float delta);
    virtual void Render(float delta);

    bool Collides(Entity* other);
protected:
    SDL_Renderer* renderer;

};

#endif //PONG2_ENTITY_H
