#include <iostream>
void new_function();

int myInt;

int main()
{
    using namespace std;
    cout << "Enter favorite number " << endl;
    cin >> myInt;
    cout << "You entered " << myInt << " added with 100 is " << myInt + 100 << endl;
    new_function();
    return 0;
}

void new_function()
{
    cout << "Hello from function beneath main" << endl;
}
