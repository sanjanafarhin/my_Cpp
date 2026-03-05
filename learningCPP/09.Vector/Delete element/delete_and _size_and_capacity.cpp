#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> VEC)
{
    for (int VEC_index : VEC)
    {
        cout << VEC_index << ";  ";
    }
}

int main()
{
    vector<int> vec_1 = {10, 20, 30, 40};

    /*
    NOTE 1.
    vectorname.pop_back()

    > removes the last element
    > it does effects the size
    > it doesn't change capacity

    */
    cout << "vector 1 before pop_back in vector : \n";
    print_vector(vec_1);
    cout << "\n\n";
    vec_1.pop_back();
    vec_1.pop_back();
    vec_1.pop_back();
    cout << "vector 1 after pop_back in vector : \n";
    print_vector(vec_1);
    cout << "\n\n";
    cout << "size of the elemnt after pop :" << vec_1.size() << endl;         // size = 1
    cout << "capacity of the element after pop:" << vec_1.capacity() << endl; // capacity =4
    cout << "\n\n";

    vector<int> vec_2 = {10, 20, 30, 40, 50, 60, 70, 80};
    print_vector(vec_2);
    cout << "\n\n";
    cout << "size of the element of vector 2  :" << vec_2.size() << endl;       // size = 8
    cout << "capacity of the element of vector 2:" << vec_2.capacity() << endl; // capacity=8
    cout << "\n\n";

    /*
    NOTE 2.
    vectorname.erase(start,end)
    start-> removing element from
    End -> until the end
    example: vectorname.erase(vectorname.begin()+1,vectorname.begin()+7) --->element will be deleted from 1 to 6

    > removes the start to end element

    > it does effects the size

    > it doesn't change capacity

    */
    vec_2.erase(vec_2.begin() + 2, vec_2.begin() + 6);

    cout << "vector 2 :" << endl;
    print_vector(vec_2);
    cout << "\n\n";
    cout << "size of the elemnt after erasing :" << vec_2.size() << endl;         // size = 1
    cout << "capacity of the element after erasing:" << vec_2.capacity() << endl; // capacity =4

     /*NOTE 3.
    vectorname.clear()
    

    > removes all element

    > it does effects the size,size=0

    > it does not change 

    */
    vec_2.clear();
    cout << "\n\n";
    cout << "size of the elemnt after clearing:" << vec_2.size() << endl;         // size = 1
    cout << "capacity of the element clearing:" << vec_2.capacity() << endl; // capacity =4


}