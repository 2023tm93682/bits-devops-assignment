#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, sum;
    
  cout << "Enter two integers to perform calculations: ";
  cin >> first_number >> second_number;

  // sum of two numbers is stored in variable sum
  sum = second_number + first_number;

  // prints sum
  cout << first_number << " + " <<  second_number << " = " << sum << endl;

  // conflict: reuse sum variable to store the product of two numbers
  sum = second_number * first_number;

  // prints product
  cout << first_number << " * " << second_number << " = " << sum << endl;

  return 0;
}
