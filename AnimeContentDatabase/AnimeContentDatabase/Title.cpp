#include "Title.h"
#include <iostream>
using namespace std;

Title::Title() {
	createTitle();
}



string Title::getName() {
	return name;
}

bool Title::operator<(const Title& other) {
	return this->name[0] < other.name[0];
}

void Title::createTitle() {
	cout << "name";
	cin >> name;
}

void Title::editTitle() {
	int info;
	cout << "0 - net 1 - da other - otmena";
	cin >> info;
	if (info == 0) {

	}
	else if (info == 1) {
		string newName;
		cin >> newName;
		this->name = newName;
	}
	else {

	}
}