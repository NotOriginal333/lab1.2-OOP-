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
    Vektor vec1 = makeDynamicVector(2, 5.0f);
    vec1.Display();

    /*Vektor vec2;
    vec2.read(3);
    vec2.Display();
    vec2.Max();
    vec2.Min();
    vec2.SortAscending();
    vec2.Display();
    vec2.Display();
    vec2.SortDescending();*/ //don`t work!!!

    /*Vektor vec3;
    vec3.Init();
    vec3.Display();
    vec3.read();
    vec3.Display();*/ //work

    Vektor vec4;
    vec4.Init(3);
    vec4.Display();
    vec4.read();
    vec4.Display();
    return 0;
}