#include "Vektor.h"
#include <iostream>

using namespace std;

float Vektor::getValue(int index) const {
    if (index < 0 || index >= size) {
        cerr << "Error: Index out of bounds\n";
        return -1; // Повернення помилки
    }
    return pointer[index];
}

void Vektor::Init() {
    delete[] pointer;
    pointer = new float[1];
    pointer[0] = 0.0;
    size = 1;
    state = 0;
}

void Vektor::Init(int numElements) {
    delete[] pointer;
    pointer = new float[numElements];
    for (int i = 0; i < numElements; ++i) {
        pointer[i] = i;
    }
    size = numElements;
    state = 0;
}

void Vektor::Init(int numElements, float initValue) {
    delete[] pointer;
    pointer = new float[numElements];
    for (int i = 0; i < numElements; ++i) {
        pointer[i] = initValue;
    }
    size = numElements;
    state = 0;
}
