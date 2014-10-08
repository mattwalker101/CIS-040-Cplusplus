// Bicycle2Functions.cpp

#include "Bicycle2LibIncludes.h"
#include "Bicycle2Declarations.h"

int GetSpeed() {
	return speed;
}

int GetMinSpeed() {
	return MINspeed;
}

int GetMaxSpeed() {
	return MAXspeed;
}

void GetSelectedSpeed() {
	char choice = ' ';
	
	speed = 33;		// default used for testing
	
	double toKmPerHour = 1.61;
	double speedInKmPerHour = speed * toKmPerHour;

	while (true) {
		try {
			cout << "\nDisplay current speed as\n(M) MPH\n(K) convert to KPH\n";
			cout << "Choose (M) or (K), or (X) to exit:  ";
			choice = cin.get();

			if (!cin.good()) {
				throw choice;
			}
			else {

				switch (toupper(choice)) {
				case 'M':
					cout << "\nCurrent speed is " << speed << " MPH.\n";
					cin.clear();
					cin.ignore(10, '\n');
					break;
				case 'K':
					cout << "\nCurrent speed is " << speedInKmPerHour << " KPH\n";
					cout << "With 3 digits precision = " << fixed << showpoint << setprecision(3) << speedInKmPerHour << endl;
					cout << "With 'int' casting = " << (int)(speedInKmPerHour) << endl;
					cout << "Adding .5 and casting = " << (int)(speedInKmPerHour+0.5) << endl;
					cout << "Using ceil() = " << noshowpoint << int(ceil(speedInKmPerHour)) << endl;
					cout << "Using floor() = " << int(floor(speedInKmPerHour)) << endl;
					cin.clear();
					cin.ignore(10, '\n');
					break;
				case 'X':
					cout << "Have a nice day!\n";
					return;
				default:
					throw choice;
				}
			}
		}
		catch (char) {
			cout << choice << " is not valid. Try again!\n\n";
			cin.clear();
			cin.ignore(10, '\n');
			continue;
		}
	}
}

void SetSpeed() {	// This version uses 'try'/'catch' for error handling
	int input;

	while (true) {
		try {
			cout << "Enter a new current speed: ";
			cin >> input;

			if (!cin.good()) {		// if not an int
				throw input;
			}
			else {
				if (input >= MINspeed && input <= MAXspeed) {
					speed = input;
					cout << "Legal speed " << speed << " set.\n\n";
					cin.clear();
					cin.ignore(10, '\n');
					break;
				}
				else {
					throw input;
				}
			}
			break;
		}
		catch (int) {
			cout << "Speed " << input << " is out of legal range! Not set.\n\n";
			cin.clear();
			cin.ignore(10, '\n');
			continue;
		}
	}
}

void DisplayMenu() {
	cout << "\nSelection Menu\n-------------\n\n";
	cout << "1. Set Speed\n";
	cout << "2. Get Speed\n";
	cout << "3. Get MAX Speed\n";
	cout << "4. Get MIN Speed\n";
	cout << "5. Exit\n\n";
	cout << "Your selection: ";

}

void GetSelection() {
	int s;

	while (true) {
		try {
			cin >> s;

			if (!cin.good()) {
				throw 'c';
			}
			else {
				if (s >= 1 && s <= 5) {
					selection = s;
					cout << "Legal selection = " << selection << endl;
					cin.clear();
					cin.ignore(10, '\n');
					break;
				}
				else {
					throw s;
				}
			}
		}
		catch (char) {
			cout << "\nIncorrect input. Try again!\n\n";
			cin.clear();
			cin.ignore(10, '\n');
			DisplayMenu();
			continue;
		}
		catch (int) {
			cout << "\nNot a valid choice. Just use 1-5!\n\n";
			cin.clear();
			cin.ignore(10, '\n');
			DisplayMenu();
			continue;
		}
	}
}


void MenuSelection() {
	DisplayMenu();

	GetSelection();
}


/* This is the original version from Lab4
void SetSpeed() {
	int input;

	while (true) {
		cout << "Enter a new current speed: ";
		cin >> input;

		if (!cin.good()) {		// if not an int
			cin.clear();
			cin.ignore(10, '\n');
			cout << "\nInvalid Input. Try Again.\n\n";
			continue;
		}
		else {
			if (input >= MINspeed && input <= MAXspeed) {
				speed = input;
				cout << "Legal speed " << speed << " set.\n\n";
				cin.ignore(10, '\n');
				break;
			}
			else {
				cout << "Speed " << input << " is out of legal range! Not set.\n\n";
				cin.ignore(10, '\n');
				continue;
			}
		}
		break;
	}
}
*/

// overloaded function
//void SetSpeed(unsigned int s)
void SetSpeed(int s = 20) {

	if (s >= MINspeed && s <= MAXspeed) {
		speed = s;
		cout << "Legal speed " << speed << " set.\n" << endl;
		return;
	} else {
		cout << "Speed " << s << " is out of legal range! Not set.\n\n";
		return;
	}
}

void DefaultSetSpeed(int s) {

	speed = s;
}

void Swap(int & a, int & b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void DistanceTravelled(int x) {
	static int s;
	cout << "Initial s = " << s << "\n";

	s += x;
	cout << "Final s = " << s << "\n\n";
}
