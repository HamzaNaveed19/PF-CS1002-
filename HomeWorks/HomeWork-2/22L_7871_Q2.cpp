#include<iostream>
#include<string>
using namespace std;
int main() {

	int day, month;
	string mnth_name, day_name;

	cout << "enter the number of month  :";
	cin >> month;

	if (month >= 1 && month <= 12) {

		if (month == 1) {


			mnth_name = "january";
		}
		if (month == 2) {

			mnth_name = "february";
		}
		if (month == 3) {

			mnth_name = "march";
		}
		if (month == 4) {

			mnth_name = "april";
		}
		if (month == 5) {

			mnth_name = "may";
		}
		if (month == 6) {

			mnth_name = "june";
		}
		if (month == 7) {

			mnth_name ="july";
		}
		if (month == 8) {
			mnth_name = "august";
		}
		if (month == 9) {

			mnth_name = "spetember";
		}
		if (month == 10) {

			mnth_name = "october";
		}
		if (month == 11) {

			mnth_name = "november";
		}
		if (month == 12) {

			mnth_name = "december";
		}

	}
	else {
		cout << "invalid month number \n";
		return 0;

	}
	cout << "enter the number of day  :";
	cin >> day;
	if (day >= 1 && day <= 7) {

		if (day == 1) {
			day_name = "monday";
		}
		if (day == 2) {
			day_name = "tuesday";
		}
		if (day == 3) {
			day_name = "wednesday";
		}
		if (day == 4) {
			day_name = "thursday";
		}
		if (day == 5) {
			day_name = "friday";
		}
		if (day == 6) {
			day_name ="saturday";
		}
		if (day == 7) {
			day_name = "sunday";
		}
	}
	else {
		cout << "invalid day\n";
	}
	cout << "day : " << day_name << "     month: " << mnth_name << endl;


	system("pause");
	return 0;



}