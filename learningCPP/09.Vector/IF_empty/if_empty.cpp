#include <iostream>
#include <vector>

using namespace std;

void takeinput(vector<int> &vec)
{
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cin >> *i;
    }
}

int main()
{
    vector<int> vec_1(5);
    vector<int>vec_2;

    cout << "take input:";
    takeinput(vec_1);

    /*    bool empty = vectorname.empty()
    if empty vector --> 1;
    if no empty vector --> 0;

    */
   bool empty = vec_1.empty();
   cout << "if empty  or not vec-1 :"<< empty <<endl;
   empty = vec_2.empty();
   cout << "if empty  or not vec-2 :"<< empty <<endl;
}