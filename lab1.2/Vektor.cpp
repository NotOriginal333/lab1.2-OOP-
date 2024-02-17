#include "Vektor.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Vektor::setPointer(float* ptr, int s) {
    if (ptr != nullptr && s > 0) {
        pointer = ptr;
        size = s;
    }
    else {
        std::cerr << "Error: Invalid pointer or size" << std::endl;
    }
}

void Vektor::setSize(int s) {
    if (s > 0) {
        size = s;
    }
    else size = 0;
}

float Vektor::getValue(int index) const {
    if (index < 0 || index >= size) {
        cerr << "Error: Index out of bounds\n";
        return -1; // Повернення помилки
    }
    return pointer[index];
}

bool Vektor::Init() {
    pointer = new float[1];
    size = 1;
    if (pointer == nullptr) {
        state = 1; // Error code for memory allocation failure
        return false;
    }
    pointer[0] = 0.0f;
    return true;
}

bool Vektor::Init(int s) {
    if (s <= 0) {
        state = 2; // Error code for invalid size
        return false;
    }
    pointer = new float[s];
    size = s;
    if (pointer == nullptr) {
        state = 1; // Error code for memory allocation failure
        return false;
    }
    for (int i = 0; i < s; i++) {
        pointer[i] = i;
    }
    return true;
}

bool Vektor::Init(int s, float value) {
    if (s <= 0) {
        state = 2; // Error code for invalid size
        return false;
    }
    pointer = new float[s];
    size = s;
    if (pointer == nullptr) {
        state = 1; // Error code for memory allocation failure
        return false;
    }
    for (int i = 0; i < s; i++) {
        pointer[i] = value;
    }
    return true;
}

void Vektor::read() {
    for (int i = 0; i < size; i++) {
        cout << "Enter value for element " << i << ": ";
        cin >> pointer[i];
    }
}

void Vektor::Display() const {
    cout << "Vector elements: ";
    for (int i = 0; i < size; ++i) {
        cout << pointer[i] << " ";
    }
    cout << std::endl;
}

float Vektor::Min() {
    if (size == 0) {
        state = 3; // Error code for empty vector
        return 0.0f; // Return a default value
    }
    float min = pointer[0];
    for (int i = 1; i < size; ++i) {
        if (pointer[i] < min) {
            min = pointer[i];
        }
    }
    return min;
}

float Vektor::Max() {
    if (size == 0) {
        state = 3; // Error code for empty vector
        return 0.0f; // Return a default value
    }
    float max = pointer[0];
    for (int i = 1; i < size; ++i) {
        if (pointer[i] > max) {
            max = pointer[i];
        }
    }
    return max;
}

void Vektor::SortAscending() {
    sort(pointer, pointer + size);
}

void Vektor::SortDescending() {
    sort(pointer, pointer + size, std::greater<float>());
}

