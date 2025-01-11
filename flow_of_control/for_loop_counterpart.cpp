#include <iostream>


int main(){
    int sum = 0;
    for(int num = 0; num <= 10; num++){
        sum += num;
    }
    std::cout << "Sum: " << sum;
    return 0;
}