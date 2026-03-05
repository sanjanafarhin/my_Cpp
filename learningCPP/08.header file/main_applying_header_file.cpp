#include <iostream>
#include <string>
#include <cmath>
#include "/workspaces/my_Cpp/learningCPP/08.header file/header.h"

using namespace std;

int main()
{
    int ID;
    string Name;
    char section;

    cout << "Entry ID: " << endl;
    cin >> ID;

    cout << "Entry name: " << endl;
    getline(cin, Name);

    cout << "Entry section: " << endl;
    cin >> section;

   Info_entry_and_display(Name,ID,section);
}