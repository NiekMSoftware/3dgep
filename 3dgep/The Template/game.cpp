#include "game.h"
#include "surface.h"
#include <cstdio> //printf

namespace Tmpl8
{
	struct linePoints
	{
		float x1;
		float y1;
		float x2;
		float y2;
		unsigned int color;
	};

	linePoints word[21];
	
	// -----------------------------------------------------------
	// Initialize the application
	// -----------------------------------------------------------
	void Game::Init()
	{
		// letter c
		word[0] = { 150,120,80,60, 0xff0000 };
		word[1] = { 80,60,10,120, 0xff0000 };
		word[2] = { 10,120,10,240,0xff0000 };
		word[3] = { 10,240,80,300,0xff0000 };
		word[4] = { 80,300,150,240,0xff0000 };
		
		// letter o
		word[5] = { 240,60,170,120, 0xff00 };
		word[6] = { 170,120,170,240,0xff00 };
		word[7] = { 170,240,240,300,0xff00 };
		word[8] = { 240,300,310,240, 0xff00 };
		word[9] = { 310,240,310,120, 0xff00 };
		word[10] = { 310,120,240,60, 0xff00 };
		
		// letter d
		word[11] = { 330,60,330,300,0xff };
		word[12] = { 330,300,400,300,0xff };
		word[13] = { 400,300,470,240,0xff };
		word[14] = { 470,240,470,120, 0xff };
		word[15] = { 470,120,400,60,0xff };
		word[16] = { 400,60,330,60,0xff };
		
		// letter e
		word[17] = { 490,60,490,300, 0xffff00 };
		word[18] = { 490,60,630,60, 0xffff00 };
		word[19] = { 490,180,600,180,0xffff00 };
		word[20] = { 490,300,630,300,0xffff00 };
	}
	
	// -----------------------------------------------------------
	// Close down application
	// -----------------------------------------------------------
	void Game::Shutdown()
	{
	}

	static Sprite rotatingGun(new Surface("assets/aagun.tga"), 36);
	static int frame = 0;

	// -----------------------------------------------------------
	// Main application tick function
	// -----------------------------------------------------------
	void Game::Tick(float deltaTime)
	{
		// clear the graphics window
		screen->Clear(0);

		for (linePoints w : word)
		{
			screen->Line(w.x1, w.y1, w.x2, w.y2, w.color);
		}
	}
};