/*
3. Nested If-Else
Challenge: A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:* More than 20 cups: 20% discount
Between 10 and 20 cups: 10% discount
Less than 10 cups: No discount
*/


#include <iostream>

using namespace std;

int main(){
    int cups;

    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the number of tea cups" ;
    cin >> cups;

    totalPrice = pricePerCup * cups;

    if(cups > 20){
        discount = 0.20;
    }else if (cups >= 10 && cups <= 20){
        discount = 0.10;
    } else {
        discount = 0;
    }

    totalPrice -= (totalPrice * discount);

    cout << "Total price after discount is: " << totalPrice << endl;

    return 0;
}