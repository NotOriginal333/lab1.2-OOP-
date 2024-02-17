#pragma once
class Vektor
{
private:
	float* pointer;
	int size;
	int state;

	static int objectCount;
public:
	void Init();
	void Init(int n);
	void Init(int n, float value);

	void read();

	int getSize() const { return size; };
	int getState() const { return state; };
	float getValue(int index) const;

	void Display();

	float Max();
	float Min();

	void SortAscending();
	void SortDescending();

	static int ObjectCount();
};

