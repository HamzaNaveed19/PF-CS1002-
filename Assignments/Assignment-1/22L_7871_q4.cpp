#include<iostream>
#include<Windows.h>
using namespace std;
int main()
{
	int time, l, stars, c = 0, i = 0, m = 0;
	char alp;
	cout << "Enter the time to stay : ";
	cin >> time;
	cout << "Enter the character you want to represent ";
	cin >> alp;
	l = 0;
	stars = 2 * time - 1;
	for (int i = 2 * time; i > 0; i--)
	{
		if (i > time) {
			if (i == 2 * time) {
				for (int j = 2 * time + 1; j > 0; j--)
				{
					cout << "-";
				}
				cout << endl;
			}
			for (int s = 0; s < l; s++)
			{
				cout << " ";
			}
			cout << "\\";
			if (!(2 * time - c < i))
			{
				for (int j = 0; j < stars; j++)
				{
					cout << alp;
				}
			}
			if ((2 * time - c < i))
			{
				for (int j = 0; j < stars; j++)
				{
					cout << " ";
				}
			}
			cout << "/";
			stars = stars - 2;
			l++;
			cout << endl;
		}
		if (i <= time)
		{
			stars = stars + 2;
			l--;

			for (int s = 0; s < l; s++)
			{
				cout << " ";
			}
			cout << "/";
			if ((c < i))
			{
				for (int j = 0; j < stars; j++)
				{
					cout << " ";
				}
			}
			if (!(c < i))
			{
				for (int j = 0; j < stars; j++)
				{
					cout << alp;
				}
			}

			cout << "\\";

			cout << endl;
			if (i == 1) {
				for (int j = 2 * time + 1; j > 0; j--)
				{
					cout << "-";
				}
				cout << endl;
			}
		}
		if (i == 1)
		{

			Sleep(1000);
			system("cls");
			c++;
			m++;
			if (c <= time)
			{
				l = 0;
				stars = 2 * time - 1;
				i = 2 * time + 1;
			}
		}



	}

	return 0;
}
