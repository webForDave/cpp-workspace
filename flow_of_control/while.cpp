#include <iostream>


int main()
{
    int num = 50, sum = 0;
    while(num <= 100){
        sum += num;
        ++num;
    }
    std::cout << "Sum of 50 to 100 is " << sum;
    return 0;
}