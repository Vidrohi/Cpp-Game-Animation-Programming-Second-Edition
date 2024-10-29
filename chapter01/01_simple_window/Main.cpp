#include <memory>

#include "Window.h"
#include "Logger.h"

int main(int argc, char *argv[]) {
  std::unique_ptr<Window> w = std::make_unique<Window>();

  if (!w->init(1024, 768, "Elven Kings Halls")) {
    Logger::log(1, "%s error: Window init error\n", __FUNCTION__);
    return -1;
  }

  w->mainLoop();

  w->cleanup();

  return 0;
}
