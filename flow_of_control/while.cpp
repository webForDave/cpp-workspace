#include <iostream>
using namespace std;


int main()
{   
    int sum = 0, val = 0;
    while (cin >> val){
        sum+= val;
    }
    cout << "Sum is " << sum; 
    return 0;
}