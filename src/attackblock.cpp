#include "../include/block.h"

class AttackBlock : public Block {
  public:
    AttackBlock(int h, int w, char s) : Block(h,w,s) {}
};