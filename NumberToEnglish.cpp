#include <iostream>

using namespace std;

void number(int x){
    switch(x)
    {
        case 0: cout << "zero";break;
        case 1: cout << "one";break;
        case 2: cout << "two";break;
        case 3: cout << "three";break;
        case 4: cout << "four";break;
        case 5: cout << "five";break;
        case 6: cout << "six";break;
        case 7: cout << "seven";break;
        case 8: cout << "eight";break;
        case 9: cout << "nine";break;
    }
}

void number_Teen(int x){
    switch(x)
    {
        case 10: cout << "ten";break;
        case 11: cout << "eleven";break;
        case 12: cout << "twelve";break;
        case 13: cout << "thirteen";break;
        case 14: cout << "fourteen";break;
        case 15: cout << "fifteen";break;
        case 16: cout << "sixteen";break;
        case 17: cout << "seventeen";break;
        case 18: cout << "eighteen";break;
        case 19: cout << "nineteen";break;
    }
}

void number_TY(int x){
    switch(x)
    {
        case 2: cout << "twenty";break;
        case 3: cout << "thirty";break;
        case 4: cout << "forty";break;
        case 5: cout << "fifty";break;
        case 6: cout << "sixty";break;
        case 7: cout << "seventy";break;
        case 8: cout << "eighty";break;
        case 9: cout << "ninety";break;
    }
}

void readHundred(int x){
    if(x/100 > 0) number(x/100);
    else number(x);
    x = x%100;
    cout << " hundred ";
    if(x > 10) {
        number_TY(x/10);
        x = x%10;
        cout << " ";
    }
    if(x > 0) number(x);
}

int main()
{
    int N;
    cin >> N;
    if(N < 0){
        cout << "negative ";
        N = -N;
    }
    if(N < 10) number(N);
    else if (N >= 10 && N <= 19) number_Teen(N);
    else if (N >=20 && N <= 99){
        number_TY(N/10);
        N = N%10;
        cout << " ";
        number(N);
    }
    else{
        if(N <= 999) readHundred(N);
        else if(N <= 999999){
            readHundred(N/1000);
            cout << " thousand ";
            N = N%1000;
            readHundred(N);
        }
        else {
            readHundred(N/1000000);
            cout << " million ";
            N = N%1000000;
            readHundred(N/1000);
            cout << " thousand ";
            N = N%1000;
            readHundred(N);
        }
    }
    return 0;
}
