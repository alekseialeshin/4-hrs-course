#include <iostream>
#include <cmath>

using namespace std;

// Madlib game

int main ()
{
  string color, pluralNoun, celebrity;
  
  cout << "enter a color" << endl;
  getline (cin, color);

  cout << "enter a plural noun" << endl;
  getline (cin, pluralNoun);

  cout << "enter a celebrity" << endl;
  getline (cin, celebrity);

  cout << "Roses are " << color << endl;
  cout << pluralNoun << " are blue" << endl;
  cout << "I love " << celebrity << endl;
  
  return 0;

}


