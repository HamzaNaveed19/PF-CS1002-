//#include<iostream>
//using namespace std;
//int main() {
//
//	float base, height, perimeter, width, length, area_rec, area_tri, result;
//	cout << "enter the length of base of triangle  ";
//	cin >> base;
//	cout << "enter the height of triangle  ";
//	cin >> height;
//	cout << "enter the perimter of rectangle  ";
//	cin >> perimeter;
//	cout << "enter the width of recangle  ";
//	cin >> width;
//	length = (perimeter - (2 * width)) / 2;
//	area_rec = length * width;
//	cout << "area of inside rectangle is " << area_rec << endl;
//	area_tri = 0.5 * base * height;
//	cout << "area of triangle is " << area_tri << endl;
//	result = area_tri - area_rec;
//
//	if (result<=0) {
//
//		cout << "rectangle in triangle is not possible with such dimensions" << endl;
//		return 0;
//	}
//	else {
//		cout << "area of unshaded region is  " << result << endl;
//	}
//
//
//	system("pause");
//	return 0;
//
//}