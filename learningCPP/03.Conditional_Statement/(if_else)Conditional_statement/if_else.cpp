#include<iostream>
#include<string>

using namespace std;


/*FORMAT OF WRITTING 
1. if(condition)
{
if it is true
     }
else
{
   if it is false
}
   */

int main()
{


string enter_the_resturant;
   string food_for_dinner;
   cout <<"do you wanna come in the resturant? " << endl;
   cin >> enter_the_resturant;
   cin.ignore();

   if("yes"==enter_the_resturant ||"Yes"==enter_the_resturant || "YES"==enter_the_resturant){
    cout <<"WELCOME IN THE VILLA KITCHEN"<<endl;
   }
   else{
    cout <<"YOU DIDN'T enter the resturant"<<endl;
    return 0;
   }
}