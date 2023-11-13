module;
#include <ostream>
#include <stdexcept>

module reprocase;

using namespace std;

namespace reprocase
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
