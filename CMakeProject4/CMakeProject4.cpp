// CMakeProject4.cpp: определяет точку входа для приложения.
//

#include "CMakeProject4.h"
#include<cpr/cpr.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "rus");
	string name, city, command;
	do {
		cout << "Введите команду( get, post, put, delete, patch), для выхода из программы введите exit\n";
		cin >> command;
		if (command == "get") {
			cout << "Введите ключ\n";
			cin >> name;
			cout << "Введите второй ключ\n";
			cin >> city;
			cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
			cpr::Payload({ {"name", name.c_str()}, { "city", city.c_str() } });
			cout << r.text;
		}
		else if (command == "put") {
			cout << "Введите ключ\n";
			cin >> name;
			cout << "Введите второй ключ\n";
			cin >> city;
			cpr::Response r = cpr::Put(cpr::Url("http://httpbin.org/put"));
			cpr::Payload({ {"name", name.c_str()}, { "city", city.c_str() } });
			cout << r.text;
		}
		else if (command == "patch") {
			cout << "Введите ключ\n";
			cin >> name;
			cout << "Введите второй ключ\n";
			cin >> city;
			cpr::Response r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
			cpr::Payload({ {"name", name.c_str()}, { "city", city.c_str() } });
			cout << r.text;
		}
		else if (command == "post") {
			cout << "Введите ключ\n";
			cin >> name;
			cout << "Введите второй ключ\n";
			cin >> city;
			cpr::Response r = cpr::Post(cpr::Url("http://httpbin.org/post"));
			cpr::Payload({ {"name", name.c_str()}, { "city", city.c_str() } });
			cout << r.text;
		}
		else if (command == "delete") {
			cout << "Введите ключ\n";
			cin >> name;
			cout << "Введите второй ключ\n";
			cin >> city;
			cpr::Response r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
			cpr::Payload({ {"name", name.c_str()}, { "city", city.c_str() } });
			cout << r.text;
		}
	} while (command != "exit");
	return 0;
}
