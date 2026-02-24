#include <iostream>
#include <cstdlib>
#include <cmath>
#define N 5 

/*
NOTE 1.

A DYNAMIC ARRAY is an array whose size can be changed during runtime and memory is allocated in heap.

---> Size can be changed during runtime

---> it can be resized by "realloc()"

---> The memory can be managed maually allocted untill you free it

---> Location can be deleted by delete[] array name or free(array name)


*/





using namespace std;

int main()
{

//NOTE 2. as it is memory allocation ,the array must be pointer

/*
NOTE 3. 
Memory allocation by pointer for array by 'malloc'
STRUCTURE: array=(datatype*)malloc(n*sizeof(datatype))
*/

int* DynamicArray = (int*) malloc(N * sizeof(int));

cout << "enter the inputes" <<endl;
/*
NOTE 4.

         index          |    address
    ------------------------------------

     (Array_Ptr + 0) ----> 1000+0 = 1000
     (Array_Ptr + 1) ----> 1000+4 = 1004
     (Array_Ptr + 2) ----> 1004+4 = 1008
     (Array_Ptr + 3) ----> 1008+4 = 1012
     (Array_Ptr + 4) ----> 1012+4 = 1016

  NOTE 5.
  
  here 'Array' represents te first index of array's address
  array=(datatype*)malloc(n*sizeof(datatype)) means if n=5 that it hold 5 * sizeof(datatype) memory 

  suppose array=(int*)malloc(n * sizeof(int))---> it holds 5*4=20 byte memory

*/


for(int i=0; i<N; i++){             

    cin >> *(DynamicArray + i);

    /*
    NOTE 6.

    here (Dynamic Array + i) mean the address of each indexes ,adding "*" help 
    to access to the value in the address 
    */
}


for(int i=0; i<N; i++){             

    cout << *(DynamicArray + i) <<" " ;
}
}
