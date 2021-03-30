//
// Created by danyilzozulia on 25.03.2021.
//

#ifndef PONG2_BOARD_H
#define PONG2_BOARD_H

#include "Entity.h"
#include <stdlib.h>
#include <time.h>

class Board: public Entity {
public:
    Board(SDL_Renderer* renderer);
    ~Board();

    void Update(float delta);
    void Render(float delta);

    float boundtop, boundbottom;

private:
    SDL_Texture* sidetexture;
};

#endif //PONG2_BOARD_H
