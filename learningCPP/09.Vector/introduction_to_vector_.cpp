#include <iostream>
#include <vector>

using namespace std;

/*
NOTE 1.

--> vector is a class template that allow us to use random element .
--> it is similar to array ,as it stores many value in linear order.
-->difference between array and vector is array is constant sized array and vector is a dynamic
array where we can reallocate array whenever we want

*/

void print_vector(vector<int>VEC)
{
   for (int VEC_index : VEC)
   {
      cout << VEC_index << ";  ";
   }
    
}



int main()
{
   /*
      NOTE 2.

      How to initalize vector element?

      vector <datatype> vector name; --> initial empty vector

      vector <datatype> vector name={value of elements};

      vector <datatype> vector name (vector size, value of element);

      vector <datatype> vector name=(other vector name to have the same size other vector);



      NOTE 3.

      vector elements will be work as for h loop

      for(vector index : vector name)
      {
      // copy yur function
      }


   */
  
   // 1

   vector<int> vec_1 = {10, 20, 30, 40, 50};
   cout << "vector 1 : \n";
   print_vector(vec_1);
   cout << "\n\n";

   // 2

   vector<int> vec_2(4, 100);
   cout << "vector 2 : \n";
   print_vector(vec_2);

   cout << "\n\n";

   // 3

   vector<int> vec_3(vec_1);
   cout << "vector 3 : \n";
   print_vector(vec_3);
   

   /*
   NOTE 10.

   clear() helps to clear the total vector and size turns into 0

   here size will 0
   as well as capacity will be 0


   */
}