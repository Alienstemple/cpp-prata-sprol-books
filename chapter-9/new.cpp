#include <iostream>
#include <cstring>
#include <new>
const int BUF = 512;
const int N = 2;
char buffer[BUF];
struct chaff
{
    char dross[20];
    int slag;
};
int main()
{
    chaff * arrchaffbuf = new (buffer) chaff[N];
    for (int i = 0; i < N; i++)
    {
        char input[20];
        std::cout << std::endl << "Enter " << i << " dross: ";
        std::cin.getline(input, 20);
        strncpy(arrchaffbuf[i].dross, input, 20);
        std::cout << std::endl << "Enter " << i << " slag: ";
        (std::cin >> arrchaffbuf[i].slag).get();
    }
    std::cout << std::endl << "Adress: " << (void *) buffer;
    for (int i = 0; i < N; i++)
        std::cout << std::endl << "Through buffer: " 
        << "\t" << arrchaffbuf[i].dross << " at " << &arrchaffbuf[i].dross << "\t" 
        << arrchaffbuf[i].slag << " at " << &arrchaffbuf[i].slag << std::endl;
    
    chaff * arrchaff = new chaff[N];
    for (int i = 0; i < N; i++)
    {
        char input[20];
        std::cout << std::endl << "Enter " << i << " dross: ";
        std::cin.getline(input, 20);
        strncpy(arrchaff[i].dross, input, 20);
        std::cout << std::endl << "Enter " << i << " slag: ";
        (std::cin >> arrchaff[i].slag).get();
    }
    std::cout << std::endl << "Adress: " << arrchaff;
    for (int i = 0; i < N; i++)
        std::cout << std::endl << "Through normal new: " 
        << "\t" << arrchaff[i].dross << " at " << &arrchaff[i].dross << "\t" 
        << arrchaff[i].slag << " at " << &arrchaff[i].slag << std::endl;
    delete [] arrchaff;
    return 0;
}