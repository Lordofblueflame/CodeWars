#include <iostream>

int TriangularNumbers(int n) {
    if (n > 1) 
    {
        return n + TriangularNumbers(n-1);
    }
    else if(n==1)
    {
        return 1;
    }
    else
        return 0;
}

int sumTriangularNumbers(int n) {
    long sum = 0;
    for(int i = 0; i < n;n--)
    {
       sum+=TriangularNumbers(n);
    }
    return sum;
}

int main()
{
    std::cout<<sumTriangularNumbers(34)<<std::endl;

    return 0;
}