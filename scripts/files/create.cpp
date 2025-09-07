
// THIS FILE MAY NOT WORK ON ANY OTHER
// OS THAT IS NOT WINDOWS OR LINUX.


#include <iostream>
#include <string>
#include <cstdlib>

namespace cheech {
  void create(std::string file) {
    using namespace std;
    string command;
    #if defined(_WIN32) // WINDOWS
      command = "type nul > " + file;
      system(command.c_str());
    #else               // LINUX
      command = "touch " + file;
      system(command.c_str());
    #endif
  }
}
