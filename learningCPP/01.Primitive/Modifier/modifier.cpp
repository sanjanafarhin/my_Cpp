#include <iostream>
#include <string>

using namespace std;

/*

    | **Modifier**   | **Use of Modifier**                                            |
    | -------------- | -------------------------------------------------------------- |
    | `signed`       | Allows both positive and negative integer values               |
    | `unsigned`     | Allows only positive integer values (increases positive range) |
    | `short`        | Reduces size of 'integer' type                                 |
    | `long`         | Increases size of 'integer' type                               |
    | `long long`    | Provides very large 'integer' range                            |
    | `const`        | Prevents value modification                                    |

    */

int main()
{  
    //"Signed" Allows both positive and negative integer values 
    signed int signed_interger_positive_variable = 21;
    signed int signed_interger_Negative_variable = -21;

    //"Unsigned" allows only positive interger  value 
    unsigned int unsigned_interger_positive_variable = 10;

    //"Short" reduces the size of integer
    // "Short" variable range (–32,768 to 32,767) ,we can't go out of this range
    // "short" only accept variable which are 2 bytes
    short int short_variable_postive=10000; 
    short int short_variable_negative= -16000;

    //"long" Increases size of 'integer' type  
    //"long" accepts integers size of 4 or 8 bytes (Depends on system)
    long int long_variable=900000;

    //"long long" Provides very large 'integer' range
    //"long" accepts integers size of 8 bytes (large size integers)
    long long int long_long_variable=1000000000000;

    //"const" Prevents value modification which is consider as constant 
    //it is fixed and can't be changed 
    const int b=10;
   // b=13; as  b's constant variable is 10 ,we can not newly assign b variable as 13



    cout <<"signed postive integer: " << signed_interger_positive_variable <<endl;
    cout <<"signed negative integer: " << signed_interger_Negative_variable <<endl;
    cout <<"unsigned postive integer: " << unsigned_interger_positive_variable <<endl;
    cout <<"short postive integer: " << short_variable_postive <<endl;
    cout <<"short negative integer: " << short_variable_negative <<endl;
    cout <<"long postive integer: " << long_variable <<endl;
    cout <<"long long integer: " << long_long_variable <<endl;
    cout <<"constant variable: " << b <<endl;




    
}