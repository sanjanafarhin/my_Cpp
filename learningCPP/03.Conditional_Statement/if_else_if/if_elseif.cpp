#include<iostream>
#include <string>

using namespace std;

int main(){

/*
2. if(condition)
{
    if it is true}
    
    else if (condition)
    {
    if it is true 
    }
    
    else{
    if every conditions are false 
    }*/

    string ordered;
    string AvaiableFOOds[6]={"Chicken tikka","Alfredo Pasta","Tandoori Chicken","Biriyani","Shik Kabab and Garlic nun","Polao-roast"};
    cout << "What did you order for yourself as dinner? " <<endl;
    getline(cin,ordered);
    if(ordered==AvaiableFOOds[0]){
        cout << "you have ordered " << (AvaiableFOOds[0]) << " as dinner" << endl;
    }
    else  if (ordered==AvaiableFOOds[1]){
         cout << "you have ordered " << (AvaiableFOOds[1]) << " as dinner" << endl;
    }
    else  if (ordered==AvaiableFOOds[2]){
         cout << "you have ordered " << (AvaiableFOOds[2]) << " as dinner" << endl;
    }
    else  if (ordered==AvaiableFOOds[3]){
         cout << "you have ordered " << (AvaiableFOOds[3]) << " as dinner" << endl;
    }
    else  if (ordered==AvaiableFOOds[4]){
         cout << "you have ordered " << (AvaiableFOOds[4]) << " as dinner" << endl;
    }
    else  if (ordered==AvaiableFOOds[5]){
         cout << "you have ordered " << (AvaiableFOOds[5]) << " as dinner" << endl;
    }
    else  {
         cout << "you have ordered " << "nothing" << " as dinner" << endl;
    }
}