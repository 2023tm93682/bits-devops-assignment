#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, sum;
    
  cout << "Enter two integers to perform calculations: ";
  cin >> first_number >> second_number;

  // Step 1: Use sum for the addition
  sum = first_number + second_number ;

  // prints sum
  cout << first_number << " + " <<  second_number << " = " << sum << endl;


  // Branch 3: Add multiplication functionality
  sum = second_number * first_number;

  // prints product
  cout << second_number << " * " << first_number << " = " << sum << endl;

  return 0;
}
