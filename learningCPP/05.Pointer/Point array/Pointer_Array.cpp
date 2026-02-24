#include <iostream>
#include <cstdlib>
#include <cmath>
#define N 5 

using namespace std;

int main(){
   //Assigning Normal Array 
   int Array[N];


   //Assigning point array

   /*

   Array_ptr = assigned the first index of array address
   suppose Array_ptr=1000;

   */
   int* Array_Ptr=Array; 

   //input taking

   /*
   (Array_Ptr+i)--->' i' represents the size of an integer that means 4 byte

   
      index              |    address
    ------------------------------------

     (Array_Ptr + 0) ----> 1000+0 = 1000
     (Array_Ptr + 1) ----> 1000+4 = 1004
     (Array_Ptr + 2) ----> 1004+4 = 1008
     (Array_Ptr + 3) ----> 1008+4 = 1012
     (Array_Ptr + 4) ----> 1012+4 = 1016

   */
   for(int i=0;i<N ;i++){
    cin >> *(Array_Ptr + i);
   }

   //print array
   for(int i=0;i<N;i++){
    cout << *(Array_Ptr + i) << "," ;
   }

}