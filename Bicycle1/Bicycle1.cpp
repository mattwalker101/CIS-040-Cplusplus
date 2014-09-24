

/********************************************************************************
*
*      Mission College C++ Class
*
********************************************************************************
*
*      Author: Matthew Walker

*      Program Name:
*
*      Date:
*
*      Purpose:
*
*
*
*********************************************************************************/


#include "Bicycle1Headers.h"

#if A
int GetSpeed() {
	return speed;
}

int GetMinSpeed() {
	return MINspeed;
}

int GetMaxSpeed() {
	return MAXspeed;
}
#endif

/*
int GetSpeed();
int GetMinSpeed();
int GetMaxSpeed();
void SetSpeed();
void SetSpeed(int);
*/

int main() {
	// display initial values for variables
	cout << "My Super Bicycle Program\n" << "Initial values follow...\n"
		<< "Speed: " << speed << "\tMINspeed: " << MINspeed
		 << "\tMAXspeed: " << MAXspeed << endl;

	// int x;
	// cout << "x = " << x << endl;

	// MINspeed = 15;

	SetSpeed();

	cout << "Current speed = " << GetSpeed() << "\tMAXspeed = "
		<< GetMaxSpeed() << "\tMINspeed = " << GetMinSpeed() << endl;

	// use overloaded function
	int sp = { 33 };
	SetSpeed(sp);
	cout << "Updated current speed is " << GetSpeed() << "\n\n";

}

#if A
int GetSpeed() {
	return speed;
}

int GetMinSpeed() {
	return MINspeed;
}

int GetMaxSpeed() {
	return MAXspeed;
}
#endif
