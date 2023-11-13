#pragma once

#include <iosfwd>
#include <string>

#include <reprocase/export.hxx>

namespace reprocase
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  REPROCASE_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
