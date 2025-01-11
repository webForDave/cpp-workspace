#include <iostream>


int main()
{
    int first_num, last_num;
    std::cout << "Enter two numbers " << std::endl;
    std::cin >> first_num >> last_num;
    while(first_num <= last_num){
        std::cout << first_num << std::endl;
        first_num++;
    }

    return 0;
}