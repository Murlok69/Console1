
#include <iostream>

enum Answer
{
    circle,
    cross,
    clear
}; 

const int size = 3;
char Table[size][size];


int main()
{
    short int a = 10; // инициализация шорт инт

    std::cout << sizeof(a) << std::endl;

    
    int b = 100; // инициализация инта
    std::cout << sizeof(b) << std::endl;


    long long c = 1000; // инициализация лонга
    std::cout << sizeof(c) << std::endl;


    char d = -100; // инициализация чара
    std::cout << sizeof(d) << std::endl;

    bool e = true; // инициализация була
    std::cout << sizeof(e) << std::endl;

    float f; // инициализация флаут
    std::cout << sizeof(f) << std::endl;

    double g = 14.12; // иницилазиация дабл 
    std::cout << sizeof(g) << std::endl;

    if (e == true) // добавил переменные через иф
    {
        long long z = a+ b+ c;
        std::cout << z << std::endl;

    }


    Answer ans = circle;

    std::cout << ans << std::endl;

    return 0;
}




