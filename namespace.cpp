#include <iostream>
using namespace std;

namespace myNameSpace {
    int myInt;

    namespace innerNameSpace {
        void newFunction()
        {
            cout << "Hello from the inner namespace" << endl;
        }
    }
}

using namespace myNameSpace;

int main()
{
    cout << "Enter a number ";
    cin >> myInt;
    cout << "You entered " << myInt << endl;
    innerNameSpace::newFunction();
    return 0;
}
