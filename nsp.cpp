#include <iostream>
using namespace std;

int first_variable = 10;

// creating a namespace with multiple children
namespace myNamespace{
    namespace secondNamespace{
        void logMessage(){
            cout << first_variable << endl;
        }
        namespace thirdNamspace{
            int second_var = 20;
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