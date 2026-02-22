#include<iostream>
#include<string>

using namespace std;

//4
    /* 
    switch (expression) {
    case value1:
        // code if expression == value1
        break;
    case value2:
        // code if expression == value2
        break;
    ...
    default:
        // code if expression doesn't match any case
}*/


int main()
{
    int ordered_desert_no;
    cout <<"which desert you wanna order?" <<endl;
    string Avaiable_desert[5]={"Golap Jamun","Kheer","Rosh Malai","Jelapi","Faluda"};
    cin >> ordered_desert_no;

    switch(ordered_desert_no){
        case 1:
        cout << "You ordered " << Avaiable_desert[0] <<endl;
        break;

        case 2:
        cout << "You ordered " << Avaiable_desert[1] <<endl;
        break;

        case 3:
        cout << "You ordered " << Avaiable_desert[2] <<endl;
        break;

        case 4:
        cout << "You ordered " << Avaiable_desert[3] <<endl;
        break;
        
        case 5:
        cout << "You ordered " << Avaiable_desert[4] <<endl;
        break;

        default:
        cout << "you ordered nothing as desert" <<endl;
    }


}