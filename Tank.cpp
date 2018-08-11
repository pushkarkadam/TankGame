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
	int tankArmour;
	int tankShells;
	string tankName;
};

int main(){
	string playerName;
	cout<<"Enter player name: ";
	cin >> playerName;

	Tank tank1;
	tank1.setTank(4,4,playerName);
}

void Tank::setTank(int armour, int shells, string name){
	tankArmour = armour;
	tankShells = shells;
	tankName = name;
}