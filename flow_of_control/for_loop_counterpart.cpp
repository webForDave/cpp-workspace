#include <iostream>
using namespace std;


int main(){
    int sum = 0;
    for(int num = 0; num <= 10; num++){
        sum += num;
    }
    cout << "Sum: " << sum;
    return 0;
}