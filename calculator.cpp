#include <iostream>
using namespace std;

namespace addition{
    int add(int a, int b){
        return a + b;
    }
}

namespace subtraction{
    int sub(int a, int b){
        return a - b;
    }
}

char operand;
int a,b;


int main()
{
    cout << "Enter an operand ";
    cin >> operand;
    cout << "Enter two numbers ";
    cin >> a >> b;
    
    if (operand == '+'){
        cout << addition::add(a, b);
    }
    else if(operand == '-'){
        cout << subtraction::sub(a, b);
    }
    return 0;
}