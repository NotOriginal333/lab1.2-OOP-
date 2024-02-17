#pragma once
class Vektor
{
private:
	float* flo;
	int i;
	int state;

	static int objectCount;
public:
	void init();
	void init(int n);
	void init(int n, float value);

	void Display();

	float Max();
	float Min();

	void SortAscending();
	void SortDescending();

	static int ObjectCount();
};

