#ifndef FILEEMPLOYEE_HEADER
#define FILEEMPLOYEE_HEADER
#define filetimepath "time.txt"
#define filedatapath "data.txt"
#define fileenumspath "enums.txt"
#include <time.h>
#include "ContentList.h"
#include <fstream>

using namespace std;

extern std::vector<std::string>* Type;
extern std::vector<std::string>* Status;
extern std::vector<std::string>* Genre;
extern std::vector<std::string>* Rating;

class FileEmployee{
private:
	ifstream fileToRead;
	ofstream fileToWrite;
	tm* dateTime;

	void saveDateTime();
	Title fromStrToTitle(const string& s);
public:
	FileEmployee();
	void fileOpen();
	void saveData(ContentList* list);
	void readData(ContentList* list);
	void loadEnums();

};
#endif