#include <iostream>
#include <cmath>

using namespace std;


/*

NOTE 1.

--->when we basically pass the value the changes will happen in the function but not in main
--->Call by Value means a copy of the variable is sent to the function.

NOTE 2.

✔ Protects original data
✔ Safer for small data types (int, float, char)
✔ Prevents accidental modification


*/
void swap_value(int int_1,int int_2) //<--- calling by value
{
    int temp;
    temp=int_1;
    int_1=int_2;
    int_2=temp;
    cout << "In function After sawp:"<< int_1 << int_2  << endl; // 20 30
}

int main()
{
    int value_1=30;
    int value_2=20;

    cout << "Before sawp:"<<value_1 << value_2  << endl; // 30 20
    swap_value(value_1,value_2);
    cout << "outside the function After sawp:"<<value_1 << value_2  << endl; // 30 20 


}