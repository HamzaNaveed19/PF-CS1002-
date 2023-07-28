//#include<iostream>
//using namespace std;
//int main() {
//	cout << "hi! welcome to Hamza's ATM machine" << endl;
//	int user_acc[10] = { 0,0,0,0,0,0,0,0,0,0 };
//	int withdraw_am[10] = { 0 };
//	float deposit_am[10] = { 0 };
//	float balance[10] = { 0,0,0,0,0,0,0,0,0,0 };
//	bool q = false;
//	int check_acc = 0;
//	while (q!=true) {
//		bool login = false;
//		char main_menu;
//		cout << "select option from the following menu : " << endl;
//		cout << "***MAIN MENU***\n";
//		cout << "l-->LOGIN \nc-->CREATE ACCOUNT \nq-->QUIT \n";
//		while (login != true) {
//			cin >> main_menu;
//			if (main_menu == 'l' || main_menu == 'c' || main_menu == 'q') {
//				login = true;
//			}
//			else {
//				cout << "invalid selection!\n";
//			}
//		}
//		bool acc_exist = false, acc_ID = false;
//		int acc_Id = -1;
//		int op_menu = -1;
//		if (login == true) {
//			if (main_menu == 'l') {
//				cout << "enter your account ID: ";
//				cin >> check_acc;
//				for (int i = 0; i < 10; i++) {
//					if (user_acc[i] == check_acc) {
//						acc_exist = true;
//						acc_Id = i;
//						cout << "access granted !" << endl;
//						break;
//					}
//				}if (acc_exist == false) {
//					cout << "account not exist \nplease enter valid account number! " << endl;
//				}
//				
//			}
//			if (main_menu == 'c') {
//				while (acc_ID == false) {
//					cout << "enter your account user number : ";
//					cin >> acc_Id;
//					bool acc_res = false;
//					for (int j = 0; j < 10; j++) {
//						if (acc_Id == user_acc[j]) {
//							acc_res = true;
//						}
//					}if (acc_res == true) {
//						cout << "account already reserved !" << endl;
//						continue;
//					}
//					if (acc_Id >= 1 && acc_Id <= 10) {
//						acc_ID = true;
//						cout << "thank you! your account has been created . " << endl;
//						user_acc[acc_Id] = acc_Id;
//					}
//					else {
//						cout << "please enter user number between 1 and 10" << endl;
//					}
//					
//				}
//			}
//				if (acc_ID == true || acc_exist==true) {
//					bool  quit = false;
//					while (quit==false) {
//						bool  op_Menu = false, withdraw = false, deposit = false;
//						cout << "select option from following menu: " << endl;
//						cout << "1-withdraw money \n2-deposit amount \n3-check balance \n4-return to main menu " << endl;
//						while (op_Menu == false) {
//							cin >> op_menu;
//							if (op_menu <= 0 && op_menu > 4) {
//								cout << "choose valid operation menu :";
//							}
//							else {
//								op_Menu = true;
//							}
//						}if (op_menu == 1) {
//							cout << "enter withdraw amount : ";
//							while (withdraw == false) {
//								cin >> withdraw_am[acc_Id];
//								if ((withdraw_am[acc_Id] % 10 == 0 || withdraw_am[acc_Id] % 50 == 0 || withdraw_am[acc_Id] % 1000 == 0) && (withdraw_am[acc_Id] >= 0 && withdraw_am[acc_Id] <= balance[acc_Id] && withdraw_am[acc_Id] % 1 == 0)) {
//									withdraw = true;
//								}
//								else {
//									cout << "enter valid amount !" << endl;
//									if (balance[acc_Id] < withdraw_am[acc_Id]) {
//										cout << "insufficient balance!" << endl;
//									}
//								}
//							}
//							if (withdraw == true) {
//								if(withdraw_am[acc_Id] / 5000!=0)
//								cout << "no_of denomination of 5000-s is " << withdraw_am[acc_Id] / 5000 << endl;
//								if((withdraw_am[acc_Id] % 5000) / 1000!=0)
//								cout << "no_of denomination of 1000-s is " << (withdraw_am[acc_Id] % 5000)/1000 << endl;
//								if((withdraw_am[acc_Id] % 1000) / 500!=0)
//								cout << "no_of denomination of 500-s is " << (withdraw_am[acc_Id]%1000)/500 << endl;
//								if((withdraw_am[acc_Id] % 1000 % 500) / 100!=0)
//								cout << "no_of denomination of 100-s is " << (withdraw_am[acc_Id] % 1000%500) / 100 << endl;
//								if((withdraw_am[acc_Id] % 1000 % 500 % 100) / 50)
//								cout << "no_of denomination of 50-s is " << (withdraw_am[acc_Id] % 1000%500%100) / 50 << endl;
//								if((withdraw_am[acc_Id] % 1000 % 500 % 100 % 50) / 20)
//								cout << "no_of denomination of 20-s is " << (withdraw_am[acc_Id] % 1000%500%100%50) / 20 << endl;
//								if((withdraw_am[acc_Id] % 1000 % 500 % 100 % 50 % 20) / 10)
//								cout << "no_of denomination of 10-s is " << (withdraw_am[acc_Id] % 1000 % 500 % 100 % 50%20) / 10 << endl;
//								balance[acc_Id] = balance[acc_Id] - withdraw_am[acc_Id];
//							}
//						}if (op_menu == 2) {
//							cout << "enter the amount you want to deposit : ";
//							while (deposit == false) {
//								cin >> deposit_am[acc_Id];
//								if (deposit_am[acc_Id] >= 0) {
//									deposit = true;
//								}
//								else {
//									cout << "enter valid amount ! " << endl;
//								}
//							}
//							balance[acc_Id] = balance[acc_Id] + deposit_am[acc_Id];
//						}
//						if (op_menu == 3) {
//							cout << "your current balance is " << balance[acc_Id] << " Rs" << endl;
//						}if (op_menu == 4) {
//							quit = true;
//
//						}
//					}
//				}
//			
//			if (main_menu == 'q') {
//				cout << "thanks for choosing Hamza's Bank !" << endl;
//				q = true;
//				break;
//			}
//
//		}
//	}
//}