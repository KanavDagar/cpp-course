#include <iostream>
using namespace std;

void displayboard(char board[3][3])
{ //---> this function displays the grid/board of tic tac toe
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << board[i][j] << " ";
            if (j < 2)
            {
                cout << "|";
            }
        }
        cout << endl;
        if (i < 2)
        {
            cout << "---|---|---" << endl;
        }
    }
}

bool checkstatus(char board[3][3], char turn)
{ //---> this function checks for the result of game
    for (int i = 0; i < 3; i++)
    {
        if ((board[i][0] == turn && board[i][1] == turn && board[i][2] == turn) || //---> for horizontal and vertical winning positions
            (board[0][i] == turn && board[1][i] == turn && board[2][i] == turn))
        {
            return true;
        }
    }
    if ((board[0][0] == turn && board[1][1] == turn && board[2][2] == turn) || //---> for diagonal winning positions
        (board[0][2] == turn && board[1][1] == turn && board[2][0] == turn))
    {
        return true;
    }
    return false; //---> in case of a draw
}

int main()
{
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char turn = 'X';
    int status = 0;

    cout << "Begin The Legendary Standoff" << endl
         << endl;
    while (true)
    {
        displayboard(board);

        int move;
        cout << "Player " << turn << " enter a number (1-9) : ";
        cin >> move;

        int r, c;
        switch (move)
        {
        case 1:
            r = 0;
            c = 0;
            break;

        case 2:
            r = 0;
            c = 1;
            break;

        case 3:
            r = 0;
            c = 2;
            break;

        case 4:
            r = 1;
            c = 0;
            break;

        case 5:
            r = 1;
            c = 1;
            break;

        case 6:
            r = 1;
            c = 2;
            break;

        case 7:
            r = 2;
            c = 0;
            break;

        case 8:
            r = 2;
            c = 1;
            break;

        case 9:
            r = 2;
            c = 2;
            break;

        default:
            cout << "Enter a valid input";
            continue;
        }
        cout << endl;
        if (board[r][c] == 'X' || board[r][c] == 'O') //---> to avoid overwriting
        {
            cout << "This spot is already taken" << endl;
            continue;
        }
        board[r][c] = turn;
        status++;

        if (checkstatus(board, turn))
        {
            displayboard(board);
            cout << "The " << turn << " player won " << endl;
            break;
        }

        if (status == 9)
        {
            displayboard(board);
            cout << "Both players are evenly matched";
            break;
        }
        if (turn == 'X')
        {
            turn = 'O';
        }
        else
        {
            turn = 'X';
        }
    }

    return 0;
}