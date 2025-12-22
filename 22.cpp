#include <iostream>
using namespace std;

struct b {
  int id;
  int certificate;
};

struct a {
  int id;
  int certificate;
  struct b cat;
};

int main() {
  a dog;
  dog.cat.id = 12;
  cout << dog.cat.id << endl;

  b rat;
  rat.certificate = 1;
  cout << rat.certificate << endl;
  return 0;
}
