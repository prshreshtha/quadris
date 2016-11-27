#include "Block.h"
#include "Level3.h"
#include <array>
#include <cstdlib>


namespace qd {

  namespace {
    std::array<Block::Type,27> weightedBlockTypes {
      {
        Block::Type::BLOCK_I,
        Block::Type::BLOCK_J,
        Block::Type::BLOCK_L,
        Block::Type::BLOCK_O,
        Block::Type::BLOCK_S,
        Block::Type::BLOCK_S,
        Block::Type::BLOCK_T,
        Block::Type::BLOCK_Z,
        Block::Type::BLOCK_Z
      }
    };
  }

  int Level3::levelNumber() const {
    return 3;
  }

  Block::Type Level3::nextBlockType() const {
    int rand = std::rand() % (weightedBlockTypes.size());
    
    return weightedBlockTypes[rand];
  }

  void Level3::useSequence(const std::string& sequenceFileName) {
  
  }
}