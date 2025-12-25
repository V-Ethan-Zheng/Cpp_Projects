#include <iostream>
#include <string>

using namespace std;

struct Student {
  string name;
  int age;
  int score;
};

void printStudent1(struct Student s) {
  cout << s.name << s.age << s.score << endl;
}

void printStudent2(struct Student *p) {
  cout << p->name << p->age << p->score << endl;
}
    
int main() {
  struct Student s1;
  s1.name = "张厅";
  s1.age = 78;
  s1.score = 91;
  struct Student s2 = {"1", 18, 91};
  cout << s1.age << endl;
  printStudent1(s1);
  printStudent2(&s2);
  return 0;
}