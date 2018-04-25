#include "Carte.h"

Carte::Carte(SDL_Surface* path, int attaque, int defence1)
{
	image = path;
	attack = attaque;
	defence = defence1;

	dansDeck = false;
	dansMain = false;
	surBoard = false;
}

void Carte::setAttack(int j)
{
	attack = j;
}

void Carte::setDefence(int j)
{
	defence = j;
}

int Carte::getAttack()
{
	return attack;
}

int Carte::getDefence()
{
	return defence;
}

void Carte::setSurBoard(bool j)
{
	surBoard = j;
}

bool Carte::getSurBorad()
{
	return surBoard;
}

void Carte::setDansMain(bool j)
{
	dansMain = j;
}

bool Carte::getDansMain()
{
	return dansMain;
}

void Carte::setDansDeck(bool j)
{
	dansDeck = j;
}

bool Carte::getDansDeck()
{
	return dansDeck;
}


SDL_Surface* Carte::getImage()
{
	return image;
}


Carte::~Carte()
{
}
