#include <iostream>
using namespace std;

void user1();
void user2();
int main()
{
    user1();
    user2();
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

void print(int x, double y){
    cout << x << endl << y << endl;
}

void print(double x, int y){
    cout << x << endl << y << endl;
}



void user1(){
    //print(5);
    //print(2.5);
    //print("Hello world");
}

void user2(){
    print(2.5, 10);
    print(0, 0); //raises ambiguous error
}