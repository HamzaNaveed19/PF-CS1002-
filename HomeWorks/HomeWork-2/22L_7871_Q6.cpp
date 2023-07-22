#include<iostream>
using namespace std;
int main() {

	cout << "• Mega Package: (Subscription charges: 599)" << endl;
	cout << "a) Offnet Minutes: 1500 (1.5 rupee per minute will be charged for additional minutes)" << endl;
	cout << "b) on-net Minutes: 2500 (0.75 rupee per minute will be charged for additional minutes)" << endl;
	cout << "c) SMS: 700 (0.5 rupee per message will be charged for additional messages)" << endl;
	cout << "d) Mobile Data: 10 GB (8.5 rupee per GB will be charged for additional data usage)" << endl;
	cout << "____________________________________________________________________________________________________" << endl;
	cout << "• Supreme: (Subscription charges: 1199)" << endl;
	cout << "a) Offnet Minutes: 2000 (1.25 rupee per minute will be charged for additional minutes)" << endl;
	cout << "b) on-net Minutes: 3000 (0.65 rupee per minute will be charged for additional minutes)" << endl;
	cout << "c) SMS: 1000 (0.45 rupee per minute will be charged for additional minutes)" << endl;
	cout << "d) Mobile Data: 20 GB (6.5 rupee per GB will be charged for additional data usage)" << endl;
	cout << "____________________________________________________________________________________________________" << endl;
	cout << "• Premium: (Subscription charges: 2500)" << endl;
	cout << "a) Offnet Minutes: Unlimited" << endl;
	cout << "b) on-net Minutes: Unlimited" << endl;
	cout << "c) SMS: Unlimited" << endl;
	cout << "d) Mobile Data: Unlimited" << endl;
	cout << "____________________________________________________________________________________________________" << endl;
	int off_net, on_net, sms, mbl_data;
	cout << "enter off net minutes you want:";
	cin >> off_net;
	cout << "enter on net minutes you want :";
	cin >> on_net;
	cout << "enter number of sms you want :";
	cin >> sms;
	cout << "enter mobile data you want in GB :";
	cin >> mbl_data;
	int cond_1 = 0;
	int cond_2 = 0;
	int cond_3 = 0;
	if (off_net > 0 && on_net > 0 && sms > 0 && mbl_data > 0) {
		if (off_net <= 1500) {
			cond_1++;
		}
		if (on_net <= 2500) {
			cond_1++;
		}
		if (sms <= 700) {
			cond_1++;
		}
		if (mbl_data <= 10) {
			cond_1++;
		}
		if (off_net <= 2000 && off_net>1500) {
			cond_2++;
		}
		if (on_net <= 3000 && on_net>2500) {
			cond_2++;
		}
		if (sms <= 1000 && sms>700) {
			cond_2++;
		}
		if (mbl_data <= 20 && mbl_data>10) {
			cond_2++;
		}
		if (off_net > 2000) {
			cond_3++;
		}
		if (on_net > 3000) {
			cond_3++;
		}
		if (sms > 1000) {
			cond_3++;
		}
		if (mbl_data >20) {
			cond_3++;
		}
	
	}
	else {
		cout << "invalid data !" << endl;
	}
	if (cond_1 > cond_2 && cond_1 > cond_3) {
		cout << "you should buy offer 1 i.e. Mega package " << endl;

	}
	else if (cond_2> cond_1 && cond_2 > cond_3) {
		cout << "you should buy offer 2 i.e. Supreme package " << endl;

	}
	else if (cond_3 > cond_1 && cond_3 > cond_2) {
		cout << "you should buy offer 3 i.e. premium package " << endl;

	}

	system("pause");
	return 0;





}