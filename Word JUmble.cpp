// Word JUmble.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<string>
#include<vector>

int main()
{
	vector<int>  rollnumber(10,0);
	vector<string>  inventory;
	inventory.push_back("Sword");
	inventory.push_back("armor");
	inventory.push_back("Shield");

	cout << "you have 3 items \n";
	
	cout << "your items : \n";
	for (int i = 0; i < size(inventory); i++) {
		cout << inventory[i] << " \n";
	}

	cout << " \nyou trade your sword for battle exe..\n";
	inventory[0] = "battle exe";
	cout << "your items : \n";
	for (int i = 0; i < inventory.size(); i++) {
		cout << inventory[i] << " \n";
	}

	cout << "\nyour shield is destroyed in battle \n";
	
	inventory.pop_back();

	cout << "your items : \n";
	for (int i = 0; i < inventory.size(); i++) {
		cout << inventory[i] << " \n";
	}
	cout << "you were robbed ";
	inventory.pop_back();
	inventory.pop_back();


	cout << "your items : \n";
	for (int i = 0; i < inventory.size(); i++) {
		cout << inventory[i] << " \n";
	}

	inventory.clear();

	inventory.empty();
	return 0;
}

