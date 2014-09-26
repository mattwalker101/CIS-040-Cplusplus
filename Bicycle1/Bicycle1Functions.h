// Bicycle1Functions.h

int GetSpeed() {
	return speed;
}

int GetMinSpeed() {
	return MINspeed;
}

int GetMaxSpeed() {
	return MAXspeed;
}

/*
void SetSpeed() {
	int input;

	cout << "What is the new speed? ";
	cin >> input;

	if (input >= MINspeed && input <= MAXspeed) {
		speed = input;
		cout << "Legal speed " << speed << " set.\n";
	}
	else {
		cout << "Speed out of legal range! Not set.\n";
	}
}
*/

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
void SetSpeed(int s) {
	speed = s;
}
