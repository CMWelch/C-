#pragma once

#include <iostream>
#include <vector>
#include "Block.h"


class Blockchain {
public:
    Blockchain();

    void AddBlock(Block block);

private:
    uint32_t m_difficulty;
    std::vector<Block> m_chain;

    Block GetLastBlock() const;
};