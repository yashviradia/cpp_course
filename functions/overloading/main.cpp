#include <iostream>
#include <string>

using std::cout;

// only parameters are allowed to be overloaded, not return types.

double add(double x, double y) {
    return x + y;
}


//
//  std::string add(double lhs, double rhs) {
//      return std::to_string(lhs) + std::to_string(lhs);
//  }

int main() {
    double sum = add(42, 1337);
    cout << sum;

    // std::string text = add(42, 1337);
    return 0;
}



#include <iostream>

using std::cout;

// Ordering of function is important.
// if printToConsole() was declared before add(), it will given an error.
// To prevent that better to declare functions at the beginning.
int add(int x, int y);
void printToConsole();

void printToConsole() {
    cout << "The output is: ";
    cout << add(4, 5);
}

// declare a function
int add(int x, int y) {
    return x + y;
}

int increment(int & value) {
    value++;
    return value;
}

int main() {
    // call that function
    int x = 0;

    // pass by reference makes changes to the input of a function.
    increment(x);

    cout << x;

    return 0;
}


// More Info:
// - Functions also perform type casting for their inputs.
// - If expected input is 'int' and user passes parameters as 'double',
// - the given function will cast those parameters into 'int'.