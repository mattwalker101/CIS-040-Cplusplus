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
	
// 	speed = 33;		// default used for testing
	
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
					/*
					cout << "With 3 digits precision = " << fixed << showpoint << setprecision(3) << speedInKmPerHour << endl;
					cout << "With 'int' casting = " << (int)(speedInKmPerHour) << endl;
					cout << "Adding .5 and casting = " << (int)(speedInKmPerHour+0.5) << endl;
					cout << "Using ceil() = " << noshowpoint << int(ceil(speedInKmPerHour)) << endl;
					cout << "Using floor() = " << int(floor(speedInKmPerHour)) << endl;
					*/
					cin.clear();
					cin.ignore(10, '\n');
					break;
				case 'X':
					cout << "OK! Let's continue!\n";
					cin.clear();
					cin.ignore(10, '\n');
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
					cout << "Legal speed " << speed << " set!\n\n";
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
				//	cout << "Legal selection = " << selection << endl;
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

void ImplementSelection() {
	switch (selection) {
	case 1:
		SetSpeed();
		cout << "\nSpeed in MPH = " << speed << endl;
		break;
	case 2:
		GetSelectedSpeed();
		break;
	case 3:
		cout << "\nMAX Speed = " << GetMaxSpeed() << endl;
		break;
	case 4:
		cout << "\nMIN Speed = " << GetMinSpeed() << endl;
		break;
	}
}

int MenuSelection() {
	DisplayMenu();

	GetSelection();

	if (selection != 5)
		ImplementSelection();

	return selection;
}

bool CheckContinue() {
	char c;
	char sel;

	while (true) {
		cout << "\nAnother selection (Y or N): ";
		c = cin.get();
		c = toupper(c);

		if (c == 'Y' || c == 'N') {
			sel = c;
			cin.ignore(10, '\n');
			break;
		}
		else {	// invalid input
			cout << "Invalid input - Try again!\n";
			cin.ignore(10, '\n');
			continue;
		}

	}

	if (sel == 'Y')
		return true;
	else
		return false;
}

void SelectModel() {
	cout << "\nBicycle Type Select-o-Matic!\n"
		<< "-----------------\n"
		<< "1. Road\n"
		<< "2. Mountain\n"
		<< "3. Racing\n"
		<< "4. Folding\n"
		<< "5. Electric\n";

	int t;
	int type;

	while (true) {
		try {
			cout << "\nSelect a type of bike: ";
			cin >> t;

			if (!cin.good())
				throw 'c';		// if not an int, throw a char exception
			else {
				if (( t >= 1 ) && ( t <= 5 )) { // legal input
					type = t;
					// cout << "legal type  " << type;
					cin.ignore(10, '\n');
					break;
				} else
					throw t; // if not 1-5, throw an int exception
			}
		}
		catch (int) {
			cout << "Type " << t << "is not within the legal range!\n";
			cin.ignore(10, '\n');
			continue;
		}
		catch (char) {
			cout << "\nIncorrect input. Retry.\n\n";
			cin.clear();
			cin.ignore(10, '\n');
		}
	}	// end while

	BicycleModels bm = BicycleModels(type);

	switch (bm) {
		case Road:
			cout << "\nYou selected type - " << "Road" << endl;
			break;
		case Mountain:
			cout << "\nYou selected type - " << "Mountain" << endl;
			break;
		case Racing:
			cout << "\nYou selected type - " << "Racing" << endl;
			break;
		case Folding:
			cout << "\nYou selected type - " << "Folding" << endl;
			break;
		case Electric:
			cout << "\nYou selected type - " << "Electric" << endl;
			break;
	}
}

#if B
void MenuSelection() {
	DisplayMenu();

	GetSelection();

	if (selection != 5)
		ImplementSelection();

}
#endif

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
*/

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
