
import reprocase;

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include <sstream>
#include <stdexcept>



TEST_CASE("basics")
{
  using namespace std;
  using namespace reprocase;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    CHECK (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    CHECK (false);
  }
  catch (const invalid_argument& e)
  {
    CHECK (e.what () == string ("empty name"));
  }
}
