// Syntax reminder:
// returnType functionName(parameters){
//     // function body
// }

// -------------------- Example Program --------------------
#include <iostream>
using namespace std;

// Function with return type (int)
// Takes temperature as input, returns it
int checkTemperature(int temperature){
    return temperature;
}

// Declaration (prototype) of function
// Later we will define it (compiler needs to know it exists)
void serveChai(int cups);

// Void function (no return value)
void makeChai(){
    cout << "Boiling water, adding tea leaves, straining..." << endl;
}

// Function with default parameter
// If no argument passed, "Masala Tea" will be used
void serveChai(string teaType = "Masala Tea"){
    cout << "Serving " << teaType << endl;
}

// Function overloading: same name but different parameters
// Here: two integer parameters
void serveChai(int cup, int tealeaves){
    cout << "Serving " << cup 
         << " cups using " << tealeaves << " spoons of tea" << endl;
}

int main(){
    int temp = checkTemperature(50); // Function with return
    cout << "Temperature: " << temp << endl;

    makeChai();            // Void function (no return)
    serveChai();           // Calls version with default string param
    serveChai("Green Tea");// Calls string version with argument
    serveChai(3);          // Calls int version (cups)
    serveChai(2, 5);       // Calls int+int version (cups + tealeaves)

    return 0;
}

// Definition of function declared earlier (prototype)
// Function overloading: integer parameter version
void serveChai(int cups){
    cout << "Serving " << cups << " cups of chai" << endl;
}
