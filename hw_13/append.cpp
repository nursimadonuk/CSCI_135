#include <iostream>
#include <vector>

std::vector<int> append(std::vector<int> a, std::vector<int> b) {
  for(int i = 0; i < b.size(); i++) {
    a.push_back(b[i]);
  }
  return a;
}

int main() {
  std::vector<int> v;
  v = {1, 4, 9, 16}
  std::vector<int> t;
  t  = {9, 7, 4, 9, 11};
  std::cout<<append(v, t);
  return 0;
}
