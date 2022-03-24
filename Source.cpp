/* 
Jake Harrison
Race Time Calculator
3/23/22
COP2000
*/

#include <iostream>
using namespace std;

void welcome() {
	cout << "*****************************************************************" << endl << "Welcome to Race Results Program" << endl << "You Asked to Enter the Three Racer’s Names" << endl << "and Their Associated Race Time." << endl << "Please enter a real number for Race Time (the Race Time Must be > 0)." << endl << "Program Developed by: Jake Harrison" << endl << "*****************************************************************";
}

void getRaceTimes(string& raceName, double& raceTime) {
	cout << endl << "Please enter the racer's first name > ";
	cin >> raceName;
	do {
		cout << endl << "Please enter the racer's time > ";
		cin >> raceTime;
		if (raceTime < 0) {
			cout << "No violations of time and space allowed. Please enter a positive time." << endl;
		}
	} while (raceTime < 0);
}

void findWinner(string rn1, string rn2, string rn3, double rt1, double rt2, double rt3) {
	cout << endl;
	if (rt1 < rt2 && rt1 < rt3) {
		cout << "Congratulations " << rn1 << "! You are a winner!";
		cout << endl << "***** Your winning time was: " << rt1 << " *****";
	}
	else if (rt2 < rt1 && rt2 < rt3) {
		cout << "Congratulations " << rn2 << "! You are a winner!";
		cout << endl << "***** Your winning time was: " << rt2 << " *****";
	}
	else if (rt3 < rt1 && rt3 < rt2) {
		cout << "Congratulations " << rn3 << "! You are a winner!";
		cout << endl << "***** Your winning time was: " << rt3 << " *****";
	}
	else if (rt1 == rt2 && rt2 == rt3 && rt3 == rt1) {
		cout << "We have a 3 WAY TIE!! No winners here! :(";
	}
	else if (rt1 == rt2) {
		cout << "We have a tie! " << rn1 << " and " << rn2 << " win!";
		cout << endl << "***** Your winning time was: " << rt1 << " *****";
	}
	else if (rt2 == rt3) {
		cout << "We have a tie! " << rn2 << " and " << rn3 << " win!";
		cout << endl << "***** Your winning time was: " << rt2 << " *****";
	}
	else if (rt3 == rt1) {
		cout << "We have a tie! " << rn3 << " and " << rn1 << " win!";
		cout << endl << "***** Your winning time was: " << rt1 << " *****";
	}
}

double raceAverage(double rt1, double rt2, double rt3) {
	return (rt1 + rt2 + rt3) / 3;
}

int main() {
	welcome();
	string raceName1;
	string raceName2;
	string raceName3;
	double raceTime1;
	double raceTime2;
	double raceTime3;
	getRaceTimes(raceName1, raceTime1);
	getRaceTimes(raceName2, raceTime2);
	getRaceTimes(raceName3, raceTime3);
	findWinner(raceName1, raceName2, raceName3, raceTime1, raceTime2, raceTime3);
	cout << endl << endl << "Overall race time average: " << raceAverage(raceTime1, raceTime2, raceTime3);
}