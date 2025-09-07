#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "version/version.cpp"
#include "deleting_files/rm.hpp"

namespace cheech{
  using namespace std;
  
  void test() {
    cout << version << "\n";
  }
  string copyFile(string tfile) {
    ifstream file(tfile);
    if (!file.is_open()) {
      return "error";
    }
    string content((istreambuf_iterator<char>(file)),
                    istreambuf_iterator<char>());
    string arg = content;
    return arg;
  }
  void rm(string file);

}
