#include <iostream>
#include <cmath>

using namespace std;

/*
NOTE 1.

Pointer initialization:
-> int* ptr/any_variable_name;
-> int *ptr/*any_variable_name;

*/

int main()
{
    int var_1 = 20;
    int *pointer_var;
    pointer_var = &var_1;

    /*
    NOTE 2.
    '&' is used to identify the variable address and it only and only being used in
    pointer variable not in random variable
    */

    cout << "Display VARIABLE ADDRESS with pointer variable: " << pointer_var << endl;
    cout << "Display VARIABLE ADDRESS with variable address : " << &var_1 << endl;
    cout << "\n";

    /*
    NOTE 3.
    when you attah '*' while the pointer variable , it will show the assigned value in that
    particular address
    */

    cout << "Display value of variable with pointer variable: " << *pointer_var << endl;
    cout << "Display value of variable with variable  : " << var_1 << endl;
    cout << "\n";
}