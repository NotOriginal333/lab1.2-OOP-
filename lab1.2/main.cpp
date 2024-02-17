#include "Vektor.h"
#include <iostream>
#include <algorithm>

using namespace std;

Vektor makeDynamicVector(int size, float value) {
    Vektor vec;
    if (!vec.Init(size, value)) {
        cerr << "Error: Unable to create DynamicVector object. Invalid size or memory allocation failure." << std::endl;
        exit(1);
    }
    return vec;
}

int main() {

}