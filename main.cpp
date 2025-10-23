#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int rock, paper, scissors, User, Robot;
    rock = 0;
    paper = 1;
    scissors = 2;

    int Robot = rand() % 3;

    cout << "Pick a sing using the number in front:\n0 - Rock\n1 - Paper\n2 - Scissors" << endl;

    return 0;
}