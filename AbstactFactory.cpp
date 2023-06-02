#include <iostream>
using namespace std;
#include "Factories.h"

class Instantiate
{
private:
	Continent* africa = new Africa();
	Hunter* lion = africa->CreatHunter();
	Herbivorous* elephant = africa->CreatHerbivore();

	Continent* n_america = new NorthAmerica();
	Hunter* wolf = n_america->CreatHunter();
	Herbivorous* deer = n_america->CreatHerbivore();

	Continent* eurasia = new Eurasia();
	Hunter* bear = eurasia->CreatHunter();
	Herbivorous* elk = eurasia->CreatHerbivore();

public:

	Instantiate()
	{
		elephant->Eat();
		lion->Hunt();
		lion->Eat();
		
		deer->Eat();
		wolf->Hunt();
		wolf->Eat();
		
		elk->Eat();
		bear->Hunt();
		bear->Eat();
	}

	~Instantiate()
	{
		delete lion;
		delete elephant;
		delete africa;

		delete wolf;
		delete deer;
		delete n_america;

		delete bear;
		delete elk;
		delete eurasia;
	}
};

int main()
{
	Instantiate start;
}
