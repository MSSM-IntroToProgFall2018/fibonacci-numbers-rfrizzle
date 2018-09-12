#include <iostream>

using namespace std;

int fib2(int n, int num1, int num2) {

    n -= 1;

    for(int i = 0; i <= n; ++i){
        num2 += num1;
        ++i;
        num1 += num2;
    }

    if (n % 2 == 0){
       return num2;
    }
    else {
        return num1;
    }
}

int main()
{
    int n = 1;
    int num1 = 0;
    int num2 = 1;
    string ans = "Y";
    while(ans == "y" || ans == "Y") {


        cout << "Which number in the sequence do you want?  ";
        cin >> n;

        while (n <= 0 || n >=47){
            if (n <= 0){
                cout << "This number must be an integer greater than 0, and less than 47" << endl;
            }

            cout << "Which number do you want" << endl;
            cin >> n;
        }

        cout << fib2(n, num1, num2) << endl;

        while (ans == "n" || ans == )
        cout << "Would you like to start again?" << endl;
        cin >> ans;

    }

    return 0;
}
