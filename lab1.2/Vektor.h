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
	bool Init(int);
	bool Init(int, float);

	void read(int);

	int getSize() const { return size; };
	int getState() const { return state; };
	float getValue(int index) const;
	static int getObjectCount() {return objectCount;};

	void setSize(int);
	void setPointer(float*, int);
	void setState(int);

	void Display() const;

	float Max();
	float Min();

	void SortAscending();
	void SortDescending();

	static int ObjectCount();
};

