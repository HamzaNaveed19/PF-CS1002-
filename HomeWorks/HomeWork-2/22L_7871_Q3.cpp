#include<iostream>
using namespace std;
int main() {
	

	int subscribers, no_of_videos, max_view, min_view, watch_time, total_view, likes;
	bool monetization;
	cout << "enter number of subscribers of your channel :";
	cin >> subscribers;
	cout << "enter number of videos uploaded per month in past year  :";
	cin >> no_of_videos;
	cout << "enter maximium view on any of your video :";
	cin >> max_view;
	cout << "enter minimum view on any of your video :";
	cin >> min_view;
	cout << "enter accumulated watch time in past 12 months :";
	cin >> watch_time;
	cout << "enter total no of views on  all videos : ";
	cin >> total_view;
	cout << "enter overall likes : ";
	cin >> likes;
	if (subscribers >= 1000 && watch_time >= 4000 && no_of_videos >= 2 && min_view >= 10 && likes >= 0.4 * total_view) {

		monetization = true;
	}
	else {
		monetization = false;

	}
	if (monetization == true) {
		if (subscribers >= 100000 && subscribers <= 1000000) {
			cout << "your channel is monetized and awarded with silver play button " << endl;

		}
		else if (subscribers >= 1000000 && subscribers <= 10000000) {
			cout << "your channel is monetized and awarded with Gold play button " << endl;

		}
		else if (subscribers >= 10000000) {
			cout << "your channel is monetized and awarded with platinum play button " << endl;
		}
	}
	if (monetization == false) {
		if (subscribers >= 100000 && subscribers <= 1000000) {
			cout << "your channel is not  monetized and awarded with silver play button " << endl;

		}
		else if (subscribers >= 1000000 && subscribers <= 10000000) {
			cout << "your channel is not monetized and awarded with Gold play button " << endl;

		}
		else if (subscribers >= 10000000) {
			cout << "your channel is not monetized and awarded with platinum play button " << endl;
		}
	}
	else if(subscribers<100000) {
			cout << "your channel is only monetized without any play button " << endl;
		}

	system("pause");
	return 0;














}