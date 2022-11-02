// eProject4.cpp: определяет точку входа для приложения.
//

#include "CMakeProject4.h"
#include<cpr/cpr.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale (LC_ALL, "rus");
	//int testNumber = 0;
	//cout << "Введите номер задания\n";
	//cin >> testNumber;
	//switch (testNumber) {
	//case 1:

		string  command;
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
	//case 2:
		cpr::Response response = cpr::Get(cpr::Url("http://httpbin.org/html"));// -accept: text / html"));
		cpr::Header({ {"Accept",  "application / xhtml + xml, application / xml; q = 0.9, image / avif, image / webp, image / apng, */*;q=0.8,application/signed-exchange;v=b3;q=0.9"} });
		cout << response.text;
	//}
	return 0;
}
