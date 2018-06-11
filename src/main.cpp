#include <stdio.h>
#include <iostream>
#include <chrono>
#include <SDL2/SDL.h>
#include "../include/game.h"

int main() {
  Game g = Game();
  try {
    g.run();
  } catch(...) {
    return 1;
  }
  return 0;
}