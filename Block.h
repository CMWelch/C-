#pragma once
#include <iostream>

class Block 
{
    public:
        std::string PrevHash;

        Block(const uint32_t index, const std::string &data);

        std::string GetHash();

        void MineBlock(uint32_t difficulty);

    private:
        uint32_t m_index;
        int64_t m_nonce;
        std::string m_data;
        std::string m_hash;
        time_t m_time;

        std::string CalculateHash() const;
};