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
	cout<<"Tank armour: " + to_string(tank1.getArmour());

	Tank tank2;
	tank2.setTank(4,4,"Computer 1");

	Tank tank3;
	tank3.setTank(4,4,"Computer 2");
}

void Tank::setTank(int armour, int shells, string name){
	tankArmour = armour;
	tankShells = shells;
	tankName = name;
}

int Tank::getArmour(){
	return tankArmour;
}