#include <iostream>
using namespace std;

// creating a namespace with multiple children
namespace myNamespace{
    int first_variable = 10;
    namespace secondNamespace{
        void logMessage(){
            cout << first_variable << endl;
        }
        namespace thirdNamspace{
            void thirdMessage(){
                cout << "Hello from third namespace" << endl;
            }
        }
    }
}


int main()
{
    myNamespace::secondNamespace::logMessage();
    myNamespace::secondNamespace::thirdNamspace::thirdMessage();
    return 0;
}