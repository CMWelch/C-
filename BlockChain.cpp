#include "Blockchain.h"

Blockchain::Blockchain() 
{
    m_chain.__emplace_back(Block(0, "Genesis Block"));
    m_difficulty = 6;
}
void Blockchain::AddBlock(Block newBlock) 
{
    newBlock.PrevHash = GetLastBlock().GetHash();
    newBlock.MineBlock(m_difficulty);
    m_chain.push_back(newBlock);
}
Block Blockchain::GetLastBlock() const 
{
    return m_chain.back();
}