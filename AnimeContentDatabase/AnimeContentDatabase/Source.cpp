#include "FileEmployee.h"
#include "ContentList.h"
#include <iostream>


void menu() {
	setlocale(LC_ALL, "Russian");
	cout << " ____________________________________________________\n";
	cout << "|    База данных аниме-контента (одобрено РКН)       |\n";
	cout << " ____________________________________________________\n";
	cout << "| 1 - Просмотреть базу данных.                       |\n";
	cout << "| 2 - Добавить новый тайтл.                          |\n";
	cout << "| 3 - Удалить тайтл.                                 |\n";
	cout << "| 4 - Очистить базу данных.                          |\n";
	cout << "| 5 - Изменить тайтл.                                |\n";
	cout << "| 6 - Найти тайтл.                                   |\n";
	cout << "| 7 - Сортировать по названию                        |\n";
	cout << "| Ввод других значений приводит к снижению           |\n";
	cout << "| социального рейтинга! Будьте аккуратны.            |\n";
	cout << " ____________________________________________________\n";
	cout << "Ваш выбор:                                           \n";
}

void UI() {
	FileEmployee fileEmployee;
	ContentList contentList;
	while (true) {
		int info;
		cin >> info;
		switch (info) {
		case 1: contentList.showList(); break;
		case 2: contentList.addTitle(); break;
		case 3: contentList.deleteTitle(0); break;
		case 4: contentList.clearList(); break;
		case 5: contentList.editTitle(0); break;
		case 6: break;
		case 7: contentList.sort(); break;
		default: exit; break;
		}
	}
}


int main() {
	menu();
	UI();

	return 0;
}

