#include "../include/block.h"

Block::Block(int h, int w, char s) {
  this->height = h;
  this->width = w;
  this->skin = s;
}

Block::~Block() {}