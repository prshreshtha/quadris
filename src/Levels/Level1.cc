#include "Block.h"
#include "Level1.h"
#include <array>
#include "Board.h"

namespace qd {

  namespace {
    std::array<Block::Type, 12> weightedBlockTypes {
      {
        Block::Type::BLOCK_I,
        Block::Type::BLOCK_I,
        Block::Type::BLOCK_J,
        Block::Type::BLOCK_J,
        Block::Type::BLOCK_L,
        Block::Type::BLOCK_L,
        Block::Type::BLOCK_O,
        Block::Type::BLOCK_O,
        Block::Type::BLOCK_S,
        Block::Type::BLOCK_T,
        Block::Type::BLOCK_T,
        Block::Type::BLOCK_Z
      }
    };
  }

  int Level1::levelNumber() const {
    return 1;
  }

  Block::Type Level1::nextBlockType() {
    std::uniform_int_distribution<> dis(0, (weightedBlockTypes.size() - 1));
    
    auto index = dis(_board.randomEngine());
    
    return weightedBlockTypes[index];
  }

  void Level1::executeCommand(const Command& command) {
  }
}
