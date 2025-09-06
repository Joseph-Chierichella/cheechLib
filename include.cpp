#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

namespace cheech{
  using namespace std;
  
  void test() {
    cout << 0 << "\n";
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
  void rm(string file) {
    string command = "rm " + file;
    system(command.c_str());
  }
}
