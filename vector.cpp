#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector <int> v;
    stringstream ss(str);
    char ch;
    int tmp;
    while (ss){
      ss >> tmp >> ch;
      v.push_back (tmp);
  }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(long unsigned int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
