#include<iostream>
#include<string>
using namespace std;
int main() {

	cout << "choose vehicle type for your ride ;" << endl;
	cout << "enter '1' for car " << endl;
	cout << "enter '2' for auto " << endl;
	cout << "enter '3' for bike " << endl;
	int veh_type, ride_time, base_fare, wait_time, tot_time, distance, per_min_ch, per_km_ch, discount, surcharge, tot_fare;
	string vehicle, time;
	char s, p;
	bool promo, surge, penalty = false;
	cout << "enter digit  for your vehicle  :";
	cin >> veh_type;
	cout << "enter base fare :";
	cin >> base_fare;
	cout << "enter time for your ride : ";
	cin >> ride_time;
	if (ride_time >= 1200 && ride_time < 2400) {

		cout << "enter waiting time in minutes : ";
		cin >> wait_time;
		cout << "enter per minute wait time : ";
		cin >> per_min_ch;
		cout << "enter total time :";
		cin >> tot_time;
		cout << "enter distance from pickup location to destination in km : ";
		cin >> distance;
		cout << "enter per km fare charge  : ";
		cin >> per_km_ch;
		cout << "if you have promo code ,enter y else  enter n ::";
		cin >> p;
		if (p == 'y') {
			promo = true;
			cout << "enter percent  discount on promo code :";
			cin >> discount;
		}
		else {
			promo = false;
		}
		cout << "enter surge charge rate :";
		cin >> surcharge;
		cout << "is surge applicable in this time,if yes then enter y else any other character  :: ";
		cin >> s;
		if (s == 'y' || (ride_time >= 1300 && ride_time <= 1500) || (ride_time >= 1900 && ride_time <= 2100)) {
			surge = true;
		}
		else {
			surge = false;
		}


		if (veh_type == 1 || veh_type == 2 || veh_type == 3) {

			if (veh_type == 3) {
				vehicle = "bike";
				tot_fare = base_fare + (tot_time * per_min_ch) + (distance * per_km_ch);

			}

			if (veh_type == 1) {
				vehicle = "car";
				tot_fare = base_fare + (tot_time * per_min_ch) + (distance * per_km_ch);
				tot_fare = 3 * tot_fare;
			}

			if (veh_type == 2) {
				vehicle = "auto";
				tot_fare = base_fare + (tot_time * per_min_ch) + (distance * per_km_ch);
				tot_fare = 2 * tot_fare;
			}

		}
		else {
			cout << "invalid vehicle type !" << endl;
			return 0;
		}
		if (wait_time > 3) {
			penalty == true;
			tot_fare = tot_fare + 50;
		}
		else {
			penalty == false;
		}
		if (surge == true) {
			tot_fare = tot_fare + surcharge;

		}
		if (promo == true) {
			discount = (discount / 100) * tot_fare;
			tot_fare = tot_fare - discount;
		}
		int driver_share, tax, company_share;
		driver_share = 0.7 * tot_fare;
		company_share = 0.2 * tot_fare;
		tax = 0.1 * tot_fare;

		cout << "your selected vehicle type is " << vehicle << endl;
		cout << "your ride's base fare is " << base_fare << endl;
		cout << "your distance charges is " << distance * per_km_ch << endl;
		if (wait_time > 3) {
			cout << "your penalty charge is  50 rs " << endl;
		}
		else { cout << "your penalty charge is nill " << endl; }
		cout << "your surchage is " << surcharge << endl;
		cout << "your total trip fare is " << tot_fare << endl;
		cout << "the share of driver is " << driver_share << endl;
		cout << "the share of company is " << company_share << endl;
		cout << "the tax to government is " << tax << endl;
	}
	else cout<< "invalid time " << endl;



	return 0;


}