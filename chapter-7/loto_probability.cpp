// loto_probability.cpp -- вероятность выигрыша
#include <iostream>
double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    double total, choices, total_mega;
    cout << "Enter the total number of choices on the game card and\n"
            "the number of picks allowed:\n";
    if ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices);      // compute the odds
        cout << " of winning.\n";
    }
    cout << "Enter the total number of mega choices on the game card:\n";
    if (cin >> total_mega)
    {
        cout << "You have one chance in ";
        cout << probability(total_mega, 1);      // compute the odds
        cout << " of winning.\n";
    }
    cout << endl << "The total probability of winning: " 
     << probability(total, choices) * probability(total_mega, 1);
    cout << "\nbye\n";
    cin.get();
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;  // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result;
}