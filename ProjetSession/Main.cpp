// Lab13.cpp : définit le point d'entrée pour l'application console.
//

#include <string>
#include <SDL.h>
#include <iostream>
#include "Carte.h"


void generationCartes();

int main(int argc, char *argv[])
{
	//The window we'll be rendering to 
	SDL_Window* window = NULL;

	generationCartes();

	//The surface contained by the window 
	SDL_Surface* screenSurface = NULL;
	//SDL_Surface* helloWorld = NULL;

	int positionImageX = 0;

	//Initialize SDL 
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		exit(0);	// cas erreur
	}


	window = SDL_CreateWindow("Laboratoire 13", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, SDL_WINDOW_SHOWN | SDL_WINDOW_MAXIMIZED);

	//Get window surface 
	screenSurface = SDL_GetWindowSurface(window);

	//carte1.setImage(SDL_LoadBMP("Images/CartesLumiere/Gandalf.bmp"));

	bool quitter = false;

	while (quitter == false)
	{
		// Nettoyer l'écran
		SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0, 0, 0));

		// Lire événements
		SDL_Event evenement;
		//Handle events on queue 
		while (SDL_PollEvent(&evenement) != 0)
		{
			//User requests quit 
			if (evenement.type == SDL_QUIT)
			{
				quitter = true;
			}
			if (evenement.type == SDL_KEYDOWN)
			{
				if (evenement.key.keysym.sym == SDLK_RIGHT)
				{
					positionImageX = positionImageX + 5;
				}
				if (evenement.key.keysym.sym == SDLK_LEFT)
				{
					positionImageX = positionImageX - 5;
				}
				if (evenement.key.keysym.sym == SDLK_ESCAPE)
				{
					quitter = true;
				}
			}
		}

		SDL_Rect destination;
		destination.x = positionImageX;
		destination.y = 0;
		destination.w = 100;
		destination.h = 100;


		SDL_BlitSurface(gandalf.getImage(), NULL, screenSurface, &destination);



		//Update the surface 
		SDL_UpdateWindowSurface(window);
	}


	SDL_DestroyWindow(window);

	SDL_Quit();

	return 0;
}

void generationCartes()
{
	Carte gandalf(SDL_LoadBMP("Images/CartesLumiere/Gandalf.bmp"),5,5);
	//Carte arwen(SDL_LoadBMP("Images/CartesLumiere/Arwen.bmp"));
	//Carte boromir(SDL_LoadBMP("Images/CartesLumiere/Boromir.bmp"));
	//Carte dwalin(SDL_LoadBMP("Images/CartesLumiere/Dwalinbmp"));
	//Carte elfsArcher(SDL_LoadBMP("Images/CartesLumiere/ElfsArcher.bmp"));
	//Carte gimli(SDL_LoadBMP("Images/CartesLumiere/Gimli.bmp"));
	//Carte legolas(SDL_LoadBMP("Images/CartesLumiere/Legolas.bmp"));
	//Carte nainsSoldat(SDL_LoadBMP("Images/CartesLumiere/NainsSoldat.bmp"));
	//Carte faramir(SDL_LoadBMP("Images/CartesLumiere/Faramir.bmp"));
	//Carte rohirrim(SDL_LoadBMP("Images/CartesLumiere/Rohirrim.bmp"));
}