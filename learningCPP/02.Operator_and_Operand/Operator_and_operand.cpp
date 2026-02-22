#include<iostream>
#include <string>

using namespace std;
int main()
{
    // Operators

//Unary->operand 1 
int current_age=5;
current_age++;
cout << "age after 1 year :" << current_age << endl; 


//Binary->operand 2
int choco_amount=111;
int friends=20;
int chocolate=choco_amount/friends;
cout << "her friends gets chocolate " << chocolate  << endl; 

//Ternary-> operand 3
int who_doesnt_get_chocolate=choco_amount-(chocolate*friends);
cout <<"who doesn't get the chocolates :" << who_doesnt_get_chocolate <<endl;

//types of operators:

//  1 .
//Arithmetic Operator is a symbol used to perform mathematical calculations on numbers.
//It includes operators like +,-,*,/,%
int after_adding_10_chocolates = choco_amount + 10;
cout <<"After mom giving 10 chocolates :" << after_adding_10_chocolates <<endl;

int currently_chocolate_you_have = after_adding_10_chocolates - 2;
cout <<"After your sister steal your 2 chocolates :" << currently_chocolate_you_have <<endl;

int all_friends_gave_you_chocolate = friends * 20;
cout <<"Your all friends gave you :" << all_friends_gave_you_chocolate <<endl;

int sharing_your_chocolates = currently_chocolate_you_have / friends;
cout <<"each friend of yours got chocolate :" << sharing_your_chocolates <<endl;

int didnot_get_chocolate = currently_chocolate_you_have % friends;
cout <<"friends who left with no chocolate :" << didnot_get_chocolate <<endl;


// 2
//An assignment operator is used to assign a value to a variable.
//includes operators like +=,-=,*=,/=,%=

int variable=20;

variable += 2;
//variable=variable + 2
cout <<"variable value after +=" << variable <<endl;

variable -= 2;
//variable=variable-2;
cout <<"variable value after -=" << variable <<endl;

variable *= 2;
//variable=variable * 2;
cout <<"variable value after *=" << variable <<endl;

variable /= 2;
//variable=variable / 2;
cout <<"variable value after /=" << variable <<endl;

variable %= 3;
//variable=variable % 3;
cout <<"variable value after %=" << variable <<endl;


// 3
//A Relational operator is used to compare two values
//includes < , > ,>= ,<=,==,!=

//suppose you have two friends X and Y ,individually one is 22 years old and other is 28
int x=22;
int y=28;

// y is greater than x
cout << "x < y means = 22 < 28 this statment is " << (x < y) << endl;

//x is greater than y
cout << "x > y means = 22 > 28 this statment is " << (x > y) << endl;

//y is greater or equal x
cout << "x <= y means = 22 <= 28 this statment is " << (x <= y) << endl;

//x is greater or equal y
cout << "x >= y means = 22 >= 28 this statment is " << (x >= y) << endl;

//x and y both are same or equal
cout << "x == y means = 22 == 28 this statment is " << (x == y) << endl;

//x and y both are not same or equal
cout << "x != y means = 22 != 28 this statment is " << (x != y) << endl;


// 4
//A logical operator is used to combine two or more conditions.
//1 -> true and 0 -> false

//-> OR Operator means both or one true means all true , it looks like ||
bool result;

result= (22 == 22) || (12 < 8) ;
//True || False = True
cout << "(22 == 22) || (12 < 8) =  " << result << endl;

result= (22==22) || (12 < 20);
//True || True = True
cout << "(22 == 22) || (12 < 20) =  " << result << endl;

result= (22!=22) || (12 < 90);
//False || True = True
cout << "(22 != 22) || (12 < 90) =  " << result << endl;

result= (22!=22) || (12 > 20);
//False || False = False
cout << "(22 != 22) || (12 > 20) =  " << result << endl;


//-> AND Operator means both true means all true , it looks like &&

result= (22 == 22) && (12 < 8) ;
//True && False = False
cout << "(22 == 22) && (12 < 8) =  " << result << endl;

result= (22==22) && (12 < 20);
//True && True = True
cout << "(22 == 22) && (12 < 20) =  " << result << endl;

result= (22!=22) && (12 < 90);
//False && True = False
cout << "(22 != 22) && (12 < 90) =  " << result << endl;

result= (22!=22) && (12 > 20);
//False && False = False
cout << "(22 != 22) && (12 > 20) =  " << result << endl;


// 5 
//A bitwise operator works on binary numbers (bits).
//It performs operations bit by bit.

//Types of Bitwise Operators in C++ -> &, |, ^, >>, <<
int var_1=4;
int var_2=6;

//& mean 1 if both are 1 ,AND 
cout << "4 & 6 = " << (var_1 & var_2) << endl ; 

//| mean 1 if both are 1 and any one is 1
cout << "4 | 6 = " << (var_1 | var_2) << endl ; 

//^ mean 1 if any one is 1 
cout << "4 ^ 6 = " << (var_1 ^ var_2) << endl ; 

//>> mean shift bits to right 
//ex: 4 binary 0100 , >> by 1 mean 0010 decimal it is 2
cout << "4 >> 1 = " << (var_1 >> 1) <<endl;


//<< mean shift bits to left 
//ex: 4 binary 0100 , << by 1 mean 1000 decimal it is 8
cout << "4 << 1 = " << (var_1 << 1) << endl;
}