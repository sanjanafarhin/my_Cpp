#include<iostream>
#include <string>
#include <cmath> 
//TO USING round(), ceil(), floor()

using namespace std;

int main()
{   
    //int DataCasting
    
    //float variable
    float SampleData_1 = 10.55;

    int result=(int)SampleData_1;
    cout << "After integer Data Casting 10.55: " << result << endl;
    
    //double variable
    double SampleData_2 = 9.9999999999;

    result=(int)SampleData_2;
    cout << "After integer Data Casting 9.99999999999: " << result << endl;
    
    //Character variable
    char SampleData_3= 'B';
    //we will get the ASCII value of the character 

    result=(int) SampleData_3;
    cout << "After integer Data Casting 'B': " << result << endl;


    //float DataCasting
    
    //float variable
    int SampleData_4 = 10;

    float result_1=(float)SampleData_4;
    cout << "After float Data Casting 10: " << result_1 << endl;
    
    //double variable
    double SampleData_5 = 100.9999999999;

    result_1=(float)SampleData_5;
    cout << "After float Data Casting 100.99999999999: " << result_1 << endl;
    
    //Character variable
    char SampleData_6= 'C';
    //we will get the ASCII value of the character 

    result_1=(float) SampleData_6;
    cout << "After float Data Casting 'C': " << result_1 << endl;
    
   //Round value
   /*
   ex: if 5.6 round value will be 6 
   ex: if  5.3 round value  will be 5
   */
    float SampleData_7=12.3333377;
    cout << " Round value 12.3333377: " << round(SampleData_7) <<endl; 
    //round value will be 12

    //floor value 
    /* 
    if 5.6 floor value will be 5
    if 5.1 floor value will be 5
    */
    SampleData_7=12.9977;
    cout << "Floor value 12.9977: " << floor(SampleData_7) <<endl; 
    //round value will be 12

    //Ceil value 
    /* 
    if 5.6 Ceil value will be 6
    if 5.1 Ceil value will be 6
    */
    SampleData_7=12.9977;
    cout << "Ceil value 12.9977: " << ceil(SampleData_7) <<endl; 
    //round value will be 13

    //double typecasting

    //integer value
    int SampleData_8=10;

    double result_2;
    result_2= (double) SampleData_8;
    cout << "After Double datacast 10 : " << result_2 <<endl;//10
    

    //float value
    float SampleData_9=10.78;

    result_2= (double) SampleData_9;
    cout << "After Double datacast 10.78 : " << result_2 <<endl;//10.78


    //character datacasting
    
    //integer
    int SampleData_10=70;

    char result_3=(char)SampleData_10;
    cout << "After character datacast 70 : " << result_3 <<endl;//F

    //float

     float SampleData_11=70.99;

    result_3=(char)SampleData_11;
    cout << "After character datacast 70.99 : " << result_3 <<endl; //F

    //double

     double SampleData_12=70.99999;

    result_3=(char)SampleData_12;
    cout << "After character datacast 70.99999 : " << result_3 <<endl;//F
}