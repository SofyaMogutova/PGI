#pragma once
#include <SDL.h>
#include "BaseReader.h"

class WindowManager
{
	SDL_Surface* screen_surface;
	SDL_Window* window;
public:
	WindowManager();
	int initWindow(const char* title, int width, int height);
	void setBitMap(BaseReader& reader);
	void render();
	~WindowManager();
};

