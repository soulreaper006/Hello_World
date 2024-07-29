#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void delay(unsigned int milliseconds)
{
    clock_t goal = milliseconds + clock();
    while (goal > clock())
        ;
}

int main()
{
    char array[] = {'H', 'E', 'L', 'L', 'O', 'W', 'O', 'R', 'L', 'D'};
    string output;
    int j = 0;
    while (j <= 9)
    {

        for (char i = 'A'; i < 'Z'; i++)
        {
            cout << output << i << endl;
            delay(50);
            if (array[j] == i)
            {

                output += i;
                if (j == 4)
                {
                    output += ' ';
                }

                break;
            }
        }
        j++;
    }
    return 0;
}