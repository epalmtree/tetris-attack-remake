#ifndef BOARD_H
#define BOARD_H

#include "block.h"
#include <vector>

class Board {
  private:
    std::vector<Block> board;
  
  public:
    int status();
};

#endif