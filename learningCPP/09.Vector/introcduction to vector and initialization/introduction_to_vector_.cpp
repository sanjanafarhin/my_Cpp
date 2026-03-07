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

      vector elements will be work as for h loop

      for(vector index : vector name)
      {
      // copy your function
      }


   */
  
   /*vector <datatype> vector name; --> initial empty vector
   vector content NULL element
   */

  vector<int>vec;
   
  // vector <datatype> vector name={value of elements}; --> initialize element directly in vector
   vector<int> vec_1 = {10, 20, 30, 40, 50};
   cout << "vector 1 : \n";
   print_vector(vec_1); 
   cout << "\n\n";

   /*vector <datatype> vector name (vector size, value of element); --> pre -initialize given element in the vector
   that mean suppose vector<int>vector_name(4,10) then the vector will contant {10 10 10 10}
   */

   vector<int> vec_2(4, 100);
   cout << "vector 2 : \n";
   print_vector(vec_2);

   cout << "\n\n";
  
   // vector <datatype> vector name=(other vector name to have the same size other vector);
   vector<int> vec_3(vec_1);
   cout << "vector 3 : \n";
   print_vector(vec_3);
   

}