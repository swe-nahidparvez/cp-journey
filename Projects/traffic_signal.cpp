// Project Name: Traffic Signal
// Author: Nahid Parvez

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void clearScreen()
{
    system("cls");
}

void drawTraffic(string color, string message, int carPos)
{
    clearScreen();

    cout << "\n      TRAFFIC SIGNAL\n";
    cout << "      +-------------+\n";

    if (color == "red")
    {
        cout << "      | \033[31mRED\033[0m         |\n";
        cout << "      |             |\n";
        cout << "      |             |\n";
    }
    else if (color == "yellow")
    {
        cout << "      |             |\n";
        cout << "      | \033[33mYELLOW\033[0m      |\n";
        cout << "      |             |\n";
    }
    else
    {
        cout << "      |             |\n";
        cout << "      |             |\n";
        cout << "      | \033[32m GREEN\033[0m      |\n";
    }

    cout << "      +-------------+\n";
    cout << "         " << message << "\n\n";

    for (int i = 0; i < carPos; i++)
    {
        cout << " ";
    }

    cout << "CAR\n";
}

int main()
{
    int carPos = 0;

    while (true)
    {
        for (int i = 0; i < 3; i++)
        {
            drawTraffic("red", "STOP", carPos);
            Sleep(1000);
        }

        drawTraffic("yellow", "WAIT", carPos);
        Sleep(1000);

        for (int i = 0; i < 12; i++)
        {
            drawTraffic("green", "GO NOW", carPos);
            carPos++;
            Sleep(300);
        }

        carPos = 0;
    }

    return 0;
}