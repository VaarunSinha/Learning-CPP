#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Think of variables like boxes which you can put values in. And you say to ther parts of the program to get that value from that specific box. If you change the value inside the box and instead put something else the whole program will consider that box instead.

// Like see this example:
// int age = 14
// cout << age << endl;

// Now if I change the age value to let's say 15 and compile the program again, it will have that value.

// This is really useful (especially in large projects) as you just have to change one line of code and compile it rather that changing every occurence of the value that put in.

// Variable names can contain letters, numbers, underscores, but not math operators, spaces.

// The names can't start with a number they should start with a letter always.

int g_iRandNum = 0;

// int specifies the type.
// g_iRandNum is the name of the variable.
// and 0 is the value.

// In the above variable we are using something known as Hungarian Notation. You are supposed to put g_ which says that it is global. 

// i represents that int is an integer

// And then you put the name which you want in this case RandNum

// int says that the value is an integer in statically typed languages like c++ this keyword is required but it may not be required in languages such as python which are dynamically typed.

// The variable above is a global variable because it is declared outside any function or class.

// It can be accessed anywhere inside the code.

// You should avoid using globalisation as much as you can, cause they can cause many problems.

const double PI = 3.14;

// The const keyword is used to define variables which are CONSTANT and cannot be changed.

// double datatype can contain decimals and larger numbers.

// Constants variable names are almost capitalized. like: PI in the above example.

int main(int argc, char* argv[]){
    bool bMarried = false;

    // Bool is a datatypefor conditional stuff like true, false, 1(substitute for true) and 0(substitute for false),

    char chMyGrade = 'A';

    // char datatype can store 256 different single characters.

    // Also observer the notation b before the actual variable name Married and ch  before the actual variable name MyGrade.

    unsigned short int u16Age = 43;

    // If you want to make a variable to store values between zero and 65,000 approx.

    // You would make the above variable.  This is a very specific type of variable made by combining 3 different keywords by us.

    // unsigned means that there are no negative values.

    // unsigned short int is the value from 0 to 65,000 approx.

    short int siWeight = 180;

    // This would have vakues between -32,000 to max vale 32,000 approx.

    int nDays = 7;

    // Int has a lmit from -2 billion to postive 2 billion,

    // We should always try to use shorter variable types.

    long lBigNum = 1000000;
    // Very big numbers.

    float fPi = 3.14;
    // This can store decimal types. floats are only precise to 6 digits of precision.

    float fBigFloat = 1.11111111111111;
    float fBigFloat2 = 1.11111111111111;
    float fFloatSum = fBigFloat + fBigFloat2;

    printf("fFloat Sum Precision : %.10f\n", fFloatSum);

    // Printf is to print with formating. %.10f defines that there would be a .10 float in place of that percent sign. \n is for newline. the values are put according to order they are given.

  

    //Precison for double is 15.

    double dBigDouble = 1.11111111111111;
    double dBigDouble2 = 1.11111111111111;
    double dDoubleSum =  dBigDouble +  dBigDouble2;

     printf("dDoubleSum Sum Precision : %.20f\n", dDoubleSum);
     // Whenever your foramt with doubles you still use f.

    long double ldLongDouble = 3.14;
    auto whatWillIBe = true;

    // This auto would make the compiler decide the type according to the value.

    cout << "Min Double: " << numeric_limits<double>::min() << endl;
    cout << "Max Double: " << numeric_limits<double>::max() << endl;

    cout << "Min Float: " << numeric_limits<float>::min() << endl;
    cout << "Max Float: " << numeric_limits<float>::max() << endl;

    cout << "Min Integer: " << numeric_limits<int>::min() << endl;
    cout << "Max Integer: " << numeric_limits<int>::max() << endl;

    cout << "Min Long Double: " << numeric_limits<long double>::min() << endl;
    cout << "Max Long Double: " << numeric_limits<long double>::max() << endl;


    // Shows min and max values for data types.
    // syntax: numeric_limits<datatype>::max() or ::min()

    // The below code is there if we ever want to knwo the number of bytes in a data type.

    cout << "Int Size" << sizeof(int) << endl;
    cout << "Double Size" << sizeof(double) << endl;
    cout << "Long Size" << sizeof(long) << endl;

    // Formatting:

    printf("%c %d %5d %3.f %s \n", 'A', 10, 5, 3.124, "Hi");
    
    // Character: %c .

    // Number: %d of you want five spaces between this number and other then put %5d on the next one.

    // %3.f : 3 decimal precison for double or float value .

    // %s: for string/

    return 0;
}