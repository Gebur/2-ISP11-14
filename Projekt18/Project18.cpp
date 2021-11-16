#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
short questionNumber, amountOfQuestions = 1, menuChoise, settingsChoise, trysAmount = 5, firstHint = 0, secondHint = 0, answer;
short trysChoice, quizHintChoise;
int massCheck[14];
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
	cout << " [1] Start\n [2] Settings\n [3] Instructions\n [4] Quit\n\n";
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
	cout << " [1] one Try\n";
	cout << " [2] three Try's\n";
	cout << " [3] five Try's\n";
	cout << " [4] eight Try's\n";
	cout << " [5] no restrictions\n\n";
	cin >> trysChoice;
	while (trysChoice < 1 || trysChoice > 5)
	{
		cout << "\nWrong button.\nTry again: ";
		cin >> trysChoice;
	}
	switch (trysChoice)
	{
	case 1:
		trysAmount = 1;
		break;
	case 2:
		trysAmount = 3;
		break;
	case 3:
		trysAmount = 5;
		break;
	case 4:
		trysAmount = 8;
		break;
	case 5:
		trysAmount = 300;
		break;
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
//настройка подсказок
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
//рандом генерирование вопроса
void getQuestion()
{
	short questionNumber = 1 + rand() % 15;
}
//проверка на повторение у вопросa
void questionCheck()
{
	int J12 = 0;
	while (J12 < 15)
	{
		if (massCheck[J12] == questionNumber)
		{
			getQuestion();
		}
		else
		{
			massCheck[J12] = questionNumber;
		}
	}
}
//вопросы
void defQuestion()
{
	clearAll();
	switch (questionNumber)
	{
	//Сам вопрос
	case 1:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		//Защита от дебила
		while (answer < 1 || answer > 5)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}//Правильный ответ
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		//подсказки
		else if (answer == 5)
		{
			//Нема подсказок
			if (firstHint == 0 & secondHint == 0)
			{
				cout << "Right now you have no tips. Go and Insert your answer." << "\n\n";
				cin >> answer;
			}
			//Если есть только 50 на 50
			else if (firstHint == 1 & secondHint == 0)
			{
				cout << "Right now you have 50/50 stuff. If you wnat to use it press 1. If not press 0." << "\n\n";
				cin >> quizHintChoise;
				if (quizHintChoise == 0)
				{
					//Ввод ответа вместо исп. подсказки
					cout << "Go and Insert your answer." << "\n\n";
					cin >> answer;
					while (answer < 1 || answer > 5)
					{
						cout << "\nWrong button.\nTry again : ";
						cin >> answer;
					}
				}
				//Работа 50 на 50
				else if (quizHintChoise == 1)
				{
					cout << "\t" << "placeholder\n\n";
					cout << "answer 1\t" << "answer 2\t" << endl << endl;
					cout << "you have " << trysAmount << " trys" << endl << endl;
					cout << "Insert your answer. You dont have any hints now." << endl;
					cin >> answer;
					while (answer < 1 || answer > 3)
					{
						cout << "\nWrong button.\nTry again : ";
						cin >> answer;
					}
				}
				//Не то число у того варианта
				else
				{
					cout << "\nWrong button.\nTry again : ";
					cin >> quizHintChoise;
				}
			}
			//Только правильный ответ.
			else if (firstHint == 0 & secondHint == 1)
			{
				cout << "Right now you have 1 correct answer stuff. If you wnat to use it press 1. If not press 0." << "\n\n";
				cin >> quizHintChoise;
				if (quizHintChoise == 0)
				{
					//Ввод ответа вместо исп. подсказки
					cout << "Go and Insert your answer." << "\n\n";
					cin >> answer;
					while (answer < 1 || answer > 5)
					{
						cout << "\nWrong button.\nTry again : ";
						cin >> answer;
					}
				}
				//работа подсказки с верным ответом
				else if (quizHintChoise == 1)
				{
					cout << "\t" << "placeholder\n\n";
					cout << "answer 1 is correct\t" << endl << endl;
					cout << "you have " << trysAmount << " trys" << endl << endl;
					system("pause");
					answer = 1;
				}
				//не та цифра
				else
				{
					cout << "\nWrong button.\nTry again : ";
					cin >> quizHintChoise;
				}
			}
			else if (firstHint == 1 & secondHint == 1)
			{
				cout << "Right now you have 2 hints. If you wnat to use 50/50 stuff press 1. If you wnat to use correct answer press 2. If you dont want to use hints, press 0." << "\n\n";
				cin >> quizHintChoise;
				if (quizHintChoise == 0)
				{
					//Ввод ответа вместо исп. подсказки
					cout << "Go and Insert your answer." << "\n\n";
					cin >> answer;
					while (answer < 1 || answer > 5)
					{
						cout << "\nWrong button.\nTry again : ";
						cin >> answer;
					}
				}
				else if(quizHintChoise == 1)
			}
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 2:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 3:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 4:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 5:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 6:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 7:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 8:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 9:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 10:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 11:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 12:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 13:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 14:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	case 15:
		cout << "\t" << "placeholder\n\n";
		cout << "answer 1\t" << "answer 2\t" << endl;
		cout << "answer 3\t" << "answer 4\t" << endl << endl;
		cout << "you have " << trysAmount << " trys" << endl << endl;
		cout << "Insert your answer. If you want to use your hint insert 5." << endl;
		cin >> answer;
		while (answer < 1 || answer > 6)
		{
			cout << "\nWrong button.\nTry again : ";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << "correct answer" << "\n\n";
			system("pause");
		}
		else if (answer == 5)
		{
			cout << "placeholder";
		}
		else
		{
			trysAmount -= 1;
		}
		break;
	}
}
//проверка на попытки
void trysCheck()
{
	if (trysAmount == 0)
	{
		clearAll();
		cout << "you lost" << "\n\n";
		system("pause");
	}
	else
	{
		clearAll();
		getQuestion();
		defQuestion();
	}
}
int main()
{
	clearAll();
	mainMenu();
	switch (menuChoise)
	{
	case 1:
		while (trysAmount != 0)
		{
			clearAll();
			getQuestion();
			questionCheck();
			defQuestion();
			trysCheck();
		}
		break;
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
