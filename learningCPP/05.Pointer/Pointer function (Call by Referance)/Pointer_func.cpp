#include <iostream>
#include <cmath>

using namespace std;
/*
NOTE 1.
void func (datatype* var) <---Address as parametre
{
datatype* var_2 = var; <--- Addressing variable = Address

//any work excution
}

*/

/*
NOTE 2.

When parametre of a function is pointer 

--->we can directly use it as value 
EX: 
void func(datatype* var)
{

(*var)++;

}

---> we can assign it to pointer variable and then work that like a value 
EX: 
void func(datatype* var)
{
int* variable;
variable=var; ADDRESS = ADDRESS;

(*variable)++;

}

*/
void swap(int *var_1, int *var_2)
{
    int temp;

    temp = *var_1;
    *var_1 = *var_2;
    *var_2 = temp;
}

/*
Note 3.
when function itself a pointer , we have assign a pointer variable to take this pointer 
fuction & we have to return address not value
*/

int *func(int *var_3)
{
    int *var_1_ptr;
    var_1_ptr = var_3;
    (*var_1_ptr)++;
    return var_1_ptr;
}

//pointer recursion
int fac(int *var_4)
{
    int factorial;
    if (*var_4 == 1)
    {
        return 1;
    }
    else
    {
        *var_4 = (*var_4) - 1;
        factorial = ((*var_4) * fac(var_4));
        return factorial;
    }
}

int main()
{
    int a, b;
    cout << "do you want to swap two variable?" << endl;
    cin >> a >> b;
    cout << "Before swap a : " << a << " and" << " b: " << b << endl;
    swap(&a, &b);
    cout << "After swap a :" << a << " and" << " b: " << b << endl;

    int *plusone;
    int factorial;
    int n = 3;
    plusone = func(&n);
    cout << "after function: " << *plusone << endl;

    factorial = fac(plusone);
    cout << "after factorial: " << factorial << endl;
}