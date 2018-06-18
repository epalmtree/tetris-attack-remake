#ifndef BLOCK_H
#define BLOCK_H

typedef enum class BlockShape {TRIANGLE, SQUARE, CIRCLE, STAR} BlockShape;

class Block {
  private:
    BlockShape shape;
    bool attacking;
    bool updating;
  
  public:
    Block(BlockShape shape, bool attacking, bool updating);
    ~Block();
    BlockShape getShape();
    bool isAttacking();
    bool isUpdating();
    void pacify();
    void attack();
    void finishUpdating();
    void update();
    char toString();
};

#endif