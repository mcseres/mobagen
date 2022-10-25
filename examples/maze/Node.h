#ifndef MOBAGEN_NODE_H
#define MOBAGEN_NODE_H
#include <iostream>
#include <vector>

struct Node {
 public:
  Node() = default;
  Node(bool north, bool east, bool south, bool west){
    data = north | (east<<1) | (south<<2) | (west<<3);
  }
 private:
  uint8_t data;
 public:
  // todo: can you improve this?
  bool inline GetNorth() const{return data & 0x1;};
  bool inline GetEast() const{return data>>1 & 0x1;};
  bool inline GetSouth() const{return data>>2 & 0x1;};
  bool inline GetWest() const{return data>>3 & 0x1;};

  // todo set
  // todo: can you improve this?
  void inline SetNorth(bool x){
    data = (data & ~(1 << 0)) | x << 0;
  };
  void inline SetEast(bool x){
    data = (data & ~(1 << 1)) | x << 1;
  };
  void inline SetSouth(bool x){
    data = (data & ~(1 << 2)) | x << 2;
  };
  void inline SetWest(bool x){
    data = (data & ~(1 << 3)) | x << 3;
  };
};

#endif  // MOBAGEN_NODE_H
