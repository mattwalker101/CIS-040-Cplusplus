// Grades2.h
// class declarations
// Author: Matthew Walker


#include <string>

using namespace std;

struct Textbook {
	string title;
	string author;
	int year;
};

struct College {
	string name;
	string city;
};

struct Course {
	string semester;
	string time;
	Textbook textbook;
	College college;
};

class Grades {
public:
	void SelectClass();
	// Grades();	// constructor
	void DisplayClassInfo();
	bool CheckContinue();

private:
	void InputClassName();
	void GetClassInfo();
	string courseName;
	bool CheckIfLegalName(string);
	Course program;
	Textbook textbook;
	College college;

};
