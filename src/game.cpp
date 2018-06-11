#include <chrono>
#include "../include/game.h"

void Game::run() {
  double MS_PER_UPDATE = 1000./30.;
  auto previous = std::chrono::system_clock::now();
  double lag = 0.0;
  // while () {
    auto current = std::chrono::system_clock::now();
    double elapsed = (current - previous).count();
    previous = current;
    lag += elapsed;

    // processInput();

    while (lag >= MS_PER_UPDATE) {
      // update();
      lag -= MS_PER_UPDATE;
    }

    // render(lag / MS_PER_UPDATE);
  // }
}