#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using std::vector;
using std::string;

const string kFileName = "names.txt";

vector<string> ReadFile(const string &path) {
  std::ifstream file(path);

  if (!file.is_open()) {
    std::cerr << "Unable to open file.\n";
    std::exit(-1);
  }

  vector<string> names;
  string name;

  while (std::getline(file, name, ',')) {
    name.erase(std::remove(name.begin(), name.end(), '"'), name.end());
    names.push_back(name);
  }

  return names;
}

int NameSum(const string &name) {
  int sum = 0;
  for (char character : name) {
    sum += (character - 64);
  }

  return sum;
}

int main()
{
  vector<string> names = ReadFile(kFileName);
  std::sort(names.begin(), names.end());

  int sum = 0;
  int counter = 1;

  for (string name : names) {
    sum += (NameSum(name) * counter);
    counter++;
  }

  std::cout << "The solution is: " << sum << "\n";
  return 0;
}
