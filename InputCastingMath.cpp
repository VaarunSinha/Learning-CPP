#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

    // Input
    string sQuestion ("Enter Number 1 : ");

    string sNum1, sNum2;

    cout << sQuestion;

    cin >> sNum1;

    string sQuestion2 ("Enter Number 2 : ");
   
    cout << sQuestion2;

    cin >> sNum2;

    int nNum1 = stoi(sNum1);
    int nNum2 = stoi(sNum2);

    printf("%d + %d = %d \n", nNum1, nNum2, (nNum1 + nNum2));

    printf("%d - %d = %d \n", nNum1, nNum2, (nNum1 - nNum2));

    printf("%d * %d = %d \n", nNum1, nNum2, (nNum1 * nNum2));

    printf("%d / %d = %d \n", nNum1, nNum2, (nNum1 / nNum2));

    printf("%d %% %d = %d \n", nNum1, nNum2, (nNum1 % nNum2));

    // Problem:
    // Enter Miles: 5
    // 5 miles equals 8.0467 kilometers

    string sMileQuestion ("Enter Miles: ");

    string sMiles;

    cout << sMileQuestion;

    cin >> sMiles;

    int nMiles = stoi(sMiles);

    printf("%d miles is equal to %.4f kilometers \n", nMiles, (nMiles * 1.60934));

    return 0;
}