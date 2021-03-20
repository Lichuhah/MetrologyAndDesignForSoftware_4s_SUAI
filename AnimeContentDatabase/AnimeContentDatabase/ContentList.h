#include "Title.h"
#include <vector>

class ContentList {
private:
	vector<Title> list;

	
public:
	ContentList();
	void addTitle();
	void sort();
	void deleteTitle(int id);
	void clearList();
	void editTitle(int id);
	void showList();
};