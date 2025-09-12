/*
1. If Statement
Challenge: Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.
*/


#include <iostream>
#include <string>
using namespace std;
int main(){
    string teaOrder;

    cout << "Enter your tea order";
    getline(cin, teaOrder);

    if(teaOrder == "Green Tea"){
    cout << "You have ordered Green Tea" << endl;

    }

    return 0;
}
