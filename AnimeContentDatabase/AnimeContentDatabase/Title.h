#include "Enums.h"
#include <string>
using namespace std;
class Title {
private:
	string name;
	Type type;
	int episodes;
	int episodeDuration;
	Status status;
	Genre genreMain;
	Genre genreSub;
	Rating rating;
	double grade;
public:
	Title();
	string getName();
	void createTitle();
	void editTitle();
	bool operator<(const Title& other);

};