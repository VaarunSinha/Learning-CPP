#include <cstdlib>

 //For many things such as memory management, random numbers, searching, sorting etc.. general functions...

#include <iostream>

//For recieving input and giving output to users.

using namespace std; 

// So that we dont have to do std:: everytime, however this can cause conflicts if you have dunction or variable names which are the same as some function and variable names in the std namespace.


// All of your code starts executong in the "main" function.


// argc is the number of arguments passed. the default value is 1 as the name of the file is passed everytime when this is run.

// char* argv[] is the array of arguments passed while running the program. char* specifies that the arguments would be considered as characters(strings) even if a number is passed.

int main(int argc, char* argv[]){

    // Actual code inside these braces

    cout << "Hello, world!" << endl;

     // Cout is an object from the iostream header file which otputs "hello world" string in the terminal. the endl keyword ensures that it ends the line after hello world so that other strings print in a new line.

    // Checking for more than one args and printing if any.

    if(argc !=1){
        cout << "You Entered "<<argc<<" arguments"<<endl;

        // We need to loop through the arguments if we want to use them as argv is an array.

        // i : counter variable with its initial value being 0.

        // i > argc : condition which if true would continue the for loop and if not then it would stop it.

        // i++: Increment the counter variable on every iteration

        for(int i = 0; i < argc; ++i){
            cout << argv[i] << endl; // Accessing the values with i. i is used as index here.
        }
    }

    return 0; // When you return 0, it means that the program has executed without an error. -1 means that an error has occurred.
}

//How to run this in cmd
// Generate the exe: g++ -std=c++17(version) intro.cpp(filename) -o intro(app name)    
// ./intro arguments.