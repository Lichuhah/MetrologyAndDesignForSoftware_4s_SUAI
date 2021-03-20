#include "ContentList.h"
#include <iostream>
#include <algorithm>

using namespace std;

ContentList::ContentList() {

}

void ContentList::addTitle() {
	Title title;
	list.push_back(title);
}

void ContentList::showList() {
	for (int i = 0; i < list.size(); i++) {
		cout << list[i].getName() <<"\n";
	}
}

void ContentList::deleteTitle(int id) {
	list.erase(list.begin()+id);
}

void ContentList::clearList() {
	list.clear();
}

void ContentList::editTitle(int id) {
	list[id].editTitle();
}

void ContentList::sort() {
	std::sort(list.begin(), list.end());
}

