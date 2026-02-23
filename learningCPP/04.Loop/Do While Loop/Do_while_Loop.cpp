#include <iostream>
#include <cmath>

/*
DEFINITION: A do...while loop is a loop that runs the code first, then checks the condition.
It always runs at least one time, even if the condition is false.

NOTE 1.
FORMAT WRITTING
do {
    // code to execute
    }
    while(condition);
    
NOTE 2.
Code inside do { } runs first.

Then the condition is checked.

If condition is true, it runs again.

If false, the loop stops.
*/

using namespace std;

int main()
{
    cout << "choose the range: " << endl;
    int start, end;
    cin >> start >> end;

    int i = start;
    do
    {
        if (i % 2 == 0)
        {
            cout << i << ", ";
        }
        i++;

    } while (i <= end);
}