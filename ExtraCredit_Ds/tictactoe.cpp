#include <iostream> //Includes the iostream library
#include <string> //Includes the string library 
#include <iomanip> 
#include <fstream>
using namespace std;  
int main() //the main function
{
	char board[3][3]{ {'0','1','2'},{'3','4','5'},{'6','7','8'} }; 
	bool win = false;
	int board_inputp1;
	int	board_inputp2; 
	cout << "Welcome to Tic Tac Toe" << endl;   
	do { 
		// Board Output
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++) {
				// Board output 
				if (i == 1 and j == 0) {
					cout << endl;
				}
				if (i == 2 and j == 0) {
					cout << endl;
				}
				cout << board[i][j] << "|";
			}
		cout << endl << "Player 1 input a number value of 0-8 to play 'X' " << endl;
		cin >> board_inputp1;
		while (board_inputp1 == board_inputp2) {
			cout << "Select new number Player 1" << endl;
			cin >> board_inputp1;
		} 
		switch (board_inputp1)
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
		default: cout << "Not a valid number Try again" << endl;
			continue;
		}   
		//Check for win
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++) {
				// Checks columns for wins
				if (board[0][j] && board[1][j] == board[2][j]) {
					if (board[2][j] == 'X') {
						cout << "X wins" << endl;
						win = true; 
					}
					else if (board[2][j] == 'O') {
						cout << "O wins" << endl;
						win = true;  
					}
				}
				//Checks rows for wins
				if (board[i][0] && board[i][1] == board[i][2]) {
					if (board[i][2] == 'X') {
						cout << "X wins" << endl;
						win = true;
					}
					else if (board[i][2] == 'O') {
						cout << "O wins" << endl;
						win = true;   
					}
				}
				// Checks for diagnols 
				if (board[0][0] && board[1][1] == board[2][2]) {
					if (board[2][0] == 'X') {
						cout << "X wins" << endl;
						win = true; 
					}
					else if (board[2][0] == 'O') {
						cout << "O wins" << endl;
						win = true; 
					}
				}
				if (board[0][2] && board[1][1] == board[2][0]) {
					if (board[2][0] == 'X') {
						cout << "X wins" << endl;
						win = true; 
						
					}
					else if (board[2][0] == 'O') {
						cout << "O wins" << endl;
						win = true;  
						
					}
				} 
				//Player 2 input
				cout << endl << "Player 2 input a number value of 0-8 to play 'O' " << endl;
				cin >> board_inputp2;
				while (board_inputp2 == board_inputp1) {
					cout << "Select new number Player 2" << endl;
					cin >> board_inputp2;
				}
				switch (board_inputp2)
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
					continue;
				}

			}   
		//Board output
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++) { 
				if (i == 1 and j == 0) {
					cout << endl;
				}
				if (i == 2 and j == 0) {
					cout << endl;
				}
				cout << board[i][j] << "|";
			}
	} while (win != true);
	system("pause");  //Prevents the console from closing on exit.  
	return 0;  //Returns whatever is defined by the function return type
}//End of main  
