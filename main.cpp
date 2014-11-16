#include <iostream>
#include <SDL.h>

int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window* window = SDL_CreateWindow("Window! :D", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_Surface* sBackground = SDL_LoadBMP("data/background.bmp");
    SDL_Texture* tBackground = SDL_CreateTextureFromSurface(renderer, sBackground);
    SDL_RenderCopy(renderer, tBackground, NULL, NULL);
    SDL_RenderPresent(renderer);
    SDL_Delay(3000);
    SDL_Quit();
    return 0;
}
