#include<iostream>
#include<string>
using namespace std;
void getData(string courses[], int Crhrs[], int marks[], int Size) {
	for (int i = 0; i < Size; i++) {
		cout << "Enter the course name : ";
		getline(cin, courses[i]);
		cout << "enter the credit hours : ";
		cin >> Crhrs[i];
		cout << "enter the marks in " << courses[i] << " :";
		cin >> marks[i];
		cin.ignore();
		cout << endl;
		if (marks[i] < 0 || marks[i]>100 || Crhrs[i] < 0 || Crhrs[i]>4) {
			cout << "invalid data !" << endl;
			i--;
		}
	}
}
void AssignGrades(int marks[], string grades[], float scores[], int Size) {
	for (int i = 0; i < Size; i++) {
		if (marks[i] >= 90 && marks[i] <= 100) {
			grades[i] = "A+";
			scores[i] = 4.00;
		}
		if (marks[i] >= 86 && marks[i] <= 89) {
			grades[i] = "A";
			scores[i] = 4.00;
		}if (marks[i] >= 82 && marks[i] <= 85) {
			grades[i] = "A-";
			scores[i] = 3.67;
		}if (marks[i] >= 78 && marks[i] <= 81) {
			grades[i] = "B+";
			scores[i] = 3.33;
		}if (marks[i] >= 74 && marks[i] <= 77) {
			grades[i] = "B";
			scores[i] = 3.00;
		}if (marks[i] >= 70 && marks[i] <= 73) {
			grades[i] = "B-";
			scores[i] = 2.67;
		}if (marks[i] >= 66 && marks[i] <= 69) {
			grades[i] = "C+";
			scores[i] = 2.33;
		}if (marks[i] >= 62 && marks[i] <= 65) {
			grades[i] = "C";
			scores[i] = 2.00;
		}if (marks[i] >= 58 && marks[i] <= 61) {
			grades[i] = "C-";
			scores[i] = 1.67;
		}if (marks[i] >= 54 && marks[i] <= 57) {
			grades[i] = "D+";
			scores[i] = 1.33;
		}if (marks[i] >= 50 && marks[i] <= 53) {
			grades[i] = "D";
			scores[i] = 1.00;
		}if (marks[i] >= 0 && marks[i] <= 49) {
			grades[i] = "F";
			scores[i] = 0.00;
		}
	}
}
void getSGPA(float scores[], int Crhrs[], float& sgpa, int& CrErnd, int Size) {
	float sum = 0, hours = 0;
	for (int i = 0; i < Size; i++) {
		if (scores[i] < 50) {
			CrErnd = CrErnd + Crhrs[i];
		}
		sum = sum + (scores[i] * Crhrs[i]);
		hours = hours + Crhrs[i];
	}
	sgpa = sum / hours;

}
void PrintData(string courses[], int marks[], string grades[], int& CrErnd, float& sgpa, int Size) {
	cout << "COURSES" << "\t" << "marks" << "\t" << "grades" << endl;
	for (int i = 0; i < Size; i++) {
		cout << courses[i] << "\t" << marks[i] << "\t" << grades[i] << endl;
	}
	cout << endl;
	cout << "earned credit hours is " << CrErnd << endl;
	cout << "total sgpa is " << sgpa << endl;
}
int main() {
	const int Size = 8;
	string courses[Size];
	int Crhrs[Size];
	int marks[Size];
	string Grades[Size];
	float scores[Size];
	float sgpa;
	int CrErnd = 0;
	getData(courses, Crhrs, marks, Size);
	AssignGrades(marks, Grades, scores, Size);
	getSGPA(scores, Crhrs, sgpa, CrErnd, Size);
	PrintData(courses, marks, Grades, CrErnd, sgpa, Size);
}
