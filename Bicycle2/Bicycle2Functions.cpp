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
