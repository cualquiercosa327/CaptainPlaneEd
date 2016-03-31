#pragma once

#include <stdint.h>
#include <SDL2/SDL.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480	//minimum size to allow for 64x64 maps

class Screen
{
public:
	SDL_Window* window;
	SDL_Renderer* render;
	SDL_Surface* surface;
	SDL_Texture* texture;

	Screen(void);
	void ProcessDisplay(void);
	void Fill(uint8_t r, uint8_t g, uint8_t b);
};
