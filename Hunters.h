#pragma once

class Hunter
{
public:

	virtual void Eat() = 0;
	virtual void Hunt() = 0;
};

class Lion : public Hunter
{
private:
	double weight = 170;

public:

	void Hunt()
	{
		cout << "Africa---------\nLion hunting..." << endl;
	}

	void Eat()
	{
		weight += 3.21;
		cout << "Lion eating... \nWeight: " << weight << endl << endl;
	}
};

class Wolf : public Hunter
{
private:
	double weight = 80;

public:

	void Hunt()
	{
		cout << "NorthAmerica---\nWolf hunting..." << endl;
	}

	void Eat()
	{
		weight += 1.233;
		cout << "Wolf eating... \nWeight: " << weight << endl << endl;
	}
};

class Bear : public Hunter
{
private:
	double weight = 500;

public:

	void Hunt()
	{
		cout << "Eurasia--------\nBear hunting..." << endl;
	}

	void Eat()
	{
		weight += 4.51;
		cout << "Bear eating... \nWeight: " << weight << endl;
	}
};
