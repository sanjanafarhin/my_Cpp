#include <iostream>
#include <cmath>

/*NOTE 1.

FORMAT WRITTING

do {

    do {
    //inner loop
}
while(condition);

}
while(condition);
*/

using namespace std;

int main()
{
    cout << "choose the range: " << endl;
    int start, end;
    cin >> start >> end;

    int i = start;
    int j;
    do
    {
        j = 0;
        do
        {
            cout << "*";
            j++;

        } while (j <= i);
        cout << "\n";

        i++;

    } while (i <= end);
}