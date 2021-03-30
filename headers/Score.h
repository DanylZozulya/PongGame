//
// Created by danyilzozulia on 26.03.2021.
//

#ifndef PONG2_SCORE_H
#define PONG2_SCORE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include <iostream>


#include "Entity.h"

class Score: public Entity{
public:
    enum class Side {PLAYER, AI};
    Score(SDL_Renderer* renderer, Side side);
    ~Score();

    void Update();
    void Render();



private:
    SDL_Texture* texture;

    int score;
};

#endif //PONG2_SCORE_H
