#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

double log2(double x) {
  if (x <= 0.0) {
    cout << "Positive numbers only." << endl;
    return 0;
  }
  double result = log(x);
  return result;
}

void print_twice(char arg) { cout << arg << endl << arg << endl; }

void print_time(int hour, int minute) {
  cout << hour;
  cout << ":";
  cout << minute;
}

bool gt_zero(int n) { return n > 0; }
string return_str() { return ("asdf"); }

int non_zero(int n) {
  if (n != 0) {
    if (n > 0) {
      return 1;
    }
    if (n < 0) {
      return -1;
    }
  }
  return 0;
}

int main() {
  print_twice('a');
  cout << gt_zero(1) << endl;
  cout << return_str() << endl;
  cout << non_zero(3) << endl;
  cout << non_zero(-3) << endl;
  cout << non_zero(0) << endl;
  return 0;
}
