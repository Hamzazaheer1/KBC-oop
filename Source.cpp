#include<string>
#include<fstream>
#include<iostream>

using namespace std;

int lmnopq = 0;

class Builtin
{
public:
	Builtin();
	~Builtin();
	void builtingame();
	void displayrec();

protected:
	string answer;
	string choice;
	string disp;
	string name;
};


Builtin::Builtin()
{
	answer = "null";
	choice = "null";
	disp = "null";
}
Builtin::~Builtin()
{
}
void Builtin::builtingame()
{
	int counter = 0;
	long double prize = 0;

	int Lchoice = 0;
	string chocei;

	ofstream rec;
	rec.open("record.txt", ios::app);

	ifstream output;
	output.open("Q.txt", ios::out);
	if (output.is_open())
	{
		if (rec.is_open())
		{
			cin.ignore();
			cout << "\n\t\t\t\t  Enter your name !!! ";
			getline(cin, name);
			lmnopq++;
			rec << name << endl;
			for (size_t i = 0; i <= 10; i++)
			{
				cout << "\n\t\t\t\t " << name << " Currently your balance is " << prize << "\n\n";
				getline(output, disp);
				cout << disp << endl;
				getline(output, disp);
				cout << disp << endl;
				getline(output, disp);
				cout << disp << endl;
				getline(output, disp);
				cout << disp << endl;
				getline(output, disp);
				cout << disp << endl;

				counter += 1;

				getline(output, answer);

				if (Lchoice == 0)
				{
					cout << "\n\nLifeline:: ";
					cout << "\nthis is only one for whole game";
					cout << "\n\nPress 1 to use LifeLine & Any other NUmber to Play game ";
					cin >> chocei;
					if (chocei == "1")
					{
						cout << "\n\nyou have taken a LifeLine ";
						cout << answer << endl;
						Lchoice = 1;
					}
					else {
						cout << "No lifeline chosen!" << endl;
					}
				}
				cin.ignore();
				cout << "\nEnter your choice ";
				getline(cin, choice);
				if (choice == answer)
				{
					cout << "\nCorrect answer " << endl;
					if (counter <= 3)
					{
						prize += 10000;
						system("cls");
						cout << "You are playing at begginer level " << endl;
					}
					else if (counter > 3 && counter <= 6)
					{
						prize += 20000;
						system("cls");
						cout << "You are playing at advance level " << endl;
					}
					else if (counter > 6 && counter <= 10)
					{
						prize += 30000;
						system("cls");
						cout << "You are playing at expert level " << endl;
					}
					else if (counter > 12)
					{
						cout << "!!! HURRAH You have complete the game !!!" << endl;
						cout << "Questions reach its limit" << endl;
						break;
					}
				}
				else
				{
					cout << "\n\n\t\t\t\t FALSE ANSWER";
					cout << "\n\n\t\t\t\tAlright! You'll take home Prize" << prize << "\nThank you for playing! :)" << endl;
					rec << prize << endl;
					break;
				}
			}
		}
		rec.close();
	}
	output.close();
}
void Builtin::displayrec() {

	string n;
	string p;
	ifstream rec;
	rec.open("record.txt", ios::out);

	for (int i = 0; i < lmnopq; i++)
	{
		getline(rec, n);
		cout << "\t\t\t\t\tRecord is " << n << endl;
		getline(rec, p);
		cout << "\t\t\t\t\tPrize is " << p << endl;
	}
	rec.close();
}

class customG :public Builtin
{
public:
	customG();
	~customG();
	void getquestions();
	void customgame();

protected:
	string ques;
};


customG::customG()
{
	ques = "null";
	answer = "null";
	choice = "null";
	disp = "null";
}
customG::~customG()
{
}
void customG::getquestions()
{
	int i = 0;
	ofstream input;
	input.open("questions.txt", ios::app);
	if (input.is_open())
	{
		for (size_t i = 0; i < 10; i++)
		{
			cin.ignore();
			cout << "\nEnter question :";
			getline(cin, ques);
			input << ques << endl;

			cout << "Enter answer :";
			getline(cin, ques);
			input << ques << endl;

			cout << "Enter answer :";
			getline(cin, ques);
			input << ques << endl;

			cout << "Enter answer :";
			getline(cin, ques);
			input << ques << endl;

			cout << "Enter answer :";
			getline(cin, ques);
			input << ques << endl;

			cout << "\nEnter & save correct answers for your questions ";
			getline(cin, ques);
			input << ques << endl;

		}
	}
	input.close();
}
void customG::customgame()
{
	int counter = 0;
	long double prize = 0;

	int Lchoice = 0;
	string chocei;

	ofstream rec;
	rec.open("record.txt", ios::app);

	ifstream output;
	output.open("questions.txt", ios::out);
	if (output.is_open())
	{
		if (rec.is_open())
		{
			cin.ignore();
			cout << "\n\t\t\t\t  Enter your name !!! ";
			getline(cin, name);
			lmnopq++;
			rec << name << endl;
			for (size_t i = 0; i < 10; i++)
			{
				cout << "\n\t\t\t\t " << name << " Currently your balance is " << prize << "\n\n";
				getline(output, disp);
				cout << disp << endl;
				getline(output, disp);
				cout << disp << endl;
				getline(output, disp);
				cout << disp << endl;
				getline(output, disp);
				cout << disp << endl;
				getline(output, disp);
				cout << disp << endl;

				counter += 1;

				getline(output, answer);

				if (Lchoice == 0)
				{
					cout << "\n\nLifeline:: ";
					cout << "\nthis is only one for whole game";
					cout << "\n\nPress 1 to use LifeLine & Any other to Play game ";
					cin >> chocei;
					if (chocei == "1")
					{
						cout << "\n\nyou have taken a LifeLine ";
						cout << answer << endl;
						Lchoice = 1;
					}
					else {
						cout << "No lifeline for you!" << endl;
					}
				}

				cout << "\nEnter your choice ";
				getline(cin, choice);

				if (choice == answer)
				{
					cout << "\nCorrect answer " << endl;
					if (counter <= 3)
					{
						prize += 10000;
						system("cls");
						cout << "You are playing at begginer level " << endl;
					}
					else if (counter > 3 && counter <= 6)
					{
						prize += 20000;
						system("cls");
						cout << "You are playing at advance level " << endl;
					}
					else if (counter > 6 && counter <= 10)
					{
						prize += 30000;
						system("cls");
						cout << "You are playing at expert level " << endl;
					}
					else if (counter > 12)
					{
						cout << "!!! HURRAH You have complete the game !!!" << endl;
						cout << "Questions reach its limit" << endl;
						break;
					}
				}
				else
				{
					cout << "\n\n\t\t\t\t FALSE ANSWER";
					cout << "\n\n\t\t\t\tAlright! You'll take home P" << prize << "\nThank you for playing! :)" << endl;
					rec << prize << endl;
					exit(0);
				}
			}
		}
		rec.close();
	}
	output.close();

	remove("questions.txt");
	remove("answers.txt");
}

class Game
{
public:
	Game();
	~Game();

	void intro();
	void Menu();
	void Rule();
	void AboutTheGame();

	void setid();
	void setpass();
	string getid();
	string getpass();
	int login();
	void displayMenu1();

	customG obj;
	void runbuiltingame();
	void runcustomgame();
	void displayallrec();

private:
	string passWord;
	string userName;
	string userNameAttempt;
	string passwordAttempt;
	bool accessGranted;
};


Game::Game()
{
	accessGranted = 0;
}
Game::~Game()
{
}

void Game::setid() {
	string id;
	ofstream file;
	file.open("i_file.txt", ios::app);
	cin.ignore();
	cout << "Register your id :";
	getline(cin, id);
	if (file.is_open())
	{
		file << id;
	}
	else
	{
		cout << "File not created/error ";
	}
	file.close();
}
void Game::setpass() {
	string pass;
	ofstream file;
	file.open("p_file.txt", ios::app);
	cin.ignore();
	cout << "\nRegister your pass :";
	getline(cin, pass);
	if (file.is_open())
	{
		file << pass;
	}
	else
	{
		cout << "File not created/error ";
	}
	file.close();
}
string Game::getid() {
	string line;
	fstream file;
	file.open("i_file.txt", ios::in);
	if (file.is_open())
	{
		getline(file, line);
	}
	file.close();
	return line;
}
string Game::getpass() {
	string line;
	fstream file;
	file.open("p_file.txt", ios::in);
	if (file.is_open())
	{
		getline(file, line);
	}
	file.close();
	return line;
}
int Game::login() {
	cout << "Username is required. \nUsername:";
	cin >> userNameAttempt;
	userName = getid();
	if (userNameAttempt == userName)
	{
		cout << "Password:";
		cin >> passwordAttempt;
		passWord = getpass();
		if (passwordAttempt == passWord)
		{
			cout << "id/password are correct .";
			return 1;
		}
	}
	else
	{
		cout << "your id is not registered :";
		return 0;
	}
}
void Game::displayMenu1() {
	system("color 4A");
	cout << "\n\t\t\t\tAccounts Menu\n";
	cout << "\t\t\t\tPress 1 Login\n";
	cout << "\t\t\t\tPress 2 Create account\n";
	cout << "\t\t\t\tChoice = ";
}

void Game::intro()
{
	system("cls");
	system("Color 0A");
	cout << "========================================================================================================================";
	cout << R"(
 _    _      _                            _          _   _            _____              _____       _     
| |  | |    | |                          | |        | | | |          /  __ \ _     _    |  _  |     (_)    
| |  | | ___| | ___ ___  _ __ ___   ___  | |_ ___   | |_| |__   ___  | /  \/| |_ _| |_  | | | |_   _ _ ____
| |/\| |/ _ \ |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \  | __| '_ \ / _ \ | |  |_   _|_   _| | | | | | | | |_  /
\  /\  /  __/ | (_| (_) | | | | | |  __/ | || (_) | | |_| | | |  __/ | \__/\|_|   |_|   \ \/' / |_| | |/ / 
 \/  \/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/   \__|_| |_|\___|  \____/             \_/\_\\__,_|_/___|

----------------------------------------------By: Hamza/Muneeb/Talha---------------------------------------------
    )" << "\n";

	cout << "\n\n\t\t\t\t\t>>>  KAUN BANEGA CROREPATI <<<<";
	cout << "\n========================================================================================================================";
	cout << "\n\n\n\n\n\n***********************************************************************************************************************";
	cout << "*************************************************************************************************************************";

	cout << "\n\n***********************************************************************************************************************";
	cout << "*************************************************************************************************************************";
}
void Game::Menu()
{
	cout << "\n\n\t\t\t\t\t*** MAIN MENU ***";
	cout << "\n\n\t\t\t\t\t1. Start Game";
	cout << "\n\t\t\t\t\t2. Rules";
	cout << "\n\t\t\t\t\t3. About the Game";
	cout << "\n\t\t\t\t\t4. Create your own Game";
	cout << "\n\t\t\t\t\t5. Display Records";
	cout << "\n\t\t\t\t\t6. To exit the game";
	cout << "\n\n\t\t\t\t\tEnter your choice >>>";
}
void Game::Rule()
{

	cout << "\n\n\t\t\t\t\t*** Game Rules ***";
	cout << "\n\n\t\t1. You have to answer 10 questions one by one";
	cout << "\n\t\t2. Each question has a fixed prize money starting from Rs. 1,000 to 10,000";
	cout << "\n\t\t3. Game is divided into three levels";
	cout << "\n\t\t4. If you will give a wrong answer than the program will end and you get what you have won";
	cout << "\n\t\t5. You may use  one Life Line ";
	cout << "\n\t\t6.You may quit the game anytime \n\n";

}
void Game::AboutTheGame()
{
	cout << "\n\n\t\t\t\t\t*** About The Game ***";
	cout << "\n\n\t\t. We created a quiz game program with 10 questions, 4 answer choices,";
	cout << "\n\t\t.  correct answer and some points awarded per question.";
	cout << "\n\t\t. We realize this code isn't the best; we are still a beginner and this is our best try.";
	cout << "\n\t\t. We am open to criticismand any suggestions on how to shorten this code";
	cout << "\n\t\t.(especially where the questions are typed with their answers and correct answer).\n\n";
}

void Game::runbuiltingame()
{
	obj.builtingame();
}
void Game::runcustomgame()
{
	obj.getquestions();
	obj.customgame();
}
void Game::displayallrec() {
	obj.displayrec();
}

int main()
{
	int choice = 0;
	int choice2 = 0;
	int temp;

	Game obj;

	cout << "\n\n\t\t\t\t\tYou have to login to play the game \n";
	cout << "\t\t\t\tOr if you dont have any account than register one :)\n\n";

	do
	{
		obj.displayMenu1();
		cin >> choice2;
		if (choice2 == 1)
		{
			temp = obj.login();

			if (temp == 1)
			{
				obj.intro();
				system("pause");
				system("cls");
				do
				{
					obj.Menu();
					cin >> choice;
					switch (choice)
					{
					case 1:
						system("cls");
						system("color 4F");
						cout << "\n\n\n\n\n\t\t\t\t  You are playing builtin game\n";
						cout << "\t\t\t\t  GOOD LUCK HAVE FUN !!!!!";
						obj.runbuiltingame();
						system("pause");
						system("cls");
						break;
					case 2:
						system("cls");
						system("color 4F");
						obj.Rule();
						system("pause");
						system("cls");
						break;
					case 3:
						system("cls");
						system("color 4F");
						obj.AboutTheGame();
						system("pause");
						system("cls");
						break;
					case 4:
						system("cls");
						system("color 4F");
						cout << "\n\n\n\n\n\t\t\t\t  You are playing CUSTOM game\n";
						cout << "\t\t\t\t  GOOD LUCK HAVE FUN !!!!!";
						obj.runcustomgame();
						system("pause");
						system("cls");
						break;
					case 5:
						system("cls");
						system("color 4F");
						cout << "\n\n\t\t\t\t\t Welcome To The Records Section\n\n\n";
						obj.displayallrec();
						system("pause");
						system("cls");
						break;
					case 6:
						system("cls");
						system("color 4F");
						exit(0);
					}
				} while (choice >= 1 && choice <= 5);
			}
			else
			{
				system("cls");
				cout << "\nYou have to create account ";
			}
		}
		if (choice2 == 2)
		{
			obj.setid();
			obj.setpass();
			system("cls");
			cout << "HURRAH!!!! Account have been created \n\n\n";
		}
		if (choice2 == 3)
		{
			exit(0);
		}

	} while (choice2 >= 1 && choice2 <= 2);

	system("pause");
	return 0;
}