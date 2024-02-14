#pragma once
#include "common.hpp"

struct Animation {
    uint8_t xOrigin, yOrigin;
    uint8_t frames;
    uint24_t *data;
};

class Animator {
  public:
    Animation animationStack[3];
    bool playing;
    uint8_t currentFrame;
    int8_t stackPointer;

    void push(Animation animation);
    void pop();
    void start();
    void play();
};