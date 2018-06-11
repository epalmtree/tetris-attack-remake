#ifndef BLOCK_H
#define BLOCK_H

class Block {
  private:
    bool processing = true;
    int height;
    int width;
    char skin;
  
  public:
    Block(int h, int w, char s);
    ~Block();
};

#endif