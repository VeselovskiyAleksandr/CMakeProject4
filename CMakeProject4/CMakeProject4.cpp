// CMakeProject4.cpp: определяет точку входа для приложения.
//

#include "CMakeProject4.h"
#include<cpr/cpr.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "rus");
	string  command;
	cpr::Response r;
	do {
		cout << "Введите команду( get, post, put, delete, patch), для выхода из программы введите exit\n";
		cin >> command;
		if (command == "get") {
			cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
			cout << r.text;
		}
		else if (command == "put") {
			cpr::Response r = cpr::Put(cpr::Url("http://httpbin.org/put"));
			cout << r.text;
		}
		else if (command == "patch") {
			cpr::Response r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
			cout << r.text;
		}
		else if (command == "post") {
			cpr::Response r = cpr::Post(cpr::Url("http://httpbin.org/post"));
			cout << r.text;
		}
		else if (command == "delete") {
			cpr::Response r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
			cout << r.text;
		}
	} while (command != "exit");
	return 0;
}
