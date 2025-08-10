#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *aptr = &a;
    cout<< "Value of a: " << a << endl;
    cout<< "Address of a: " << &a << endl;
    cout<< "Value of aptr: " << aptr << endl;
    cout<< "Value pointed to by aptr: " << *aptr << endl;
    return 0;
}