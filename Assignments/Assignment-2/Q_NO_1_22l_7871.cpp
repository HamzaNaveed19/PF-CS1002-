//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	cout << "enter the size of array : ";
//	cin >> n;
//	int num[1000];
//	cout << "enter the elements of array : ";
//	for (int i = 0; i < n; i++) {
//		cin >> num[i];
//	}
//	int start = 0;
//	int end = n - 1;
//	int sum = 0;
//	int check_sum = 0;
//	for (int j = 0; j < n; j++) {
//		sum = sum + num[j];
//	}
//	bool eq_index = false;
//	for (int i = 0; i < n; ++i) {
//		sum -= num[i];
//		if (check_sum == sum) {
//			cout << "the equilibrium index is " << i << endl;
//			eq_index = true;
//			break;
//		}
//		check_sum = check_sum + num[i];
//	}if (eq_index != true) {
//		cout << "equilibrium index not exist " << endl;
//	}
//
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (num[i] < num[j]) {
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//	int k;
//	cout << "enter the number of largest element ";
//	cin >> k;
//	cout << "the " << k << "th largest element is " << num[k - 1];
//	return 0;
//}
