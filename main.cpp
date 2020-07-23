#include <iostream>

using namespace std;

// function
int main()
{
  string characterName = "Brendon";
  int characterAge;
  characterAge = 79;
  bool isAwake = true;

  cout << "There was a man named " << characterName << endl;
  cout << "He was 70" << endl;
  characterName = "Jack";
  cout << "he did not like the name " << characterName << endl;
  cout << "did not like " << characterAge << endl;

  // tells you where the string or char starts in the string
  cout << characterName.find("ck", 0) << endl;

  // gives you the characters in the string and how many you specified (index, how many after the index)
  string nameSub = characterName.substr(2, 2);
  cout << nameSub << endl;

  return 0;
}