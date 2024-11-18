#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // NELEMENTS -> N_ELEMENTS
    int *b = new int[NELEMENTS];
    // pontosvessző hiányzik
    std::cout << '1-100 ertekek duplazasa'
    // i-nek 1-től kell kezdődnie és hiányzik az i<=N_ELEMENTS; i++
    for (int i = 0;)
    {
        // b[i] -> b[i-1]
        b[i] = i * 2;
    }
    // hiányzó vég kondíció -> i < N_ELEMENTS
    for (int i = 0; i; i++)
    {
        // hiányzó érték, pontosvessző
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // hiányzó értékadás -> int atlag = 0;
    int atlag;
    // vessző helyett pontosvessző kell
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // hiányzó pontosvessző
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
