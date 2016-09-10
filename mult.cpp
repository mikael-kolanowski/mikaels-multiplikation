// Mikaels multiplikation

#include <iostream>
#include <string>

using namespace std;

void multiplication(int rows, int cols) {;
  for(int i=1; i <= rows; i++) {
    for(int j=1; j <= rows; j++) {
      cout << i*j << "\t";
    }

    cout << endl;

  }
}

int main() {
  int rows, cols;
  //int cols;

  cout << "How many rows? ";
  cin >> rows;

  cout << "How many columns? ";
  cin >> cols;

  multiplication(rows, cols);

  return 0;
}
