// C++ Program to illustrate the use of
// std::map::lower_bound() method
#include <iostream>
#include <map>

using namespace std;


int main() {
    map<int, string> m = {{1, "Geeks"},
    {3, "Geeksfor"}, {10, "GeeksforGeeks"}};
  
    auto it = prev(m.upper_bound(11));

    cout << it->first << ": " << it->second;
    return 0;
}