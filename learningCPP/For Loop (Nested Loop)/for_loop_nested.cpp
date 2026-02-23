#include <iostream>
#include <string>

/*for(initialization; condition; update)
{
    // body of loop
}*/

using namespace std;

// struct for food menu and price
struct BOOKS
{
    string BOOKName;
    int price;
};

int main()
{

    // declaration
    BOOKS Books_Avaiable[5] = {{"The deal", 495}, {"Feluda", 575}, {"The fault into our star", 450}, {"Avacado toast", 375}, {"Rumi", 675}};
    string command;
    int maincourses;
    string order_BOOKS;
    BOOKS OrderedBOOKS[10];

    // taking customer entry concern
    cout << "Wanna Order Something?" << endl;
    cin >> command;

    if (command == "YES")
    {
        cout << "welcome to shop villey" << endl;
    }
    else
    {
        return 0;
    }

    // number of books customer wanna have
    cout << "how many BOOKS you wanna have?" << endl;
    cin >> maincourses;
    OrderedBOOKS[maincourses];
    cin.ignore();

    // enter desired book
    for (int i = 0; i < maincourses; i++)
    {

        cout << "enter the food name: " << endl;
        getline(cin, order_BOOKS);

        for (int j = 0; j < 5; j++)
        {

            if (order_BOOKS == Books_Avaiable[j].BOOKName)
            {
                OrderedBOOKS[i].BOOKName = Books_Avaiable[j].BOOKName;
                OrderedBOOKS[i].price = Books_Avaiable[j].price;
            }
        }
    }

    int totalcost = 0;

    cout << "You ordered," << endl;
    for (int i = 0; i < maincourses; i++)
    {
        cout << OrderedBOOKS[i].BOOKName << ";   costed:" << OrderedBOOKS[i].price << endl;
        totalcost = totalcost + OrderedBOOKS[i].price;
    }

    cout << "Your total cost will be " << totalcost << "tk" << endl;
}