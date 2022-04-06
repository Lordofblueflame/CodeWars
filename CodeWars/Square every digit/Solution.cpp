#include <iostream>
#include <string>

int square_digits(int num) {
    std::string squereNumbers;
    std::string toStringNumber = std::to_string(num);
    int a = 0;
    for(auto x: toStringNumber)
    {
        a = x-48;
        a*=a;
        squereNumbers+=std::to_string(a);
    }
    a = std::stoi(squereNumbers);
    return a;
}

int main()
{
    std::cout<<square_digits(23);
    return 0;
}