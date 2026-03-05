#include <iostream>
#include <cmath>

using namespace std;
/*
NOTE 1.
In Call by Reference, the function receives the original variable, not a copy.

So if the function changes the parameter the original variable changes too.

*/

void balance(float* balance_taka)
{
   
    if(*balance_taka <=50000)
    {
       *balance_taka = *balance_taka - (*balance_taka * 0.25);
    }
    else if(*balance_taka <=100000)
    {
        *balance_taka = *balance_taka - (*balance_taka * 0.50);
    }
    else{
        *balance_taka = *balance_taka - (*balance_taka * 0.75); 
    }
   
}

int main()
{
    float balances;
    cin >> balances;
    balance(&balances) ; //sent address
    cout <<"salary: " << balances <<endl;

}