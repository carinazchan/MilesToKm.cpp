#include <iostream>

int main()
{

  //Variables
  int distm = 0;
  double distk = 0;

  std::cout << "How far are you travelling: ";
  std::cin >> distm;

  //Convert distance from miles to km
  distk = distm * 1.6;

  std::cout << "That's about " << distk << " kilometers! Wowee! :P\n";

}
