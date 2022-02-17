#ifndef SIMPLEWRITEBUFFER_HPP
#define SIMPLEWRITEBUFFER_HPP

#include "WriteBufferInterface.h"
#include <cstdint>
#include <vector>

#define WB_MAX_SIZE 8192

class SimpleWriteBuffer : public EmbeddedProto::WriteBufferInterface
{
public:
    SimpleWriteBuffer()
    {
        mBuffer.reserve(WB_MAX_SIZE);
    }

    virtual ~SimpleWriteBuffer() = default;

    virtual void clear();
    virtual uint32_t get_size() const;
    virtual uint32_t get_max_size() const;
    virtual uint32_t get_available_size() const;
    const uint8_t* get_data() const;

    virtual bool push(const uint8_t);
    virtual bool push(const uint8_t*, const uint32_t);

private:
    std::vector<uint8_t> mBuffer;
};

#endif /* SIMPLEWRITEBUFFER_HPP */
