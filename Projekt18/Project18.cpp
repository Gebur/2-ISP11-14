#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
short questionNumber, amountOfQuestions = 1, menuChoise, settingsChoise, trysAmount = 1, firstHint = 0, secondHint = 0;
string backgroundColor, textColor;
string color;
//уборщик текста
void clearAll()
{
	system("cls");
}
//главное меню
void mainMenu()
{
	cout << " [@] Quiz\n\n";
	cout << " [1] Start\n [2] Settings\n [4] Quit\n\n";
	cout << "Choose button: ";
	cin >> menuChoise;
	while (menuChoise < 1 || menuChoise > 4)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> menuChoise;
	}
}
//цвета
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
//число попыток
void amountTrys()
{
	clearAll();
	cout << " [2] Try's amount\n\n";
	cout << " [1] zero Try's\n";
	cout << " [2] one Try\n";
	cout << " [3] three Try's\n";
	cout << " [4] five Try's\n";
	cout << " [5] eight Try's\n";
	cout << " [5] no restrictions\n\n";
	cin >> trysAmount;
	while (trysAmount < 1 || trysAmount > 6)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> trysAmount;
	}
}
//Число вопросов
void amountQuestions()
{
	clearAll();
	cout << " [2] Question's amount\n\n";
	cout << " [1] five question's\n";
	cout << " [2] ten question's\n";
	cout << " [3] 15 question's\n\n";
	cin >> amountOfQuestions;
	while (amountOfQuestions < 1 || amountOfQuestions > 4)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> amountOfQuestions;
	}
}
void helpSettings()
{
	clearAll();
	cout << " [4] Help stuff\n\n";
	cout << " [1] 50/50 stuff\n";
	cout << " [2] 1 correct answer\n\n";
	cout << " Do you want to activate the first hint?\n\n";
	cout << " Yes-input 1. No-input 0\n\n";
	if (firstHint == 0)
	{
		cout << " It is currently off" << "\n\n";
	}
	else
	{
		cout << " It is currently on" << "\n\n";
	}
	cin >> firstHint;
	cout << endl;
	while (firstHint < 0 || firstHint > 1)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> firstHint;
	}
	cout << " Do you want to activate the second hint?\n\n";
	cout << " Yes-input 1. No-input 0\n\n";
	if (secondHint == 0)
	{
		cout << " It is currently off" << "\n\n";
	}
	else
	{
		cout << " It is currently on" << "\n\n";
	}
	cin >> secondHint;
	while (secondHint < 0 || secondHint > 1)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> secondHint;
	}
}
//меню настроек
void settingsMenu()
{
	clearAll();
	cout << " [2] Settings\n\n";
	cout << " [1] Colors\n [2] Try's amount\n [3] Amount of questions\n [4] Help stuff\n [5] Back to menu\n";
	cout << "Choose button: ";
	cin >> settingsChoise;
	while (settingsChoise < 1 || settingsChoise > 6)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> settingsChoise;
	}
	switch (settingsChoise)
	{
	case 1:
		changeColor();
		break;
	case 2:
		amountTrys();
		break;
	case 3:
		amountQuestions();
		break;
	case 4:
		helpSettings();
		break;
	case 5:
		mainMenu();
	default:
		cout << "placeholder";
		break;
	}
	cout << "\n\n";
}
//инструкции
void Instructions()
{
	cout << " [3] Instructions\n\n";
	cout << "  1)it's a Quiz. You answer questions, if you answer correctly-you go to the next one.\n";
	cout << "  2)If not-you lose one try, and has to answer Quiz again or you lose.\n";
	cout << "  3)There is also a timer.\n";
	cout << "  4)You can activate 2 hints in the settings(i recomend you to check it out actually).\n";
	cout << "  5)I am a cool guy, so they have names like 50/50 stuff and 1 correct answer.\n";
	cout << "  6)The first stuff remove 2 false answers, and the second stuff select the correct answer for you.\n";
	cout << "  7)Basic settings-five questions and zero try's and zero hints.\n";
	system("pause");
	cout << "\n\n";
}
void getQuestion()
{
	short questionNumber = 1 + rand() % 15;
}
int main()
{
	clearAll();
	mainMenu();
	switch (menuChoise)
	{
	case 1:
		cout << "placeholder";
	case 2:
		settingsMenu();
		break;
	case 3:
		Instructions();
		break;
	case 4:
		cout << "0";
	}
}
