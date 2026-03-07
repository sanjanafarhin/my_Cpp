#include <iostream>
#include <vector>

using namespace std;

void input(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
}

int main()
{
    vector<int> vec_1(2);
    vector<int> vec_2(2);

    cout << "Take Input : ";
    input(vec_1);
    input(vec_2);
    /*
    NOTE 1.
    vec_1 elements will be shifted to vec_2
    vec_2 elements will be shifted to vec_1
    */

    vec_1.swap(vec_2);
    cout << vec_2[0] << vec_2[1] << endl;


}