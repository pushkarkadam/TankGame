#include <iostream>
#include <string>
using namespace std;

struct Tank {
	static int armour;
	static int shells;
	string name;

};

void attack(Tank& tank);

int main(){
	
	// Create 3 tank objects
	Tank tank1;
	Tank tank2;
	Tank tank3;

	attack(tank1);
}

void attack(Tank& theTank){
	cout << "who to attack?\n> ";
	cin >> theTank.name;
}
