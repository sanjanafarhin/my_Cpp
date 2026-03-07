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

  how to initalize elements from keyboard

  int i=0; --->initalize

  for(int i=0; i < vector.size();i++)
  {
     cin >> vectorname[i];

  }


  */

   vector<int> vec_4(10, 0);

   cout << " insert element in vector 4 : ";

   for (int i = 0; i < vec_4.size(); i++)
   {
      cin >> vec_4[i];
   }

   /*
   NOTE 2.

   for(int &input_index : vectornae)
    {
          cin >> input_index;

    }

    */

   vector<int> vec_5(10);

   cout << " insert element in vector 5 : ";

   for (int &index : vec_5)
   {
      cin >> index;
   }

   print_vector(vec_4);
   cout << "\n";
   print_vector(vec_5);

   /*
   NOTE 3.

   for(autp i= vectorname.begin();i!=vectorname.end();i++)
   {
    cin >> *i;
   }
   
   */

   vector<int>vec_6(10);
   for(auto i= vec_6.begin();i!=vec_6.end();i++)
   {
      cin >> *i;
   }
}
