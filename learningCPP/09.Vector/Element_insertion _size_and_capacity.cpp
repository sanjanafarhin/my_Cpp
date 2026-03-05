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
    /*
  NOTE 1.
  function

  vectorname.push_back(variable)-->push variable in

  what is size and capacity

  size-> how many element vector currently holding
  capacity -> how many element the vector can hold without allocating memory

  10 | 20 | 30 | 40 | 50 |   |   |   |   |   |
   0    1    2    3    4   5   6   7   8   9

  <--------SIZE---------> size=5
  <-----------------CAPACITY----------------->capacity=10

  */

    int s;
    vector<int> vec_1 = {10, 20, 30, 40, 50};

    cout << "size of the element before push back :" << vec_1.size() << endl; //size= 5
    cout << "capacity of the element before push back:" << vec_1.capacity() << endl; //capacity =5
    cout << "\n\n";

    vec_1.push_back(90);
    vec_1.push_back(70);

    cout << "vector 1 after push_back 90 and 70 in vector : \n";
    print_vector(vec_1);
    cout << "\n\n";
    

    /*
    NOTE 2.

    whenever we want to push back or insert element the capacity of vector doubles with the inital size 
    here inital size of vec_1 is 5
    after push_back 2 elements the capacity turned into 5*2 = 10;
    and capacity remians unchanged after that
    
    */

    cout << "size of the elemnt after push back :" << vec_1.size() << endl; //size = 7
    cout << "capacity of the element after push back:" << vec_1.capacity() << endl; //capacity = 10

    /*
    NOTE 3.

   Iterators: vectorname.begin() --> first index
              vectorname.end()  --> last index +1
              (vectorname.end -1) --> last index

   direct access to Iteration :
   *(vectorname.begin())-->first element
   *(vectorname.end()-1)-->last element

   */
    cout << "\n\n";
   cout << "first element :" << *(vec_1.begin()) << endl;
   cout << "Last element :" << *(vec_1.end() - 1) << endl;

    /*
   NOTE 3.

   vectorname.insert(vectorname.begin()+index number, variable);

   */

    cout << "\n\n";

    vec_1.insert(vec_1.begin() + 3, 44); // 3 index -> 44
    vec_1.insert(vec_1.begin() + 4, 55); // 4 index -> 55
    cout << "vector 1 after inserting values in vector : \n";
    print_vector(vec_1);
    cout << "\n\n";

    cout << "size of the elemnt after push back :" << vec_1.size() << endl;  //size = 9
    cout << "capacity of the element after push back:" << vec_1.capacity() << endl; //capacity =10

    /*
    
    NOTE 4.
    vectorname.reserve(n) helps to pre allocate memory for n element

    */
}
