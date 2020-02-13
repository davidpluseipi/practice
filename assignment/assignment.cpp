// Assignment Statements
// You can combine arithmetic operators and the assignment operator as a shorthand

#include <iostream>
using namespace std;

int main() {
  int c = 0; // declare and initialize
  double total, discount = 0.0;
  double bonus = 10;
  double time, rushFactor = 0.0;
  int change = 302;
  double amount = 20.0;
  double cnt1(0.5), cnt2(0.4);
  int a, b, d, e, f;

  // +=
  cout << "+= operator" << endl;
  cout << "Count: " << c << endl;
  cout << "...adding 2" << endl;
  c += 2; // same as count = count + 2;
  cout << "Count: " << c << endl;

  // -=
  cout << endl << "-= operator" << endl;
  total = 100;
  cout << "total: " << total << endl;
  discount = total*0.2;
  cout << "discount: " << discount << endl;
  cout << "...subtracting discount" << endl;
  total -= discount; // same as total = total - discount
  cout << "total: " << total << endl;

  // *=
  cout << endl << "*= operator" << endl;
  cout << "bonus: " << bonus << endl;
  cout << "... multiplying bonus" << endl;
  bonus *= 2; // same as bonus = bonus * 2
  cout << "bonus: " << bonus << endl;

  // /=
  cout << endl << "/= operator" << endl;
  time = 60; // minutes
  cout << "delivery time (min): " << time << endl;
  rushFactor = 2;
  cout << "rush factor: " << rushFactor << endl;
  cout << "... calculating new delivery time (min)" << endl;
  time /= rushFactor; // same as time = time / rushFactor
  cout << "delivery time (min): " << time << endl;

  // %=
  cout << endl << "change: " << change << endl;
  change = change % 100; // modulo operator gives the remainder after division
  cout << "change: " << change << endl;
  change = 302;
  cout << "change: " << change << endl;
  change %= 100;
  cout << "change: " << change << endl;

  // *= with a sum
  cout << endl << "amount: " << amount << endl;
  cout << "cnt1: " << cnt1 << endl;
  cout << "cnt2: " << cnt2 << endl;
  cout << "... calculating, amount *= cnt1 + cnt2" << endl;
  amount *= cnt1 + cnt2;
  cout << "amount: " << amount << endl;

  // defined variables, that have not been initialized
  cout << endl << "Defined variables, that have not been initialized are automatically initialized to the last value that was in memory at that location" << endl;
  cout << a << endl;
  cout << b << endl;
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;

  return 0;
}
