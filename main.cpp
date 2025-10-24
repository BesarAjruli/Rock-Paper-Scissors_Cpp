#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int User, Robot, result;
    char answer;

    Robot = rand() % 3;

    while (true)
    {
        cout << "Pick a sing using the number in front:\n0 - Rock\n1 - Paper\n2 - Scissors" << endl;
        if (cin >> User && (User >= 0 && User <= 2))
        {
            break;
        }
        else
        {
            cout << "Please pick a valid number!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

   cout << "Robot picked: " << (Robot == 0 ? "Rock": Robot == 1? "Paper": "Scissors") << endl;

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

    cout << "Do you want to play again? (y/n): ";
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
    {
        main();
    }
        return 0;
}