//
// Created by danyilzozulia on 26.03.2021.
//
#include "Score.h"


Score::Score(SDL_Renderer *renderer, Side side): Entity(renderer){

    score = 0;

    TTF_Font* font = TTF_OpenFont("/home/danyilzozulia/Desktop/test/TIMES.ttf", 14);
    SDL_Color white = {255, 255, 255};

    SDL_Surface* surface = TTF_RenderText_Solid(font, std::to_string(score).c_str(), white);

    texture = SDL_CreateTextureFromSurface(renderer, surface);

    SDL_FreeSurface(surface);

    if (side == Side::PLAYER){
        x = 300;
        y = 0;
        width = 50;
        height = 50;
    }
    else{
        x = 500;
        y = 0;
        width = 50;
        height = 50;
    }

}

Score::~Score(){
    SDL_DestroyTexture(texture);
}

void Score::Update() {
    score++;
    TTF_Font* font = TTF_OpenFont("/home/danyilzozulia/Desktop/test/TIMES.ttf", 14);
    SDL_Color white = {255, 255, 255};

    SDL_Surface* surface = TTF_RenderText_Solid(font, std::to_string(score).c_str(), white);

    texture = SDL_CreateTextureFromSurface(renderer, surface);

    SDL_FreeSurface(surface);
}

void Score::Render() {

    SDL_Rect rect;

    rect.x = x;
    rect.y = y;
    rect.w = width;
    rect.h = height;
    SDL_RenderCopy(renderer, texture, 0, &rect);

}
