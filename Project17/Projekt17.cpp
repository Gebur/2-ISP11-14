#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
short fieldChoise = 1, firstTurnChoise = 1, gameStatus = 0, menuChoise, settingsChoise, gameMode;
short fieldStatus = 0;
int playerXChoise, playerOChoise, turnComp;
char winner = ' ';
string textColor, backgroundColor, color;
//Для того, чтобы не было вечного нагромождения
void clearAll()
{
	system("cls");
}
char field[5][5] = { { '#', '#', '#', '#', '#' }, {'#', '#', '#', '#', '#'}, {'#', '#', '#', '#', '#'}, {'#', '#', '#', '#', '#'} , {'#', '#', '#', '#', '#'} };
//Меню
void mainMenu()
{
	cout << " [#] Tic Tac Toe\n\n";
	cout << " [1] Start\n [2] Settings\n [3] Instructions\n [4] Quit\n\n";
	cout << "Choose button: ";
	cin >> menuChoise;
	while (menuChoise < 1 || menuChoise > 4)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> menuChoise;
	}
	cout << "\n\n";
}
//Смена цвета
void changeColor()
{
	clearAll();
	cout << "  Available colors: \n\n";
	cout << " [0] - Black\n";
	cout << " [1] - Sapphirine\n";
	cout << " [2] - Green\n";
	cout << " [3] - Blue\n";
	cout << " [4] - Red\n";
	cout << " [5] - Magenta\n";
	cout << " [6] - Yellow\n";
	cout << " [7] - White\n";
	cout << " [8] - Gray\n";
	cout << " [9] - Light sapphirine\n";
	cout << " [A] - Light green\n";
	cout << " [B] - Light blue\n";
	cout << " [C] - Light red\n";
	cout << " [D] - Light magenta\n";
	cout << " [E] - Light yellow\n";
	cout << " [F] - Bright white\n";

	cout << "\n [?] Choose your background color: ";
	cin >> backgroundColor;
	cout << "\n [?] Choose your text color: ";
	cin >> textColor;
	cout << "\n\n";
	color = "color " + backgroundColor + textColor;
	const char* userColor = color.c_str();
	system(userColor);
}
//Смена поля
void changeField()
{
	clearAll();
	cout << " [3] Field\n\n";
	cout << " [1] - 3x3\n [2] - 4x4\n [3] - 5x5\n\n";
	cout << " [?] Choose game field: ";
	cin >> fieldChoise;
	while (fieldChoise < 1 || fieldChoise > 3)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> fieldChoise;
	}
	if (fieldChoise >= 1 || fieldChoise <= 3)
	{
		cout << "Field changed secsusfully";
	}
	cout << "\n\n";
}
//Настройки того кто первым ходит
void firstTurn()
{
	clearAll();
	cout << " [2] Choose your first turn\n\n";
	cout << " [1] - X\n [2] - O\n\n";
	cin >> firstTurnChoise;
	while (firstTurnChoise < 1 || settingsChoise > 2)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> firstTurnChoise;
	}
	if (firstTurnChoise >= 1 || firstTurnChoise < 3)
	{
		cout << "Turn changed secsusfully";
	}
	cout << "\n\n";
}
//Пункт с настройками
void settingsMenu()
{
	clearAll();
	cout << " [2] Settings\n\n";
	cout << " [1] Colors\n [2] First move\n [3] Field\n [4] Back to menu\n\n";
	cout << "Choose button: ";
	cin >> settingsChoise;
	while (settingsChoise < 1 || settingsChoise > 4)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> settingsChoise;
	}
	switch (settingsChoise)
	{
	case 1:
		changeColor();
	case 2:
		changeField();
	case 3:
		changeField();
	case 4:
		mainMenu();
	default:
		cout << "placeholder";
		break;
	}
	cout << "\n\n";
}
//Инструкции
void Instructions()
{
	cout << " [3] Instructions\n\n";
	cout << "  1)Player is X, Computer is O.\n";
	cout << "  2)Players take turns by putting their symbol on empty spaces.\n";
	cout << "  3)The first player that will get a straight diagonal or vertical or horizontal line wins.\n";
	cout << "  4)When all spaces are full and there is no winner, the game is over.\n";
	cout << " [3] Field 3x3\n 1 2 3\n 4 5 6\n 7 8 9\n\n";
	cout << " [4] Field 4x4\n  1  2  3  4\n  5  6  7  8\n  9 10 11 12\n 13 14 15 16\n\n";
	cout << " [5] Field 5x5\n  1  2  3  4  5\n  6  7  8  9 10\n 11 12 13 14 15\n 16 17 18 19 20\n 21 22 23 24 25\n\n";
	system("pause");
	cout << "\n\n";
}
//Печать поля
void printField()
{
	cout << " [#] Tic Tac Toe\n";
	short fieldCounter = 0;
	switch (fieldChoise)
	{
	case 1: fieldCounter = 3; break;
	case 2: fieldCounter = 4; break;
	case 3: fieldCounter = 5; break;
	}
	for (short y = 0; y < fieldCounter; y++)
	{
		for (short x = 0; x < fieldCounter; x++)
		{
			cout << " " << field[x][y];
		}
		cout << endl;
	}
	cout << "\n";
}
//Отчистка поля
void gameFieldPurge()
{
	for (short y = 0; y < 5; y++)
	{
		for (short x = 0; x < 5; x++)
		{
			field[x][y] = '#';
		}
	}
}
//Выбор типа игры
void startMenu()
{
	cout << " [1] Start game\n\n";
	cout << " [1] Player VS Computer\n [2] Player VS Player\n [3] Return Back\n";
	cout << " [?] Choose game mode: ";
	cin >> gameMode;
	switch (gameMode)
	{case 3:
			clearAll();
			mainMenu();
	}
	while (gameMode < 1 || gameMode > 3)
	{
		cout << "\n [!]Error! Invalid game mode.\n [?] Try again: ";
		cin >> gameMode;
	}
	cout << "\n\n";
}
//Ход игрока Х
void playerX_Turn()
{
	cout << "Player X turn: ";
	cin >> playerXChoise;
	if (fieldChoise == 1)
	{
		switch (playerXChoise)
		{
		case 1:
			if (field[0][0] == '#') { field[0][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 2:
			if (field[1][0] == '#') { field[1][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 3:
			if (field[2][0] == '#') { field[2][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 4:
			if (field[0][1] == '#') { field[0][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 5:
			if (field[1][1] == '#') { field[1][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 6:
			if (field[2][1] == '#') { field[2][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 7:
			if (field[0][2] == '#') { field[0][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 8:
			if (field[1][2] == '#') { field[1][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 9:
			if (field[2][2] == '#') { field[2][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		default:
			cout << " Error\n";
			playerX_Turn();
			break;
		}
	}
	else if (fieldChoise == 2)
	{
		switch (playerXChoise)
		{
		case 1:
			if (field[0][0] == '#') { field[0][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 2:
			if (field[1][0] == '#') { field[1][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 3:
			if (field[2][0] == '#') { field[2][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 4:
			if (field[3][0] == '#') { field[3][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 5:
			if (field[0][1] == '#') { field[0][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 6:
			if (field[1][1] == '#') { field[1][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 7:
			if (field[2][1] == '#') { field[2][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 8:
			if (field[3][1] == '#') { field[3][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 9:
			if (field[0][2] == '#') { field[0][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 10:
			if (field[1][2] == '#') { field[1][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 11:
			if (field[2][2] == '#') { field[2][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 12:
			if (field[3][2] == '#') { field[3][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 13:
			if (field[0][3] == '#') { field[0][3] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 14:
			if (field[1][3] == '#') { field[1][3] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 15:
			if (field[2][3] == '#') { field[2][3] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 16:
			if (field[3][3] == '#') { field[3][3] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		default:
			cout << " Error\n";
			playerX_Turn();
			break;
		}
	}
	else if (fieldChoise == 3)
	{
		switch (playerXChoise)
		{
		case 1:
			if (field[0][0] == '#') { field[0][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 2:
			if (field[1][0] == '#') { field[1][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 3:
			if (field[2][0] == '#') { field[2][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 4:
			if (field[3][0] == '#') { field[3][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 5:
			if (field[4][0] == '#') { field[4][0] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 6:
			if (field[0][1] == '#') { field[0][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 7:
			if (field[1][1] == '#') { field[1][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 8:
			if (field[2][1] == '#') { field[2][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 9:
			if (field[3][1] == '#') { field[3][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 10:
			if (field[4][1] == '#') { field[4][1] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 11:
			if (field[0][2] == '#') { field[0][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 12:
			if (field[1][2] == '#') { field[1][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 13:
			if (field[2][2] == '#') { field[2][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 14:
			if (field[3][2] == '#') { field[3][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 15:
			if (field[4][2] == '#') { field[4][2] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 16:
			if (field[0][3] == '#') { field[0][3] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 17:
			if (field[1][3] == '#') { field[1][3] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 18:
			if (field[2][3] == '#') { field[2][3] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 19:
			if (field[3][3] == '#') { field[3][3] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 20:
			if (field[4][3] == '#') { field[4][3] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 21:
			if (field[0][4] == '#') { field[0][4] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 22:
			if (field[1][4] == '#') { field[1][4] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 23:
			if (field[2][4] == '#') { field[2][4] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 24:
			if (field[3][4] == '#') { field[3][4] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		case 25:
			if (field[4][4] == '#') { field[4][4] = 'X'; }
			else { cout << " [!] Already taken!\n"; playerX_Turn(); }
			break;
		default:
			cout << " Error\n";
			playerX_Turn();
			break;
		}
	}
	cout << endl;
}
void playerO_Turn()
{
	cout << " Player O turn: ";
	cin >> playerOChoise;
	if (fieldChoise == 1)
	{
		switch (playerOChoise)
		{
		case 1:
			if (field[0][0] == '#') { field[0][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 2:
			if (field[1][0] == '#') { field[1][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 3:
			if (field[2][0] == '#') { field[2][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 4:
			if (field[0][1] == '#') { field[0][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 5:
			if (field[1][1] == '#') { field[1][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 6:
			if (field[2][1] == '#') { field[2][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 7:
			if (field[0][2] == '#') { field[0][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 8:
			if (field[1][2] == '#') { field[1][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 9:
			if (field[2][2] == '#') { field[2][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		default:
			cout << " Error\n";
			playerO_Turn();
			break;
		}
	}
	else if (fieldChoise == 2)
	{
		switch (playerOChoise)
		{
		case 1:
			if (field[0][0] == '#') { field[0][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 2:
			if (field[1][0] == '#') { field[1][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 3:
			if (field[2][0] == '#') { field[2][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 4:
			if (field[3][0] == '#') { field[3][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 5:
			if (field[0][1] == '#') { field[0][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 6:
			if (field[1][1] == '#') { field[1][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 7:
			if (field[2][1] == '#') { field[2][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 8:
			if (field[3][1] == '#') { field[3][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 9:
			if (field[0][2] == '#') { field[0][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 10:
			if (field[1][2] == '#') { field[1][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 11:
			if (field[2][2] == '#') { field[2][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 12:
			if (field[3][2] == '#') { field[3][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 13:
			if (field[0][3] == '#') { field[0][3] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 14:
			if (field[1][3] == '#') { field[1][3] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 15:
			if (field[2][3] == '#') { field[2][3] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 16:
			if (field[3][3] == '#') { field[3][3] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		default:
			cout << " Error\n";
			playerO_Turn();
			break;
		}
	}
	else if (fieldChoise == 3)
	{
		switch (playerOChoise)
		{
		case 1:
			if (field[0][0] == '#') { field[0][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 2:
			if (field[1][0] == '#') { field[1][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 3:
			if (field[2][0] == '#') { field[2][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 4:
			if (field[3][0] == '#') { field[3][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 5:
			if (field[4][0] == '#') { field[4][0] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 6:
			if (field[0][1] == '#') { field[0][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 7:
			if (field[1][1] == '#') { field[1][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 8:
			if (field[2][1] == '#') { field[2][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 9:
			if (field[3][1] == '#') { field[3][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 10:
			if (field[4][1] == '#') { field[4][1] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 11:
			if (field[0][2] == '#') { field[0][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 12:
			if (field[1][2] == '#') { field[1][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 13:
			if (field[2][2] == '#') { field[2][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 14:
			if (field[3][2] == '#') { field[3][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 15:
			if (field[4][2] == '#') { field[4][2] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 16:
			if (field[0][3] == '#') { field[0][3] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 17:
			if (field[1][3] == '#') { field[1][3] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 18:
			if (field[2][3] == '#') { field[2][3] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 19:
			if (field[3][3] == '#') { field[3][3] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 20:
			if (field[4][3] == '#') { field[4][3] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 21:
			if (field[0][4] == '#') { field[0][4] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 22:
			if (field[1][4] == '#') { field[1][4] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 23:
			if (field[2][4] == '#') { field[2][4] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 24:
			if (field[3][4] == '#') { field[3][4] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		case 25:
			if (field[4][4] == '#') { field[4][4] = 'O'; }
			else { cout << " [!] Already taken!\n"; playerO_Turn(); }
			break;
		default:
			cout << " Error\n";
			playerO_Turn();
			break;
		}
	}
	cout << endl;
}
//"Computer turn"
void turnComputer()
{
	if (fieldChoise == 1)
	{
		turnComp = 1 + rand() % 9;
		switch (turnComp)
		{
		case 1:
			if (field[0][0] == '#') { field[0][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 2:
			if (field[1][0] == '#') { field[1][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 3:
			if (field[2][0] == '#') { field[2][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 4:
			if (field[0][1] == '#') { field[0][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 5:
			if (field[1][1] == '#') { field[1][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 6:
			if (field[2][1] == '#') { field[2][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 7:
			if (field[0][2] == '#') { field[0][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 8:
			if (field[1][2] == '#') { field[1][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 9:
			if (field[2][2] == '#') { field[2][2] = 'O'; }
			else { turnComputer(); }
			break;
		default:
			break;
		}
	}
	else if (fieldChoise == 2)
	{
		turnComp = 1 + rand() % 16;
		switch (turnComp)
		{
		case 1:
			if (field[0][0] == '#') { field[0][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 2:
			if (field[1][0] == '#') { field[1][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 3:
			if (field[2][0] == '#') { field[2][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 4:
			if (field[3][0] == '#') { field[3][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 5:
			if (field[0][1] == '#') { field[0][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 6:
			if (field[1][1] == '#') { field[1][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 7:
			if (field[2][1] == '#') { field[2][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 8:
			if (field[3][1] == '#') { field[3][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 9:
			if (field[0][2] == '#') { field[0][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 10:
			if (field[1][2] == '#') { field[1][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 11:
			if (field[2][2] == '#') { field[2][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 12:
			if (field[3][2] == '#') { field[3][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 13:
			if (field[0][3] == '#') { field[0][3] = 'O'; }
			else { turnComputer(); }
			break;
		case 14:
			if (field[1][3] == '#') { field[1][3] = 'O'; }
			else { turnComputer(); }
			break;
		case 15:
			if (field[2][3] == '#') { field[2][3] = 'O'; }
			else { turnComputer(); }
			break;
		case 16:
			if (field[3][3] == '#') { field[3][3] = 'O'; }
			else { turnComputer(); }
			break;
		default:
			break;
		}
	}
	else if (fieldChoise == 3)
	{
		turnComp = 1 + rand() % 25;
		switch (turnComp)
		{
		case 1:
			if (field[0][0] == '#') { field[0][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 2:
			if (field[1][0] == '#') { field[1][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 3:
			if (field[2][0] == '#') { field[2][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 4:
			if (field[3][0] == '#') { field[3][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 5:
			if (field[4][0] == '#') { field[4][0] = 'O'; }
			else { turnComputer(); }
			break;
		case 6:
			if (field[0][1] == '#') { field[0][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 7:
			if (field[1][1] == '#') { field[1][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 8:
			if (field[2][1] == '#') { field[2][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 9:
			if (field[3][1] == '#') { field[3][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 10:
			if (field[4][1] == '#') { field[4][1] = 'O'; }
			else { turnComputer(); }
			break;
		case 11:
			if (field[0][2] == '#') { field[0][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 12:
			if (field[1][2] == '#') { field[1][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 13:
			if (field[2][2] == '#') { field[2][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 14:
			if (field[3][2] == '#') { field[3][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 15:
			if (field[4][2] == '#') { field[4][2] = 'O'; }
			else { turnComputer(); }
			break;
		case 16:
			if (field[0][3] == '#') { field[0][3] = 'O'; }
			else { turnComputer(); }
			break;
		case 17:
			if (field[1][3] == '#') { field[1][3] = 'O'; }
			else { turnComputer(); }
			break;
		case 18:
			if (field[2][3] == '#') { field[2][3] = 'O'; }
			else { turnComputer(); }
			break;
		case 19:
			if (field[3][3] == '#') { field[3][3] = 'O'; }
			else { turnComputer(); }
			break;
		case 20:
			if (field[4][3] == '#') { field[4][3] = 'O'; }
			else { turnComputer(); }
			break;
		case 21:
			if (field[0][4] == '#') { field[0][4] = 'O'; }
			else { turnComputer(); }
			break;
		case 22:
			if (field[1][4] == '#') { field[1][4] = 'O'; }
			else { turnComputer(); }
			break;
		case 23:
			if (field[2][4] == '#') { field[2][4] = 'O'; }
			else { turnComputer(); }
			break;
		case 24:
			if (field[3][4] == '#') { field[3][4] = 'O'; }
			else { turnComputer(); }
			break;
		case 25:
			if (field[4][4] == '#') { field[4][4] = 'O'; }
			else { turnComputer(); }
			break;
		default:;
			break;
		}
	}
	cout << endl;
}
//Проверка на победителя
void WinnerCheck()
{
	if (fieldChoise == 1 && winner == ' ')
	{
		if (field[0][0] != '#' && ((field[0][0] == field[1][0] && field[0][0] == field[2][0]) || (field[0][0] == field[0][1] && field[0][0] == field[0][2]) || (field[0][0] == field[1][1] && field[0][0] == field[2][2])))
		{/*1st hor row 1st ver row and diag \*/
			winner = field[0][0];
		}
		if (field[2][0] != '#' && ((field[2][0] == field[2][1] && field[2][0] == field[2][2]) || (field[2][0] == field[1][1] && field[2][0] == field[0][2])))
		{/*3rd ver row and diag /*/
			winner = field[2][0];
		}
		if (field[1][1] != '#' && ((field[1][1] == field[1][0] && field[1][1] == field[1][2]) || (field[1][1] == field[0][1] && field[1][1] == field[2][1])))
		{/*2nd ver and 2nd hor row*/
			winner = field[1][1];
		}
		if (field[1][2] != '#' && ((field[1][2] == field[0][2] && field[1][2] == field[2][2])))
		{/*3rd hor row*/
			winner = field[1][2];
		}
	}
	else if (fieldChoise == 2 && winner == ' ')
	{
		if (field[0][0] != '#' && ((field[0][0] == field[1][0] && field[0][0] == field[2][0] && field[0][0] == field[3][0]) || (field[0][0] == field[1][1] && field[0][0] == field[2][2] && field[0][0] == field[3][3]) || (field[0][0] == field[0][1] && field[0][0] == field[0][2] && field[0][0] == field[0][3])))
		{/*1st hor and 1st ver rows and diag \*/
			winner = field[0][0];
		}
		if (field[3][0] != '#' && ((field[3][0] == field[3][1] && field[3][0] == field[3][2] && field[3][0] == field[3][3]) || (field[3][0] == field[2][1] && field[3][0] == field[1][2] && field[3][0] == field[0][3])))
		{/*4th ver row and diag /*/
			winner = field[3][0];
		}
		if (field[1][1] != '#' && ((field[1][1] == field[1][0] && field[1][1] == field[1][2] && field[1][1] == field[1][3]) || (field[1][1] == field[0][1] && field[1][1] == field[2][1] && field[1][1] == field[3][1])))
		{/*2nd ver and 2nd hor rows*/
			winner = field[1][1];
		}
		if (field[2][2] != '#' && ((field[2][2] == field[0][2] && field[2][2] == field[1][2] && field[2][2] == field[3][2]) || (field[2][2] == field[2][3] && field[2][2] == field[2][1] && field[2][2] == field[2][0])))
		{/*3rd hor and 3rd ver rows*/
			winner = field[0][0];
		}
		if (field[3][3] != '#' && ((field[3][3] == field[2][3] && field[3][3] == field[1][3] && field[3][3] == field[0][3])))
		{/*4th hor row*/
			winner = field[3][3];
		}
	}
	else if (fieldChoise == 3 && winner == ' ')
	{
		if (field[0][0] != '#' && ((field[0][0] == field[1][0] && field[0][0] == field[2][0] && field[0][0] == field[3][0] && field[0][0] == field[4][0]) || (field[0][0] == field[1][1] && field[0][0] == field[2][2] && field[0][0] == field[3][3] && field[0][0] == field[4][4]) || (field[0][0] == field[0][1] && field[0][0] == field[0][2] && field[0][0] == field[0][3] && field[0][0] == field[0][4])))
		{/*1st hor and 1st ver rows and diag \*/
			winner = field[0][0];
		}
		if (field[4][0] != '#' && ((field[4][0] == field[4][1] && field[4][0] == field[4][2] && field[4][0] == field[4][3] && field[4][0] == field[4][4]) || (field[4][0] == field[3][1] && field[4][0] == field[2][2] && field[4][0] == field[1][3] && field[4][0] == field[0][4])))
		{/*5th ver row and diag /*/
			winner = field[4][0];
		}
		if (field[1][1] != '#' && ((field[1][1] == field[1][0] && field[1][1] == field[1][2] && field[1][1] == field[1][3] && field[1][1] == field[1][4]) || (field[1][1] == field[0][1] && field[1][1] == field[2][1] && field[1][1] == field[3][1] && field[1][1] == field[4][1])))
		{/*2nd ver and 2nd hor rows*/
			winner = field[1][1];
		}
		if (field[2][2] != '#' && ((field[2][2] == field[2][0] && field[2][2] == field[2][1] && field[2][2] == field[2][3] && field[2][2] == field[2][4]) || (field[2][2] == field[0][2] && field[2][2] == field[1][2] && field[2][2] == field[3][2] && field[2][2] == field[4][2])))
		{/*3rd hor and 3rd ver rows*/
			winner = field[2][2];
		}
		if (field[3][3] != '#' && ((field[3][3] == field[3][0] && field[3][3] == field[3][1] && field[3][3] == field[3][2] && field[3][3] == field[3][4]) || (field[3][3] == field[0][3] && field[3][3] == field[1][3] && field[3][3] == field[2][3] && field[3][3] == field[4][3])))
		{/*4th ver and 4th hor rows*/
			winner = field[3][3];
		}
		if (field[4][4] != '#' && ((field[4][4] == field[0][4] && field[4][4] == field[1][4] && field[4][4] == field[2][4] && field[4][4] == field[3][4])))
		{/*5th hor row*/
			winner = field[4][4];
		}
	}
}
//Проверка на то, можно ли ещё ходить
void gameFieldCheck()
{
	short fieldOpred = 0;
	short emptySpaceCount = 0;
	switch (fieldChoise)
	{
	case 1: fieldOpred = 3; break;
	case 2: fieldOpred = 4; break;
	case 3: fieldOpred = 5; break;
	}
	for (short y = 0; y < fieldOpred; y++)
	{
		for (short x = 0; x < fieldOpred; x++)
		{
			if (field[x][y] == '#')
			{
				emptySpaceCount++;
			}
		}
	}
	if (emptySpaceCount == 0)
	{
		fieldStatus = 1;
	}
	else
	{
		fieldStatus = 0;
	}
}
//мэйн
int main()
{
	clearAll();
	mainMenu();
	switch (menuChoise)
	{
	case 1:
		clearAll();
		startMenu();
		clearAll();
		if (gameMode == 1)
		{
			while (winner != 'X' & winner != 'O' & fieldStatus == 0)
			{
				clearAll();
				printField();
				playerX_Turn();
				WinnerCheck();
				gameFieldCheck();
				if (winner != 'X' & winner != 'O' & fieldStatus == 0)
				{
					clearAll();
					turnComputer();
					WinnerCheck();
					gameFieldCheck();
				}
				if (winner == 'X')
				{
					clearAll();
					cout << "you are winner\n\n";
					winner = ' ';
				}
				else if (winner == 'O')
				{
					clearAll();
					cout << "You lost\n\n";
					winner = ' ';
				}
				else
				{
					clearAll();
					cout << "nobody won. draw\n\n";
					fieldStatus = 0;
				}
				gameFieldPurge();
			}
		}
		else if (gameMode == 2)
		{
			if (firstTurnChoise == 1)
			{
				while (winner != 'X' && winner != 'O' && fieldStatus == 0)
				{
					clearAll();
					printField();
					playerX_Turn();
					WinnerCheck();
					gameFieldCheck();
					if (winner != 'X' && winner != 'O' && fieldStatus == 0)
					{
						clearAll();
						printField();
						playerO_Turn();
						WinnerCheck();
						gameFieldCheck();
					}
				}
				if (winner == 'X')
				{
					clearAll();
					cout << "Player X is winner\n\n";
					winner = ' ';
				}
				else if (winner == 'O')
				{
					clearAll();
					cout << "Player O is winner\n\n";
					winner = ' ';
				}
				else
				{
					clearAll();
					cout << "nobody won. draw\n\n";
					fieldStatus = 0;
				}
				gameFieldPurge();
			}
		}
		system("pause");
		main();
	case 2:
		clearAll();
		settingsMenu();
	case 3:
		clearAll();
		Instructions();
		clearAll();
		main();
	case 4:
		return 0;
	default: 
		cout << "placeholder";
	}
	return 0;
}
