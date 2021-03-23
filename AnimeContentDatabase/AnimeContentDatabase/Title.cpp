#include "Title.h"
#include "Enums.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Title::Title() {
	createTitle();
}

Title::Title(string name) {
	this->name = name;
}

Title::Title(vector<string> tokens) {
	name = tokens[0];
	type = tokens[1];
	status = tokens[2];
	genreMain = tokens[3];
	genreSub = tokens[4];
	rating = tokens[5];
	grade = stod(tokens[6]);
}

string Title::getName() {
	return name;
}

void Title::setName() {

	cout << "\nВведите название: ";
	cin >> name;
	this->name = name;
}

string Title::getType() {

	return type;
}

void Title::setType() {
	extern vector<string>* Type;
	cout << "\nВыберите тип(";
	for (int i = 0; i < Type->size(); i++) {
		cout << i << " - " << Type->at(i) <<" ";
	}
	cout << ") ";
	int a;
	cin >> a;
	this->type = Type->at(a);
}

string Title::getStatus() {
	return status;
}

void Title::setStatus() {
	extern vector<string>* Status;
	cout << "\nВыберите статус( ";
	for (int i = 0; i < Status->size(); i++) {
		cout << i << " - " << Status->at(i) << " ";
	}
	cout << ")";
	int a;
	cin >> a;
	this->status = Status->at(a);
}


string Title::getGenreMain() {
	return genreMain;
}

void Title::setGenreMain() {
	extern vector<string>* Genre;
	cout << "\nВыберите жанр( ";
	for (int i = 0; i < Genre->size(); i++) {
		cout << i << " - " << Genre->at(i) << " ";
	}
	cout << ")";
	int a;
	cin >> a;
	this->genreMain = Genre->at(a);
}

string Title::getGenreSub() {
	return genreSub;
}

void Title::setGenreSub() {
	extern vector<string>* Genre;
	cout << "\nВыберите поджанр(";
	for (int i = 0; i < Genre->size(); i++) {
		cout << i << " - " << Genre->at(i) << " ";
	}
	cout << ")";
	int a;
	cin >> a;
	this->genreSub = Genre->at(a);
}

string Title::getRating() {
	return rating;
	
}

void Title::setRating() {
	extern vector<string>* Rating;
	cout << "\nВыберите возрастной рейтинг( ";
	for (int i = 0; i < Rating->size(); i++) {
		cout << i << " - " << Rating->at(i) << " ";
	}
	cout << ")";
	int a;
	cin >> a;
	this->rating = Rating->at(a);
}

double Title::getGrade() {
	return grade;
}

void Title::setGrade() {
	cout << "\nВведите оценку: ";
	double grade;
	cin >> grade;
	this->grade = grade;
}

bool Title::operator<(const Title& other) {
	return this->name[0] < other.name[0];
}

bool Title::operator==(const Title& other) {
	return this->name == other.name;
}

void Title::createTitle() {
	setName();
	setType();
	setStatus();
	setGenreMain();
	setGenreSub();
	setRating();
	setGrade();
}

bool Title::isEditableField(string field) {
	bool info;
	cout << "Редактировать поле "+field+"? (0 - Нет, 1 - Да)";
	cin >> info;
	return info;
}

void Title::editTitle() {
	if (isEditableField("название")) {
		setName();
	}
	if (isEditableField("тип")) {
		setType();
	}
	if (isEditableField("статус")) {
		setStatus();
	}
	if (isEditableField("жанр")) {
		setGenreMain();
	}
	if (isEditableField("поджанр")) {
		setGenreSub();
	}
	if (isEditableField("рейтинг")) {
		setRating();
	}
	if (isEditableField("оценка")) {
		setGrade();
	}
}

void Title::showTitle() {
	cout << "Название: " << getName() << "\n";
	cout << "Тип: " << getType() << "\n";
	cout << "Статус: " << getStatus() << "\n";
	cout << "Жанр: " << getGenreMain() << "\n";
	cout << "Поджанр: " << getGenreSub() << "\n";
	cout << "Возрастой рейтинг: " << getRating() << "\n";
	cout << "Оценка: " << getGrade() << "\n";
	cout << "\n";
}