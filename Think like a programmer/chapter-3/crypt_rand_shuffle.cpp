#include <iostream>
#include <algorithm>
int main()
{
    const char order_letters[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 
'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    char CRYPT[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 
'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    char * ptr_start = &CRYPT[0];
    char * ptr_end = &CRYPT[25];
    std::random_shuffle(ptr_start, ptr_end);
    for (int j = 25; j > 0; j--)
    {
        for (int i = 0; i < 25; i++)
        {
            if (CRYPT[i] == order_letters[i])
            {
                char temp = CRYPT[i];
                CRYPT[i] = CRYPT[i+1];
                CRYPT[i+1] = temp;
            }
        }
        if (CRYPT[25] == order_letters[25])
        {
            char temp = CRYPT[25];
            CRYPT[25] = CRYPT[24];
            CRYPT[24] = temp;
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < 25; i++)
    {
        std::cout << order_letters[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 25; i++)
    {
        std::cout << CRYPT[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}