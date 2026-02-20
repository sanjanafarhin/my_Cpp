#include <iostream>
#include <string>

using namespace std;

void variable()
{  
     //initalization 
    int int_number =10; 
    //data size 4 byte

    float float_number=9.9; 
    //data size 4 byte

    double double_number=9.9898; 
    //datasize 8 byte and can convert into integer and float

    char char_variable='c';
     //data size 1 byte

    bool boolean_variable= true;
    //"bool" existing variables are true/false, 0=false,1 or any character and number =true

    //print variables

    cout << "integer :" << int_number << endl;
    cout << "float :" << float_number << endl;
    cout << "double :" << double_number << endl;
    cout << "character :" << char_variable << endl;
    cout << "Boolean :" << boolean_variable << endl;
    


}

int main()
{
    variable();
}

