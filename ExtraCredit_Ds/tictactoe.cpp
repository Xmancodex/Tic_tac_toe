#include <iostream> //Includes the iostream library
#include <string> //Includes the string library 
#include <iomanip> 
#include <fstream>
using namespace std;
int main()  //the main function
{ 
	char board[3][3];  
	bool win = false; 
	int board_input;
	cout << "This is Tic Tac Toe and your 'X'" << endl; 
	do { 
		cout << "Input a number value  of 0-8 to enter your character " << endl;
		cout << "For reference:" << endl << "0, 1, 2" << endl << "3, 4, 5" << endl << "6, 7, 8" << endl;
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

		

	} while (win != true);
	


	system("pause");  //Prevents the console from closing on exit.  
	return 0;  //Returns whatever is defined by the function return type

} //End of main