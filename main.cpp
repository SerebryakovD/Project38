#include<iostream>
#include<vector>

using namespace std;

struct Person {
	string name;
	int age;
};

int main() {
	Person frank = { "Frank", 45 };
	Person ann = { "Ann", 37 };
	Person vasya = { "Vasya", 25 };

	vector<Person> peoples = { frank , vasya , ann };

	for (Person man : peoples) {
		cout << "name: " << man.name << endl;
		cout << "age: " << man.age << endl;
		cout << endl;
	}

	for (int i = 0; i < peoples.size(); i++) {
		for (int j = 0; j < peoples.size() - 1; j++) {
			if (peoples[j].age > peoples[j + 1].age) {
				swap(peoples[j], peoples[j + 1]);
			}
		}
	}

	for (Person man : peoples) {
		cout << "name: " << man.name << endl;
		cout << "age: " << man.age << endl;
		cout << endl;
	}

	return 0;
}