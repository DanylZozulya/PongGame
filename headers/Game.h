//
// Created by danyilzozulia on 25.03.2021.
//

#ifndef PONG2_GAME_H
#define PONG2_GAME_H

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_ttf.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "Board.h"
#include "Paddle.h"
#include "Ball.h"
#include "Score.h"


#define FPS_DELAY 500
#define AI_SPEED 400 // Pixels per second



class Game {
public:
    Game();
    ~Game();

    bool Init();
    void Run();

private:
    SDL_Window* window;
    SDL_Renderer* renderer;

    // Timing
    unsigned int lasttick, fpstick, fps, framecount;

    Board* board;
    std::vector<Paddle*> paddle;
    Ball* ball;
    Score* player_score;
    Score* ai_score;


    void Clean();
    void Update(float delta);
    void Render(float delta);

    void NewGame();

    void SetPaddleY(int index, float y);
    void CheckCollisions();
    float GetReflection(int index, float hity);

    void AI(float delta);
};

#endif //PONG2_GAME_H
