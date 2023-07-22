#include<iostream>
using namespace std;
int main() {

	int date, month, year;
	bool cur;
	cout << "enter current date :";
	cin >> date;
	cout << "enter current month :";
	cin >> month;
	cout << "enter current year :";
	cin >> year;
	if (date >= 1 && date <= 31 && month >= 1 && month <= 12 && year >999 && year<10000) {

		cur = true;
		if (month == 2) {
			if (date <= 29)
				cur = true;
		}
		if (month == 4) {
			if (date <= 30)
				cur = true;
		}
		if (month == 6) {
			if (date <= 30)
				cur = true;
		}
		if (month == 9) {
			if (date <= 30)
				cur = true;
		}
		if (month == 11) {
			if (date <= 30)
				cur = true;
		}
		
	}
	else {
		cur = false;
	}
	if (cur == true) {
		cout << "valid date " << endl;
	}
	else if(cur==false){
		cout << "invalid date " << endl;
	
		return 0;
	}
	bool magic_date;
	year = year % 100;
	if (date * month == year) {
		magic_date = true;
		cout << "it is magic date" << endl;

	}
	else {
		magic_date = false;
		cout << "it is not magic date " << endl;

	}
	system("pause");
	return 0;


}