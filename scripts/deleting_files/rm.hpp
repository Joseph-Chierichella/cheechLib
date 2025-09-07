
// THIS FILE MAY NOT WORK ON ANY OTHER
// OS THAT IS NOT WINDOWS OR LINUX.

#ifndef RM_HPP
#define RM_HPP

  namespace cheech {
    void rm(std::string file) {
      using namespace std;
      #if defined(_WIN32) // WINDOWS
        string command = "del /F /Q " + file; // sometimes you may not be allowed 
        system(command.c_str());              // to delete exe files on Windows.
      #else               // LINUX
        string command = "rm " + file;
        system(command.c_str());
      #endif
    }
  }

#endif
