#include <iostream>
#include <Windows.h>
#include <string>
#include "Bank.h"
using namespace std;

void printGreating() {
    string greating[] = {
        "\t\t==========Welcome To \"Money Bank\"==========\n",
        "\t\t\n",
        "\t\t\tWhat Do You Want To Do?\n",
        "\t\t1. Sign Up\n",
        "\t\t2. Log In\n",
        "\t\t3. Exit\n",
        "\t\t-------------------------------------------\n"
    };
    for (string str : greating)
        cout << str;
}

int main()
{
    
    bool exit = false;
    while (!exit)
    {
        int choise = 0;

        printGreating();
        
        cout << "Enter choise: ";
        cin >> choise;

        switch (choise)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            exit = true;
            break;
        default:
            system("cls");
            break;
        }
    }
    system("cls");
    system("pause");

    return 0;
}