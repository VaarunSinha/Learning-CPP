#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

    // If a birthday is important . 
    // 1-18, 21, 50, > 65

    string sAge = "0";
    cout << "Enter Your Age: ";
    cin >> sAge;
    int nAge = stoi(sAge);
    if ((nAge >= 1 && nAge <= 18)){
        cout << "Your birthday is important 🥳 \n";
    }else if ((nAge == 21) || (nAge == 50)){
        cout << "Your birthday is important 🥳 \n";
    }else if ((nAge >= 65)){
         cout << "Your birthday is important sir. 🥳 \n";
    }else{
        cout << "Your birthday is not important 🥲 \n";
    }

    //Determine school grade
    // if 5 go to kindergarten
    // Ages 6-17 go to grades 1 through 12
    // Age > 17 go to college
    // if age < 5 too young for school.

    string sAgeForSch = "0";
    cout << "Enter your age : ";
    cin >> sAgeForSch;
    int nAgeForSch = stoi(sAgeForSch);
    if ((nAgeForSch < 5)){
        cout << "You Are To Young For School 👶" << endl;
    }else if ((nAgeForSch == 5)){
        cout << "Go To Kindergarten 🧸" << endl;
    }else if (nAgeForSch > 5 && nAgeForSch <= 17){
        cout << "Go To School 📚,To Grade " << nAgeForSch -  5 << endl;
    }else if((nAgeForSch > 17)){
        cout << "Go To University 🎓" << endl;
    }

    // Ternary
    int age = 14;
    bool canIVote = (age >= 18) ? true : false;
    cout.setf(ios::boolalpha); //Will show trues and false instead of 1 & 0
    cout << "Can I Vote: "<< canIVote << endl;



    return 0;
}