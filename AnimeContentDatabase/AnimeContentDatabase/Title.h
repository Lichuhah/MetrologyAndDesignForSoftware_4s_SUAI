#ifndef TITLE_HEADER
#define TITLE_HEADER
#include "Enums.h"
#include <string>
#include <vector>
using namespace std;
class Title {
private:
	string name;
	string type;
	string status;
	string genreMain;
	string genreSub;
	string rating;
	double grade;

	bool isEditableField(string field);

public:
	Title();
	Title(string name);
	Title(vector<string> tokens);

	string getName();
	void setName();

	string getType();
	void setType();

	string getStatus();
	void setStatus();

	string getGenreMain();
	void setGenreMain();

	string getGenreSub();
	void setGenreSub();

	string getRating();
	void setRating();

	double getGrade();
	void setGrade();

	void createTitle();
	void editTitle();
	void showTitle();
	
	bool operator<(const Title& other);
	bool operator==(const Title& other);
};
#endif