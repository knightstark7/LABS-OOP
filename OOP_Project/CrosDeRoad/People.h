#pragma once
#include "head.h"
#include "Console.h"
#include "Position.h"
#include "Enemy.h"
#include "cWorm.h"
#include "cCar.h"
#include "cFrog.h"
#include "cHelicopter.h"

class People{
private:
	Position pos;
	bool isDead;
	char **a;  //a[3][5]
	char **emptyPlayer;
	int width = 3, length = 5;
public:
	People(); // set default position
	Position getPos();
	People(Position pos); // set current position when load game
	~People();
	void Up();
	void Down();
	void Right();
	void Left();
	bool checkIsDead();
	void killPlayer(); // set isDead
	char **shape();
	char **emptyShape();
	int getlength();
	int getwidth();
	int getX();
	int getY();
	bool crash(Position pos, int w, int h);
	void sound();
};
