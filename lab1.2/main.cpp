#include <iostream>
#include "Vektor.h"

int main() {
    // Ініціалізація об'єкта v1 з використанням методу Init() без параметрів
    Vektor v1;
    v1.Init();

    // Ініціалізація об'єкта v2 з використанням методу Init() з одним параметром
    Vektor v2;
    v2.Init(5);

    // Ініціалізація об'єкта v3 з використанням методу Init() з двома параметрами
    Vektor v3;
    v3.Init(3, 2.5);

    // Введення значень для об'єкта v1
    v1.read(3);

    // Виведення значень об'єктів
    std::cout << "v1: "; v1.Display();
    std::cout << "v2: "; v2.Display();
    std::cout << "v3: "; v3.Display();

    // Виведення мінімального та максимального значень для об'єктів
    std::cout << "Min value of v1: " << v1.Min() << std::endl;
    std::cout << "Max value of v1: " << v1.Max() << std::endl;
    std::cout << "Min value of v2: " << v2.Min() << std::endl;
    std::cout << "Max value of v2: " << v2.Max() << std::endl;
    std::cout << "Min value of v3: " << v3.Min() << std::endl;
    std::cout << "Max value of v3: " << v3.Max() << std::endl;

    // Сортування об'єктів
    v1.SortAscending();
    v2.SortDescending();
    v3.SortAscending();

    // Виведення відсортованих значень
    std::cout << "Sorted v1 (ascending): "; v1.Display();
    std::cout << "Sorted v2 (descending): "; v2.Display();
    std::cout << "Sorted v3 (ascending): "; v3.Display();

    return 0;
}
