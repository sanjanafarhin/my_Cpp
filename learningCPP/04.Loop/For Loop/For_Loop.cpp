#include <iostream>
#include<string>

/*for(initialization; condition; update)
{
    // body of loop
}*/

using namespace std;

struct MainCourse{
    string Foodname;
    int price;
};

int main()
{  
    MainCourse avaiablefood[5]={{"Alfredo Pasta",495},{"Dumpling",575},{"Chicken Pasta",450},{"Avacado toast",375},{"chicken sandwitch",675}};
    string command;
    int maincourses;
    string order_food;
    MainCourse Orderedfood[10];

    cout << "Wanna Order Something?" <<endl;
    cin >> command;

    if(command == "YES"){
        cout << "welcome to shop villey" <<endl;
    }
    else{
        return 0;
    }

    cout << "how many main course you wanna have?" <<endl;
    cin >> maincourses;
    Orderedfood[maincourses];
    cin.ignore();

    for(int i=0;i<maincourses;i++)
    {

        cout << "enter the food name: " <<endl;
        getline(cin,order_food);

        if(order_food==avaiablefood[0].Foodname){
            Orderedfood[i].Foodname=avaiablefood[0].Foodname;
            Orderedfood[i].price=avaiablefood[0].price;
        }

        else  if(order_food==avaiablefood[1].Foodname){
            Orderedfood[i].Foodname=avaiablefood[1].Foodname;
            Orderedfood[i].price=avaiablefood[1].price;
        }
         else if(order_food==avaiablefood[2].Foodname){
            Orderedfood[i].Foodname=avaiablefood[2].Foodname;
            Orderedfood[i].price=avaiablefood[2].price;
        }

        else if(order_food==avaiablefood[3].Foodname){
            Orderedfood[i].Foodname = avaiablefood[3].Foodname;
            Orderedfood[i].price=avaiablefood[3].price;
        }
        else if(order_food==avaiablefood[4].Foodname){
            Orderedfood[i].Foodname=avaiablefood[4].Foodname;
            Orderedfood[i].price=avaiablefood[4].price;
        }
        else{
            Orderedfood[i].Foodname="Nothing";
        }

    }

    int totalcost=0;

    cout <<"You ordered," <<endl;
    for(int i=0;i<maincourses;i++){
        cout << Orderedfood[i].Foodname << ";   costed:" << Orderedfood[i].price <<endl;
        totalcost=totalcost +Orderedfood[i].price;
    }

    cout << "Your total cost will be" << totalcost << "tk" <<endl;

     
     
    


}