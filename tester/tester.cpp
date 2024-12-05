#include <iostream> //Includes the iostream library
#include <string> //Includes the string library 
#include <iomanip> 
#include <fstream>
using namespace std;
int main()  //the main function
{  
	int winmoves[8][3] = { {0,1,2},{0,3,4},{0,4,8},{2,4,6},{3,4,5},{2,5,8},{1,4,7},{6,7,8} };
	int moves[5]; 
	int boardinput, i=0;  
	while (i < 5) {
		cin >> boardinput;
		moves[i] = boardinput;
		i++;
	}  
	i = 0;
	while(i<5) {
		if (moves[i] == 0 or 1 || 2) {
			i++;
			if (moves[i] == 1 or 0 || 2) {
				i++;
				if (moves[i] == 2 or 1 || 0) {
					cout << "X wins" << endl; 
					break;
				}
			}
		}  
		if (moves[i] == 3 or 4 || 5) {
			i++;
			if (moves[i] == 4 or 3 || 5) {
				i++;
				if (moves[i] == 5 or 3 ||4) {
					cout << "O wins" << endl; 
					break;
				}
			}
		}
	}
	/*for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 3; j++) {  
			int k = 0;
			if (moves[k] && moves[k + 1] && moves[k + 2] == winmoves[i][j]) {
				cout << "This is a win" << endl; 
			} 
			k++;
		}
	}*/



	system("pause");  //Prevents the console from closing on exit.  
	return 0;  //Returns whatever is defined by the function return type

} //End of main