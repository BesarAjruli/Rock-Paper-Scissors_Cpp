#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int User, Robot;
    bool result;

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
            Robot == 2
                ? cout << "You won!" << endl
            : Robot == 0
                ? cout << "It's a tie!"
                : cout << "You lost" << endl;
            break;
            // Paper
        case 1:
            Robot == 0
                ? cout << "You won!" << endl
            : Robot == 1
                ? cout << "It's a tie!"
                : cout << "You lost" << endl;
            break;
            //Scissors
        case 2:
            Robot == 1
                ? cout << "You won!" << endl
            : Robot == 2
                ? cout << "It's a tie!"
                : cout << "You lost" << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}