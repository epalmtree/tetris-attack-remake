#include "../include/block.h"
#include <stdio.h>

Block::Block(BlockShape shape, bool attacking, bool updating) {
  this->shape = shape;
  this->attacking = attacking;
  this->updating = updating;
}

Block::~Block() {}

BlockShape Block::getShape() {
  return shape;
}

bool Block::isAttacking(){
  return attacking;
}

bool Block::isUpdating(){
  return updating;
}

void Block::pacify(){
  attacking = false;
}

void Block::attack(){
  attacking = true;
}


void Block::finishUpdating(){
  updating = false;
}

void Block::update(){
  updating = true;
  // Do Stuff
}

char Block::toString() {
  if (shape == BlockShape::TRIANGLE) {
    return 'T';
  } else if (shape == BlockShape::SQUARE) {
    return 'Z';
  } else if (shape == BlockShape::CIRCLE) {
    return 'O';
  } else if (shape == BlockShape::STAR) {
    return '*';
  } else {
    throw "UnidentifiedBlockObject";
  }
}