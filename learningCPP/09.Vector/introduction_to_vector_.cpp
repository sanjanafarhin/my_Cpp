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

  
   

   vec_1.pop_back();
   vec_1.pop_back();
   vec_1.pop_back();
   cout << "vector 1 after pop_back in vector : \n";
   print_vector(vec_1);
   



  

   /*

   NOTE 9.

   erase() function helps to erase or remove some
   elements is the vector

   erase(start,end);
   ex: erase(vector name.begin()+1,vector.begin+6) --> elemnt from 1-5 index will removed
   
   all tho in removes the element the capacity of eleement will remain the same

   */

   vec_4.erase(vec_4.begin() + 1, vec_4.begin() + 2); // remove index 1 only

   cout << "\n\n";

   cout << "vector 4 after erase 1th index elements :" << endl;

   print_vector(vec_4);

   cout << "\n\n";

   vec_4.erase(vec_4.begin() + 2, vec_4.begin() + 6); // remove index 1 to 5
   cout << "vector 4 after erase 2 to 5th index elements :" << endl;

   print_vector(vec_4);
   /*
   NOTE 10.

   clear() helps to clear the total vector and size turns into 0

   here size will 0
   as well as capacity will be 0


   */
}