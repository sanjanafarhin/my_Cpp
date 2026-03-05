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

  NOTE 7.

  how to initalize elements from keyboard

  int i=0; --->initalize

  for(int i=0; i < vector.size();i++)
  {
     cin >> vectorname[i];

  }


  */

   vector<int> vec_4(10, 0);

   cout << " insert element: ";

   for (int i = 0; i < vec_4.size(); i++)
   {
      cin >> vec_4[i];
   }
   print_vector(vec_4);
