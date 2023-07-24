//To use Sleep function you need to include window.h 
//setCord function will be used to set the position of cursor on console.
//You need to pass the position of (x,y) as parameters.
//sample of positions of (x,y) on console is given below.
//0,0  1,0  2,0  3,0 ...
//0,1  1,1  2,1  3,1 ...
//2,0  2,1  2,2  3,2 ...
//3,0  3,1  3,2  3,3 ...
//Execute the code and check its output
#include<iostream>
#include<windows.h>
using namespace std;
void setCord(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main()
{
	int r = 6, k = 0, p = 1;
	for (int j = 1; j <= r; j++)
	{
		for (int i = 1; i <= 5; i++)
		{
			cout << "*";
		}
		if(j%2 != 0)
			setCord(0, r - ++k);//This function will be used to set the cursor position on console
		else
			setCord(0, j - p++);
		Sleep(1500); // to pause the console for 1 second  
	}
	setCord(0, r);//set the cursor to the last line
	system("pause");
}















/*class Author
{
	char* name;
public:
	Author(char* n)
	{
		name = new char[strlen(n) + 1];
	}
};
class Book
{

};

int main()
{
	Book b1;
	Author a1;
	cout << "hello\n";
	system("pause");
}
*/






















void print(int* p)
{
	for (int i = 0; i < 4; i++)
	{
		cout << *p++ << endl;
	}
}
int * update(int* p)
{
	int temp[4] = { 60,7,8,9 };
	p = temp;
	return p;
}
/*int main()
{
	int balance, dep_amount, w_amount, i_rate;
	cout << "Enter starting balance: ";
	cin >> balance;
	cout << "Enter deposit amount: ";
	cin >> dep_amount;

	balance = balance + dep_amount;

	cout << "Enter withdrawal amount: ";
	cin >> w_amount;

	balance = balance - w_amount;

	cout << "Enter interest rate: ";
	cin >> i_rate;

	balance = (balance* i_rate)/100 + balance;
	cout << "balance " << balance << "\n";
	cout << "dep amount " << dep_amount << "\n";
	cout << "withdrawal amount " << w_amount << "\n";
	cout << "interest rate " << i_rate << "\n";

	system("pause");
	return 0;
}
*/