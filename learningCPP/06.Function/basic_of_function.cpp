#include <iostream>
#include <string>
using namespace std;

/*
NOTE 1.

datatype Function_name(datatype parameters)
{
 //function body

 return var; --> function will return based on the 
                 type of function
}
*/

int averge_of_marks(int marks[],int size)
{  int avg,sum;
    sum=0;
    for(int i=0;i<size;i++)
    {
     sum=sum+marks[i];
    }
    avg=sum/3;
    return avg;
}


/*
NOTE 2.

sometime it is not necessary to have a datatype so use void instead
void Function_name(datatype parameters)
{
 //function body

 //there will no return type so there will be no return
}
*/

void display(int average)
{
    cout << "the avg marks : "<< average <<endl;
}


/*
NOTE 3.

we can also have the default paramater in function
datatype Function_name(datatype parameters_name=value)
{
 //function body

return datatype;
}
*/


float credits(int low_avg_limit=90)
{
    if(low_avg_limit<=90)
    {
        return 4.00;
    }
    else{
        return 3.67;
    }
} 

int main()
{
    int marks[5]={89,90,99,87,78};
    int average=averge_of_marks(marks,5);
    display(average);
    float credit=credits();
    cout << "credits: "<< credit <<endl;
}