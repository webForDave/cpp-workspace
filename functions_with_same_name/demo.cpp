#include <iostream>
using namespace std;

void user1();
int main()
{
    user1();
    return 0;
}


void print(int x){
    cout << x << endl;
}

void print(double x){
    cout << x << endl;
}

void print(string x){
    cout << x << endl;
}


void user1(){
    print(5);
    print(2.5);
    print("Hello world");
}