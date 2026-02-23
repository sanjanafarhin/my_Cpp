#include <iostream>
#include <string>

/*
DEFINITION: A while loop is used when we don’t know exactly how many times the loop will run.
It runs as long as the condition is true.


NOTE 1.

FORMAT OF WRITING

// initialization of inner loop
    while (inner_condition)
    {
        // inner loop body

        // inner increment/decrement
    }



 NOTE 2.

 Condition is checked first.

If true → loop body runs.

After execution, condition is checked again.

If false → loop stops.
*/

// Suppose you want reverse a number example: 123 reverse 321

using namespace std;

int main()
{
    int number;
    int rem, sum, count;
    int num[100];

    cout << "Enter a number: " << endl;
    cin >> number;

    int save = number;
    count = 0;
    sum = 0;

    while (number != 0)
    {
        rem = number % 10;
        sum = sum + rem;
        number = number / 10;
        count++;
    }

    number = save;
    num[count];

    int i = 0;
    while (number != 0)
    {
        rem = number % 10;
        sum = sum + rem;
        number = number / 10;
        num[i] = rem;
        i++;
    }

    int j = 0;
    while (j < count)
    {
        cout << num[j];
        j++;
    }
}