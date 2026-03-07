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

    cout << "take input:";
    takeinput(vec_1);
    
    /*
    NOTE 1.

    for (int index :vector name)
    {
     //code
     access each index by index
    }

    */
    cout << "VECTOR 1:";
    for (int input_vec : vec_1)
    {
        cout << input_vec << " ";
    }

    cout << "\n\n";

    vector<int> vec_2(5);
    cout << "take input:";
    takeinput(vec_2);

    vector<int> vec_3(5);
    cout << "take input:";
    takeinput(vec_3);

    /*
    NOTE 2.

    for(int i=0;i < vectorname.size();i++)
    {
        cout << vectorname[i];
    }

    */

    cout << "VECTOR 2:";

    for (int i = 0; i < vec_2.size(); i++)
    {
        cout << vec_2[i] << " ";
    }

    cout << "\n\n";

    /*NOTE 3.

    for(int i=0;i < vectorname.size();i++)
    {
        cout << vectorname.at(i);
    }

    */

    cout << "VECTOR 3:";

    for (int i = 0; i < vec_3.size(); i++)
    {
        cout << vec_3.at(i) << " ";
    }
    
    cout << "\n\n";

    /*
    NOTE 4.

    To access the first index element use vectorname.front()
    ,, ,,     the Last index element ise vectorname.back()
    */

    cout << "first elemnt of vector 2: " << vec_2.front() << endl;
    cout << "last element of vector 2 :" << vec_2.back() << endl;

    /*
    NOTE 5.
    How to access front and back and direct element?
    vectorname.front()=variable 1;
     vectorname.back()=variable 2;

    */
    vec_2.front() = 90;
    vec_2.back() = 100;
    *(vec_2.begin() + 1) = 80;
    cout << "first elemnt of vector 2: " << vec_2.front() << endl;
    cout << "last element of vector 2 :" << vec_2.back() << endl;
}