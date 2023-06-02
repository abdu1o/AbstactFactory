#pragma once
#include "Hunters.h"
#include "Herbivorous.h"

//abstact factory
class Continent
{
public:

	virtual Herbivorous* CreatHerbivore() = 0;
	virtual Hunter* CreatHunter() = 0;
};


//concrete factories------------------
class Africa : public Continent
{
public:

	Lion* CreatHunter()
	{
		return new Lion();
	}
	Elephant* CreatHerbivore()
	{
		return new Elephant();
	}

};

class NorthAmerica : public Continent
{
public:

	Wolf* CreatHunter()
	{
		return new Wolf();
	}
	Deer* CreatHerbivore()
	{
		return new Deer();
	}
};

class Eurasia : public Continent
{
public:

	Bear* CreatHunter()
	{
		return new Bear();
	}
	Elk* CreatHerbivore()
	{
		return new Elk();
	}
};
//------------------------------------