#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;
 string  a, b, c, d, e, f, g, h, i;
int op1,op2;
int turn;
int pp;



void draw()
{

system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << a << "  |  " << b << "  |  " << c << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << d << "  |  " << e << "  |  " << f << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << g << "  |  " << h << "  |  " << i << endl;

    cout << "     |     |     " << endl << endl;
}

void player_1(int z)
{
	//cout << "Enter the box number to draw: ";
	 op1=z;
	if (op1 == 1)
	{
		a = "x";
	}
	else if (op1 == 2)
	{
		b = "x";
	}
	else if (op1 == 3)
	{
		c = "x";
	}
	else if (op1 == 4)
	{
		d = "x";
	}
	else if (op1 == 5)
	{
		e = "x";
	}
	else if (op1 == 6)
	{
		f = "x";
	}
	else if (op1 == 7)
	{
		g = "x";
	}
	else if (op1 == 8)
	{
		h = "x";
	}
	else if (op1 == 9)
	{
		i = "x";
	}
}



	void player_2(int pp)
	{
		//cout << "Enter the box number to draw: ";
		op2=pp;
		if (op2 == 1)
		{
			a = "O";
		}
		else if (op2 == 2)
		{
			b = "O";
		}
		else if (op2 == 3)
		{
			c = "O";
		}
		else if (op2 == 4)
		{
			d = "O";
		}
		else if (op2 == 5)
		{
			e = "O";
		}
		else if (op2 == 6)
		{
			f = "O";
		}
		else if (op2 == 7)
		{
			g = "O";
		}
		else if (op2 == 8)
		{
			h = "O";
		}
		else if (op2 == 9)
		{
			i = "O";
		}
	}

	void input()
	{
		cout << "Player 1 turn: ";
		cin >> turn;  player_1(turn);
		cout << "Player 2 turn: ";
		cin >> turn;  player_2(turn);
		draw();
		cout << "Player 1 turn: ";
		cin >> turn;  player_1(turn);
		cout << "Player 2 turn: ";
		cin >> turn;   player_2(turn);
		draw();
		cout << "Player 1 turn: ";
		cin >> turn; player_1(turn);
		cout << "Player 2 turn: ";
		cin >> turn;   player_2(turn);
		draw();
		cout << "Player 1 turn: ";
		cin >> turn;  player_1(turn);
		cout << "Player 2 turn: ";
		cin >> turn;   player_2(turn);
		draw();
		cout << "Player 1 turn: ";
		cin >> turn;  player_1(turn);
		system("CLS");
	}

	void win()
	{
		if (a == b && b == c && c == "o" || d == e && e == f && f == "o" || g == h && h == i && i == "o" || a == d && d == g && g == "o" || b == e && e == h && h == "o" || c == f && f == i && f == "o")
		{
			cout << "Player 2  W I N S....." << endl;
		}
		else if (a == b && b == c && c == "x" || d == e && e == f && f == "x" || g == h && h == i && i == "x" || a == d && d == g && g == "x" || b == e && e == h && h == "x" || c == f && f == i && f == "x")
		{
			cout << "Player 1  W I N S....." << endl;
		}
	}






	int main()
	{

		draw();
		input();
		
		
		cout << endl << endl << endl;
		draw();
		win();
		int hhh;
		cin>>hhh;
		system("pause");
	}




