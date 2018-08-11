#include <iostream>
#include <string>
using namespace std;

class Tank{
public:
	void setTank(int armour, int shells, string name);

	int getArmour();
	// Returns the armour of the tank

	int getShells();
	// Returns the shell of the tank
	int getName();
	// Returns the name of the tank
	void setArmout(int armour);

	void setShells(int shells);



private:
	int armour;
	int shells;
	string name;
};

int main(){
	//cout << "This is working!";
}