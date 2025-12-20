#include <iostream>
#include <string>

using namespace std;
struct Student {
  string name;
  int age;
  int score;
}

int main() {
  struct Student s1;
  struct Student s2 = {"1", 18, 91};
  s1.name = "张厅";
  s1.age = 78;
  s1.score = 91;
  cout << s1 << endl;
  return 0;
}