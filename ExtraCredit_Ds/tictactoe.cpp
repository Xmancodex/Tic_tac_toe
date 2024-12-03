#include <iostream> //Includes the iostream library
#include <string> //Includes the string library 
#include <iomanip> 
#include <fstream>
using namespace std;
int main()  //the main function
{
	char board[3][3]{ {'0','1','2'},{'3','4','5'},{'6','7','8'} };
	bool win = false;
	int board_input;
	cout << "Welcome to Tic Tac Toe" << endl;   
	cout << "For reference:" << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 and j == 0)
			{
				cout << endl;
			}
			if (i == 2 and j == 0)
			{
				cout << endl;
			}
			cout << board[i][j] << "|";
		}
	do {
// Plyaer 1 input
		cout << "Player 1 input a number value of 0-8 to enter your character " << endl;
		cin >> board_input;
		switch (board_input)
		{
		case 0: board[0][0] = 'X';
			break;
		case 1: board[0][1] = 'X';
			break;
		case 2: board[0][2] = 'X';
			break;
		case 3: board[1][0] = 'X';
			break;
		case 4: board[1][1] = 'X';
			break;
		case 5: board[1][2] = 'X';
			break;
		case 6: board[2][0] = 'X';
			break;
		case 7: board[2][1] = 'X';
			break;
		case 8: board[2][2] = 'X';
			break;
		default: cout << "Not a valid number" << endl;
			break;
		} 
// player 2 input
		cout << "Player 2 input a number value of 0-8 to enter your character " << endl;
		cin >> board_input;
		switch (board_input)
		{
		case 0: board[0][0] = 'O';
			break;
		case 1: board[0][1] = 'O';
			break;
		case 2: board[0][2] = 'O';
			break;
		case 3: board[1][0] = 'O';
			break;
		case 4: board[1][1] = 'O';
			break;
		case 5: board[1][2] = 'O';
			break;
		case 6: board[2][0] = 'O';
			break;
		case 7: board[2][1] = 'O';
			break;
		case 8: board[2][2] = 'O';
			break;
		default: cout << "Not a valid number" << endl;
			break;
		}
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
			{
				// Checks columns for wins
				if (board[0][j] && board[1][j] == board[2][j]) {
					if (board[0][j] == 'X') {
						cout << "X wins" << endl;
						win = true; 
						break;
					}
					else if (board[0][j] == 'O') {
						cout << "O wins" << endl;
						win = true; 
						break;
					}
				}
				//Checks rows for wins
				if (board[i][0] && board[i][1] == board[i][2]) {
					if (board[i][0] == 'X') {
						cout << "X wins" << endl;
						win = true;
						break;
					}
					else if (board[i][0] == 'O') {
						cout << "O wins" << endl;
						win = true; 
						break;
					}
				}
				// Checks for diagnols 
				if (board[0][0] && board[1][1] == board[2][2]) {
					if (board[i][0] == 'X') {
						cout << "X wins" << endl;
						win = true; 
						break;
					}
					else if (board[i][0] == 'O') {
						cout << "O wins" << endl;
						win = true; 
						break;
					}
				}
				if (board[0][2] && board[1][1] == board[2][0]) {
					if (board[i][0] == 'X') {
						cout << "X wins" << endl;
						win = true; 
						break;
					}
					else if (board[i][0] == 'O') {
						cout << "O wins" << endl;
						win = true; 
						break;
					}
				} 
				if (i == 1 and j == 0)
				{
					cout << endl;
				}
				if (i == 2 and j == 0)
				{
					cout << endl;
				}
				cout << board[i][j] << "|";
			}   
		cout << endl;
	} while (win != true);
	system("pause");  //Prevents the console from closing on exit.  
	return 0;  //Returns whatever is defined by the function return type
}//End of main