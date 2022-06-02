#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

// https://en.cppreference.com/w/

using namespace std;

int main(int argc, char* argv[]){

    cout << "absolute value of -10 = " << abs(10) << endl;
    cout << "Max function 5,4  = " << max(5,4) << endl;
    cout << "Min function 5,4  = " << min(5,4) << endl;
    cout << "Max function 5.3,4.3 (float)  = " << fmax(5,4) << endl;
    cout << "Min function 5.3,4.3  (float) = " << fmin(5,4) << endl;
    cout << "ceil 10.45 (roundup) = " << ceil(10.45) << endl;
    cout << "floor 10.45 (rounddown) = " << floor(10.45) << endl;
    cout << "round 10.45  (up or down) = " << round(10.45) << endl;
    cout << "pow 2,3 (2^3)  = " << pow(2,3) << endl;
    cout << "square root of 100  = " << sqrt(100) << endl;
    cout << "cube root of 100 = " << cbrt(100) << endl;

    cout << "exp of 1 = " << exp(1) << endl;
    cout << "exp2 of 1 = " << exp2(1) << endl;
    cout << "log of 20.079 = " << log(20.079) << endl;
    cout << "log2 of 8 = " << log2(8) << endl;

    //sqrt(A^2 + B^2)
    cout << "hypotenuse = " << hypot(2,3) << endl;

    //Generating random numbers

    srand(time(NULL)); //Generating seed according to time
    int secretNum = rand() % 11; //%11 for geberating numbers only under 11.
    cout << "secretNum = " << secretNum << endl;
    cout << time(NULL) << endl;

    return 0;
}