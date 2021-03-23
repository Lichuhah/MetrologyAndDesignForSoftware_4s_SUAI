#include "FileEmployee.h"
#include "ContentList.h"
#include "Check.h"

void menu() {
	system("cls");
	cout << " ____________________________________________________\n";
	cout << "|    База данных аниме-контента (одобрено РКН)       |\n";
	cout << " ____________________________________________________\n";
	cout << "| 1 - Просмотреть базу данных.                       |\n";
	cout << "| 2 - Добавить новый тайтл.                          |\n";
	cout << "| 3 - Удалить тайтл.                                 |\n";
	cout << "| 4 - Очистить базу данных.                          |\n";
	cout << "| 5 - Изменить тайтл.                                |\n";
	cout << "| 6 - Найти тайтл по названию.                       |\n";
	cout << "| 7 - Сортировать по названию.                       |\n";
	cout << "| 8 - Запись в файл.                                 |\n";
	cout << "| 9 - Считать данные с файла.                        |\n";
	cout << "| Ввод других значений приводит к снижению           |\n";
	cout << "| социального рейтинга! Будьте аккуратны.            |\n";
	cout << " ____________________________________________________\n";
}

void UI() {
	ContentList contentList;
	FileEmployee fileEmployee;
	fileEmployee.loadEnums();
	fileEmployee.readData(&contentList);
	Check check;

	menu();
	cout << "Ваш выбор: ";
	int info = check.inputOnlyNumber();
	while (true) {
		switch (info) {
		case 1: contentList.showList(); break;
		case 2: contentList.addTitle(); fileEmployee.saveData(&contentList); break;
		case 3: contentList.deleteTitle(); fileEmployee.saveData(&contentList); break;
		case 4: contentList.clearList(); fileEmployee.saveData(&contentList); break;
		case 5: contentList.editTitle(); fileEmployee.saveData(&contentList); break;
		case 6: contentList.findTitle(); break;
		case 7: contentList.sort(); fileEmployee.saveData(&contentList); break;
		case 8: fileEmployee.saveData(&contentList); break;
		case 9: fileEmployee.readData(&contentList); break;
		default: break; break;
		}
		cout << "Ваш выбор: ";
		info = check.inputOnlyNumber();
		system("cls");
		menu();
		
	}
}

int main() {
	system("chcp 1251");
	UI();

	return 0;
}

