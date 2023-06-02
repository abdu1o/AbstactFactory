#pragma once

class Herbivorous
{
public:

	virtual void Eat() = 0;
};

class Elephant : public Herbivorous
{
private:
	double weight = 5000;

public:

	void Eat()
	{
		weight += 32.2;
		cout << "Africa------------\nElephant eating... \nWeight: " << weight << endl << endl;
	}
};

class Deer : public Herbivorous
{
private:
	double weight = 200;

public:

	void Eat()
	{
		weight += 6.9;
		cout << "North America-\nDeer eating... \nWeight: " << weight << endl << endl;
	}
};

class Elk : public Herbivorous
{
private:
	double weight = 400;

public:

	void Eat()
	{
		weight += 14.1;
		cout << "Eurasia------\nElk eating... \nWeight: " << weight << endl << endl;
	}
};
