#include "Vektor.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Vektor::setState(int n) {
    state = n;
}

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
    float* pointerO;
    pointerO = new float[1];
    size = 1;
    if (pointerO == nullptr) {
        setState(1); // Error code for memory allocation failure
        return false;
    }
    pointerO[0] = 0.0f;
    setPointer(pointerO, size);
    //objectCount++;
    return true;
}

bool Vektor::Init(int s) {
    float* pointerO;
    if (s <= 0) {
        setState(2); // Error code for invalid size
        return false;
    }
    pointerO = new float[s];
    size = s;
    if (pointerO == nullptr) {
        setState(1); // Error code for memory allocation failure
        return false;
    }
    for (int i = 0; i < s; i++) {
        pointerO[i] = i;
    }
   // objectCount++;
    setPointer(pointerO, s);
    return true;
}

bool Vektor::Init(int s, float value) {
    float* pointerO;
    if (s <= 0) {
        setState(2); // Error code for invalid size
        return false;
    }
    pointerO = new float[s];
    size = s;
    if (pointerO == nullptr) {
        setState(1); // Error code for memory allocation failure
        return false;
    }
    for (int i = 0; i < s; i++) {
        pointerO[i] = value;
    }
    setPointer(pointerO, s);
    //objectCount++;
    return true;
}

void Vektor::read(int s) {
    setSize(s);
    for (int i = 0; i < s; i++) {
        cout << "Enter value for element " << i << ": ";
        cin >> pointer[i];
    }
}

void Vektor::Display() const {
    cout << "Vector elements: ";
    for (int i = 0; i < size; ++i) {
        cout << getValue(i) << " ";
    }
    cout << std::endl;
}

float Vektor::Min() {
    if (size == 0) {
        setState(3); // Error code for empty vector
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
        setState(3); // Error code for empty vector
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

