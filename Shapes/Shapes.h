// Shapes.h
// class declarations

class Shapes {
private:
	char selection;

	void DisplayMenu();
	void GetSelection();
	void ImplementSelection();
	void Rectangle();
	void Triangle();
	void Trapezoid();
	void Circle();
	double GetLength();

public:
	Shapes(); 

	char GetCurrentSelection();
	//void MenuSelection();
	//void DisplayMenu();
	//void GetSelection();
	//void ImplementSelection();
	char MenuSelection();
	bool CheckContinue();
	
};

