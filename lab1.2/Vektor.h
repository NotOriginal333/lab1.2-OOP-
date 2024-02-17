#pragma once
class Vektor
{
private:
	float* flo;
	int i;
	int state;
public:
	void init();
	void init(int n);
	void init(int n, float value);

};

