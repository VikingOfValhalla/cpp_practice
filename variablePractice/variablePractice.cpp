// basic file operations
#include <iostream>
#include <string>

using namespace std;

string stringVariable = "this is a test";
int intVariable = 20;
bool boolVariable = true;
double doubleVariable = 19.99;
char charVariable = 'A';

int main () {

  cout << "If I want to test a string: " << stringVariable << endl; 
  cout << "If I want an Integer: " << intVariable << endl;
  cout << "If I want a Boolean: " << boolVariable << endl;
  cout << "If I want a Double Value: " << doubleVariable << endl;
  cout << "If I want a Singular Character: " << charVariable << endl;

  return 0;
}