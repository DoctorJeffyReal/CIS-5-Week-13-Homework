#include <iostream>
#include <string>

// Practice 13 · Part 2 — Jesus
// CIS 5 Week 13 · The struct your final needs

struct Account {
  std::string name;
  double balance;
};

void printAccount(const Account& a) {
  std::cout << a.name << " " << a.balance << "\n";
}

int main() {
  Account ada{"Ada", 50.25};
  Account ben{"Ben", 120.5};

  printAccount(ada);
  printAccount(ben);
  return 0;
}
