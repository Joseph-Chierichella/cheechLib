#ifndef RM_HPP
#define RM_HPP

  namespace cheech {
    void rm(std::string file) {
      using namespace std;
      #if defined(_WIN32)
        string command = "del /F /Q" + file;
        system(command.c_str());
      #else
        string command = "rm " + file;
        system(command.c_str());
      #endif
    }
  }

#endif
