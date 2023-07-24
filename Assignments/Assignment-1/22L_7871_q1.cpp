//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int start, end;
//    cout << "enter the start of your range: ";
//    cin >> start;
//    cout << "enter the end of your range : ";
//    cin >> end;
//    if (start < end) {
//        int temp1 = start, temp2 = end;
//        while (temp1 <= temp2) {
//
//            int factor = 0;
//            for (int i = 1; i <= temp1; i++) {
//                if (temp1 % i == 0) {
//                    factor++;
//                }
//            }
//            if (factor == 2) {
//                cout << temp1 << " is  a  prime number " << endl;
//            }
//            cout << endl;
//            int number = temp1, reverse = 0;
//            while (number != 0) {
//                reverse = reverse * 10;
//                reverse = reverse + (number % 10);
//                number = number / 10;
//            }if (reverse == temp1) {
//                cout << reverse << " is   a  palindrome number  " << endl;
//
//            }
//            temp1++;
//        }
//
//    }
//    else {
//        cout << "invalid range " << endl;
//    }
//
//}