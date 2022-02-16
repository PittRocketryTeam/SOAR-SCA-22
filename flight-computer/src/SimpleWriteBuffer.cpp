#include "SimpleWriteBuffer.hpp"

void SimpleWriteBuffer::clear()
{

}

uint32_t SimpleWriteBuffer::get_size() const
{
    return 0;
}

uint32_t SimpleWriteBuffer::get_max_size() const
{
    return 0;
}

uint32_t SimpleWriteBuffer::get_available_size() const
{
    return 0;
}

bool SimpleWriteBuffer::push(const uint8_t byte)
{
    return true;
}

bool SimpleWriteBuffer::push(const uint8_t* buf, const uint32_t len)
{
    return true;
}
