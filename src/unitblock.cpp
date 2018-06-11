#include "../include/block.h"

class UnitBlock : public Block {
  public:
    UnitBlock(int h, int w, char s) : Block(h,w,s) {}
};