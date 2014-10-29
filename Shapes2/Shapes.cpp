// Shapes.cpp
// member definitions

#include "LibIncludes.h"
#include "Shapes.h"

Shapes::Shapes(){	// constructor to override the default invisible constructor
//	cout << "Parameter-less constructor called.\n";

	selection = '\0';
};

double Shapes::rArea = {};
double Shapes::tArea = {};
double Shapes::zArea = {};
double Shapes::cArea = {};

char Shapes::GetCurrentSelection(){
	return selection;
};

void Shapes::DisplayMenu() {

	cout << "Area Calculation Program\n"
		<< "------------------------\n\n"
		<< "\t<R>ectangle\n"
		<< "\t<T>riangle\n"
		<< "\tTrape<Z>oid\n"
		<< "\t<C>ircle\n\n"
		<< "\te<X>it program\n\n"
		<< "Selection : ";

};

//void Shapes::MenuSelection() {
char Shapes::MenuSelection() {
	Shapes::DisplayMenu();
	Shapes::GetSelection();

	if (selection != 'X')
		ImplementSelection();

	return selection;
};

void Shapes::GetSelection() {
	char c;

	while (true) {
		try {
			c = cin.get();
			c = toupper(c);

			if (!cin.good()) {
				throw c;
			}
			else {
				switch (c) {
				case 'R': case 'T': case 'Z': case 'C': case 'X':
					Shapes::selection = c;
				//	cout << "Selection is valid!\n\n";
					cin.ignore(10, '\n');
					break;
				default:
					throw c;
				}


				/* 'if' construct
				if ((c != 'R') && (c != 'T') && (c != 'Z')
					&& (c != 'C') && (c != 'X')) {
					cout << c << " is not valid. Try again!\n\n";
					cin.clear();
					cin.ignore(10, '\n');
					MenuSelection();
					continue;
				}
				else {
					selection = c;
					cout << "Selection is valid!\n\n";
					cin.clear();
					cin.ignore(10, '\n');
				}
				*/
			}
		}
		catch (char) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << c << " is not valid. Try again!\n\n"
				<< "Your selection: ";
			continue;
		}
		break;
	}
};


void Shapes::ImplementSelection() {
//	cout << "Inside ImplementSelection()!\n\n";

	switch (selection) {
	case 'R':
		Rectangle();
		break;
	case 'T':
		Triangle();
		break;
	case 'Z':
		Trapezoid();
		break;
	case 'C':
		Circle();
		break;
	default:
		cout << selection << " is not valid. Try again!\n\n";
		cin.ignore(10, '\n');
		MenuSelection();
		

	}

};

void Shapes::Rectangle() {
	cout << R"(
		^ --------------------
		| |                  |
		A |                  |
		| |                  |
		v --------------------
		  <---------B-------->)";

	cout << "\nSIDE A ... ";
	double a = Shapes::GetLength();
	cout << "\nSIDE B ... ";
	double b = Shapes::GetLength();

	rArea = a*b;

	cout << "\n\nThis Rectangle has an AREA of ... " << fixed << setprecision(2) 
		<< rArea << "\n\n";

};

void Shapes::Triangle() {
	cout << R"(
	^ |\
	| | \
	  |  \
	A |   \
	  |    \
	| |     \
	v |      \
	  --------
	  <---B--->)";

	cout << "\nSIDE A ... ";
	double a = Shapes::GetLength();
	cout << "\nSIDE B ... ";
	double b = Shapes::GetLength();

	tArea = 0.5*a*b;

	cout << "\n\nThis Triangle has an AREA of ... " << fixed << setprecision(2) 
		<< tArea << "\n\n";
};

void Shapes::Trapezoid() {
	cout << R"(
	    <- B1 ->
	    --------
	   /    ^   \
	  /     H    \
	 /      v     \
	 --------------
	 <---- B2 ---->)";

	cout << "\nSIDE B1 ... ";
	double b1= Shapes::GetLength();
	cout << "\nSIDE B2 ... ";
	double b2 = Shapes::GetLength();
	cout << "\nHEIGHT H ... ";
	double h = Shapes::GetLength();

	zArea = ((b1 + b2) / 2)* h;

	cout << "\n\nThis Trapezoid has an AREA of ... " << fixed << setprecision(2) 
		<< zArea << "\n\n";

};

void Shapes::Circle() {
	cout << R"(
	        **
	    *        *
	  *             *
	 *               *
	 *        ---R---*
	 *               *
	  *             *
	    *         *
	         **
)";

	cout << "\nRADIUS R ... ";
	double r = Shapes::GetLength();

	cArea = 3.14159*r*r;

	cout << "\n\nThis Circle has an AREA of ... " << fixed << setprecision(2) 
		<< cArea << "\n\n";

};

double Shapes::GetLength() {
	double l;

	do {
		try {
			cout << "Enter a length (0 < length < 50): ";
			cin >> l;

			if (!cin.good())
				throw 'c';
			else {
				if ((l > 0) && (l <= 50)) {
					cin.ignore(10, '\n');
					return l; 
				}
				else {
					throw l;
				}

			}
		}
		catch (double) {
			cout << "length " << l << " is out of legal range! Not set.\n\n";
			cin.ignore(10, '\n');
			continue;
		}
		catch (char) {
			cout << "\nIncorrect input!\n\n";
			cin.clear();
			cin.ignore(10, '\n');
			continue;
		}
	} while (true);
}

bool Shapes::CheckContinue() {
	char a;

	while (true) {
		try {
			cout << "Continue (Y/N) ?";
			a = cin.get();

			if (!cin.good()) {
				throw a;
			}
			else {
				a = toupper(a);
				if (a == 'Y') {
					cin.ignore(10, '\n');
					return true;
				}
				else if (a == 'N') {
					cin.ignore(10, '\n');
					return false;
				}
				else {
					cin.ignore(10, '\n');
					cout << "Try again!\n";
					continue;
				}
			}
		}
		catch (char) {
			cout << a << " is not valid. Try again!\n\n";
			cin.clear();
			cin.ignore(10, '\n');
			continue;

		}
	}
}
