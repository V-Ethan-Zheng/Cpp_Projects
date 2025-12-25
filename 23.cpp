#include <iostream>
#include <string>

struct student {
  std::string name;
  int score;
};

struct teacher {
  std::string name;
  struct student sArray[5];
};

void input(struct teacher tArray[], struct student sArray[]) {
  for (int i = 0; i < 3; i++) {
    std::cin >> tArray[i].name;
    for (int j = 0; j < 5; j++) {
      std::cin >> tArray[i].sArray[j].name;
      std::cin >> tArray[i].sArray[j].score;
    }
    std::cout << "以上是" << tArray[i].name << "老师带的学生" << '\\n';
  }
}

void printout(struct teacher tArray[]) {
  for (int i = 0; i < 3; i++) {
    std::cout << tArray[i].name << std::endl;
    for (int j = 0; j < 5; j++) {
      std::cout << tArray[i].sArray[j].name;
      std::cout << tArray[i].sArray[j].score << "\\n";
    }
    std::cout << "以上是" << tArray[i].name << "老师带的学生" << "\\n";
  }
}

int main() {
  struct teacher tArray[3];
  struct student sArray[5];
  input(tArray, sArray);
  printout(tArray);
  return 0;
}