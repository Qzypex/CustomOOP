#include <iostream>

using namespace std;

class task1 {
public:
  string task1;
  string desctask1;
  void add_task1() {
    cout << "Dodanie nowego zadania" << endl;
    cout << "Podaj nazwe nowego zadania: ";
    cin >> task1;
    cout << "Opisz to zadanie (spacje zastąp _): ";
    cin >> desctask1;
  }

  void show_task1() {
    cout << endl << "Twoje zadania to: " << endl << endl;
    cout << "Zadanie 1: " << task1 << endl;
    cout << "Opis zadania 1: " << desctask1 << endl << endl;
  }
};

class task2 {
public:
  string task2;
  string desctask2;
  void add_task2() {
    cout << "Dodanie nowego zadania" << endl;
    cout << "Podaj nazwe nowego zadania: ";
    cin >> task2;
    cout << "Opisz to zadanie (spacje zastąp _): ";
    cin >> desctask2;
  }

  void show_task2() {
    cout << endl << "Twoje zadania to: " << endl << endl;
    cout << "Zadanie 2: " << task2 << endl;
    cout << "Opis zadania 2: " << desctask2 << endl << endl;
  }
};

class task3 {
public:
  string task3;
  string desctask3;
  void add_task3() {
    cout << "Dodanie nowego zadania" << endl;
    cout << "Podaj nazwe kolejnego zadania: ";
    cin >> task3;
    cout << "Opisz to zadanie (spacje zastąp _): ";
    cin >> desctask3;
  }

  void show_task3() {
    cout << endl << "Twoje zadania to: " << endl << endl;
    cout << "Zadanie 3: " << task3 << endl;
    cout << "Opis zadania 3: " << desctask3 << endl << endl;
    cout << "To już wszystkie twoje zadania na dzisiaj";
  }
};

int main() {
  task1 t1;

  t1.add_task1();
  t1.show_task1();

  task2 t2;

  t2.add_task2();
  t2.show_task2();

  task3 t3;

  t3.add_task3();
  t3.show_task3();

  return 0;
}