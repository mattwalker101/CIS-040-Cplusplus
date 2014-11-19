// Grades.h
// class declarations
// Author: Matthew Walker

#include <string>
#include <array>
using namespace std;

class Grades {
private:
	// int gradeCounter = {};
	// static int gradeCounter = {};
	static const int gradeCounter = { 5 };

	string fullClassName;
	int grades[gradeCounter];

	void GetGrades();
	void GetGrades(array<int, gradeCounter> &a);

	double GetAverage();
	int GetMaximum();
	int GetMinimum();
	void ShowLetterGrade(double);

public:
	static int GetGradeCounter();

	int classNumber;
	static char className;

	Grades();
	//static void DisplayClassName();
	static void DisplayClassName(Grades);
	static string InputClassName();

	void ProcessGrades();
};
