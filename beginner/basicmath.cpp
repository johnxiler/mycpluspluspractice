#include <iostream>

using namespace std;

int main()
{
  int file_size; // Snake Case
  int FileSize;  // Pascal Case
  int fileSize;  // Camel Case
  int iFileSize; // Hungarian Notation

  int first_value = 45;
  int second_value = 35;
  const double pi = 3.14;

  int add_value = first_value + second_value;
  cout << add_value << endl;

  int subtract_value = first_value - second_value;
  cout << subtract_value << endl;

  int multiply_value = first_value * second_value;
  cout << multiply_value << endl;

  int divide_value = first_value / second_value;
  cout << divide_value << endl;

  int factorial_value = first_value % second_value;
  cout << factorial_value << endl;

  const double pi_values = first_value + pi;
  cout << pi_values << endl;
  return 0;
}