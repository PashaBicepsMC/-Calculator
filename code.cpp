// g++ -x c++ code.C++ -o code && ./code
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    
    // just a randomizer <3 
   srand(time(NULL)); 

   int result = 1 + rand() % 100;
   cout << result << endl;

    // calcularor
    float num1, num2, res; 
    cout<< "Enter number 1: ";
    cin>> num1;

    cout<< "Enter number 2: ";
    cin>> num2;

    // +, -, *, /, %
    char math;
    cout<< "Enter math symbol:";
    cin>> math; 

    //method 1

    /* if(math == '+') {
        res = num1 + num2;
    }
    else if (math == '-') {
    
        res = num1 - num2;
    }
    else if (math == '*') {
        res = num1 * num2;
    }
    else if (math == '/') {
         if (num2 != 0) {
        res =  num1 / num2;
    }
     else {
        cout<< "Error: Division by zero!" << endl;
        return 0;
     }
    }
     else if ( math == '%') 
        res = fmod(num1, num2); */

        //method 2 

        switch (math) {
            case '+': res = num1 + num2; break;
            case '-': res = num1 - num2; break;
            case '*': res = num1 * num2; break;
            case '/': res = num1 / num2; break;
            case '%': res = fmod(num1, num2); break; 
            default: res = 0; cout<< "Error: Division by zero!" << endl; break;
        }
    
    cout<< "Result: " << res << endl; 

     return 0;
}

