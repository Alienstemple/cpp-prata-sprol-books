
#include <iostream> 
#include <random>
#include <algorithm>
#include <numeric>
 
int main()
{
    std::random_device rd;
    auto pyramid = [](bool cmp_value, bool acc) { return acc || cmp_value; };
    auto cmp = [](char c1, char c2) { return c1 == c2; };
 
    std::string line(26u, 'A'), line_shuffle(26u, 'A');
    std::iota(std::begin(line), std::end(line), 'A');
    std::copy(std::begin(line), std::end(line), std::begin(line_shuffle));
    for (;;)
    {
        std::shuffle(std::begin(line_shuffle), std::end(line_shuffle), rd);
        if (!std::inner_product(std::begin(line), std::end(line), std::begin(line_shuffle), false, pyramid, cmp))
            break;
    }
    std::cout << line_shuffle << "\n";
 
    system("pause");
    return 0;
}