// Grades.h
// class declarations
// Author: Matthew Walker

#include <string>
using namespace std;

class Grades {
public:
	Grades();
	static int GetGradeCounter();
	int classNumber;
	static char className;
//	static void DisplayClassName();
	static void DisplayClassName(Grades);
	static string InputClassName();

private:
	// const static int gradeCounter{ 0 };
	static int gradeCounter;
	string fullClassName;
};
