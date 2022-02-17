#include "SimpleWriteBuffer.hpp"

void SimpleWriteBuffer::clear()
{
    mBuffer.clear();
}

uint32_t SimpleWriteBuffer::get_size() const
{
    return (uint32_t)mBuffer.size();
}

uint32_t SimpleWriteBuffer::get_max_size() const
{
    return mBuffer.max_size();
}

uint32_t SimpleWriteBuffer::get_available_size() const
{
    return get_max_size() - get_size();
}

const uint8_t* SimpleWriteBuffer::get_data() const
{
    return &mBuffer[0];
}

bool SimpleWriteBuffer::push(const uint8_t byte)
{
    if (mBuffer.size() >= get_max_size())
    {
        return false;
    }

    mBuffer.push_back(byte);

    return true;
}

bool SimpleWriteBuffer::push(const uint8_t* buf, const uint32_t len)
{
    if (mBuffer.size() + len >= get_max_size())
    {
        return false;
    }

    for (uint32_t i = 0; i < len; ++i)
    {
        mBuffer.push_back(buf[i]);
    }

    return true;
}
