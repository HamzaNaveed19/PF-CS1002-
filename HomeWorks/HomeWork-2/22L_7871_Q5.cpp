#include<iostream>
using namespace std;
int main() {

	int citations, publications;
	float imp_factor = 0;
	
	string category;
	cout << "enter number of citations ";
	cin >> citations;
	cout << "enter no of publucations ";
	cin >> publications;
	if (citations % 1 == 0 && publications % 1 == 0 && citations>0 && publications>0 && citations >= 2*publications) {
		if (citations >= 2*publications) {
			float citation = (float)citations;
		

			imp_factor = citation / publications;
			if (imp_factor >= 2 && imp_factor <= 3.9) {
				category = "category 4";
			}
			else if (imp_factor >= 4 && imp_factor <= 5.9) {
				category = "category 3";
			}
			else if (imp_factor >= 6 && imp_factor <= 7.9) {
				category = "category 2";
			}
			else if (imp_factor >= 8) {
				category = "category 1";
				
			}

			cout << "the impact factor is " << imp_factor << " and the category is " << category << endl;
			return 0;
		}
		
	}

	else  {
		cout << "invalid input" << endl;
		
	}

	
	return 0;
}