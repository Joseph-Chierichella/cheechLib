#include <fstream>
#include <string>

namespace cheech{
  using namespace std;
  void clearFile(const string& file) {
    ofstream ofs(file, ofstream::out | ofstream::trunc);
    ofs.close();
  }
}
