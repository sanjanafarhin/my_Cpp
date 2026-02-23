#include<iostream>
#include<string>

/* initialization of outer loop
while (outer_condition)
{
    // initialization of inner loop
    while (inner_condition)
    {
        // inner loop body

        // inner increment/decrement
    }

    // outer increment/decrement
}
    */

using namespace std;

struct subject_and_marks{
    string subject;
    int marks;
};

struct student_info{
    string name;
    subject_and_marks grades[4];
    int average;
};

int main()
{  student_info Student[100] ;
    int num;
    cout <<"student exist in class: "<<endl;
    cin >> num;
    Student[num];

    int i=0; //initialization
    int sum;
    while(i<num)//condition

    {   
        cin.ignore();
        cout <<"Enter the student's name: " << endl;
        getline(cin,Student[i].name);
        
        int s=0;
        sum=0;
        
        while(s<4){
        cout <<"Enter the student's Subject name "<< s+1 <<"th"<< endl;
        cin.ignore();
        getline(cin, Student[i].grades[s].subject);

        cout <<"Enter the student's marks: " << endl;
        cin >> Student[i].grades[s].marks;

        sum = sum +  Student[i].grades[s].marks;
        Student[i].average=sum/4;

        s++;

        }
         i++; //increment
    }

   int j=0;

    while(j<num){

        cout <<"the student's name: " << Student[j].name << endl;
        cout << "student's average marks: " << Student[j].average <<endl;
        j++;
        

    }
        
    
}