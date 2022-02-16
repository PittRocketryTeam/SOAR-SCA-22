#ifndef SIMPLEWRITEBUFFER_HPP
#define SIMPLEWRITEBUFFER_HPP

#include "WriteBufferInterface.h"

class SimpleWriteBuffer : public EmbeddedProto::WriteBufferInterface
{
public:
    SimpleWriteBuffer()
    {
    }

    virtual ~SimpleWriteBuffer() = default;

    virtual void clear();
    virtual uint32_t get_size() const;
    virtual uint32_t get_max_size() const;
    virtual uint32_t get_available_size() const;

    virtual bool push(const uint8_t);
    virtual bool push(const uint8_t*, const uint32_t);
};

#endif /* SIMPLEWRITEBUFFER_HPP */
