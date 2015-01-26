
#include "pin.H"
#include "triton.h"


std::string smt2lib_bv(UINT64 value, UINT64 size)
{
  std::stringstream stream;

  switch(size){
    case 1:
      stream << "(_ bv" << std::dec << value << " 8)";
      break;
    case 2:
      stream << "(_ bv" << std::dec << value << " 16)";
      break;
    case 4:
      stream << "(_ bv" << std::dec << value << " 32)";
      break;
    case 8:
      stream << "(_ bv" << std::dec << value << " 64)";
      break;
  }
  
  return stream.str();
}


std::string smt2lib_extract(UINT64 regSize)
{
  std::stringstream stream;

  switch(regSize){
    case 1:
      stream << "(_ extract 7 0)";
      break;
    case 2:
      stream << "(_ extract 15 0)";
      break;
    case 4:
      stream << "(_ extract 31 0)";
      break;
    case 8:
      stream << "(_ extract 63 0)";
      break;
  }
  
  return stream.str();
}

