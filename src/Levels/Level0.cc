#include "Block.h"
#include "Level0.h"
#include <fstream>
#include <map>

namespace qd {

  namespace {
    const std::map<std::string, Block::Type> blockMap {
      { "I", Block::Type::BLOCK_I },
      { "J", Block::Type::BLOCK_J },
      { "L", Block::Type::BLOCK_L },
      { "O", Block::Type::BLOCK_O },
      { "S", Block::Type::BLOCK_S },
      { "T", Block::Type::BLOCK_T },
      { "Z", Block::Type::BLOCK_Z } 
    };
  }

  Level0::Level0() {
    std::ifstream file;
    file.open("sequence.txt");

    std::string nextBlock;
    
    while (file >> nextBlock) {
      auto blockIter = blockMap.find(nextBlock);
      if (blockIter == blockMap.end()) {
        // could not find error
      }
      _sequence.emplace_back(blockIter->second);
    }
  }

  int Level0::levelNumber() const {
    return 0;
  }

  Block::Type Level0::nextBlockType() const {

    return Block::Type::EMPTY;
  }

  void Level0::useSequence(const std::string& sequenceFileName) {
  
  }
}
