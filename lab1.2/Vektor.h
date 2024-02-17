#pragma once
class Vektor
{
private:
	float* pointer;
	int size;
	int state;

	static int objectCount;
public:
	bool Init();
	bool Init(int s);
	bool Init(int s, float value);

	void read();

	int getSize() const { return size; };
	int getState() const { return state; };
	float getValue(int index) const;
	static int getObjectCount() {return objectCount;};

	void setSize(int s);
	void setPointer(float* ptr, int s);

	void Display() const;

	float Max();
	float Min();

	void SortAscending();
	void SortDescending();

	static int ObjectCount();
};

