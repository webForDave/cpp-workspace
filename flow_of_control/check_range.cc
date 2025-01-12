#include <iostream>
using namespace std;


int main()
{
    int first_num, last_num;
    cout << "Enter two numbers " << endl;
    cin >> first_num >> last_num;
    while(first_num <= last_num){
        cout << first_num << endl;
        first_num++;
    }

    return 0;
}