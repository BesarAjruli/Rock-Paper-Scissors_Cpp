#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int User, Robot, result;

    Robot = rand() % 3;

    cout << "Pick a sing using the number in front:\n0 - Rock\n1 - Paper\n2 - Scissors" << endl;
    cin >> User;

    if (User > 2 || User < 0)
    {
        cout << "Please pick a valid number!" << endl;
        cin >> User;
    }
    else
    {
        switch (User)
        /*
        0 - Rock
        1 - Paper
        2 - Scissors
        */
        {
            // Rock
        case 0:
            if (Robot == 2)
            {
                cout << "You won!" << endl;
                result = 1;
            }
            else if (Robot == 0)
            {
                cout << "It's a tie!" << endl;
                result = -1;
            }
            else
            {
                cout << "You lost" << endl;
                result = 0;
            }
            break;

            // Paper
        case 1:
            if (Robot == 0)
            {
                cout << "You won!" << endl;
                result = 1;
            }
            else if (Robot == 1)
            {
                cout << "It's a tie!" << endl;
                result = -1;
            }
            else
            {
                cout << "You lost" << endl;
                result = 0;
            }
            break;

            // Scissors
        case 2:
            if (Robot == 1)
            {
                cout << "You won!" << endl;
                result = 0;
            }
            else if (Robot == 0)
            {
                cout << "It's a tie!" << endl;
                result = -1;
            }
            else
            {
                cout << "You lost" << endl;
                result = 0;
            }
            break;
        default:
            break;
        }
    }

    return 0;
}