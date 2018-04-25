#pragma once
#include <SDL.h>

class Carte
{
private:
	int attack;
	int defence;

	bool surBoard;
	bool dansMain;
	bool dansDeck;

	SDL_Surface* image;

public:
	Carte(SDL_Surface* path, int attaque, int defence1);
	void setAttack(int j);
	void setDefence(int j);
	int getAttack();
	int getDefence();

	void setSurBoard(bool j);
	bool getSurBorad();

	void setDansMain(bool j);
	bool getDansMain();
	
	void setDansDeck(bool j);
	bool getDansDeck();

	SDL_Surface* getImage();

	~Carte();
};