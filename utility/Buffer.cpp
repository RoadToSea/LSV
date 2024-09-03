#include "Buffer.h"


const std::string &Buffer::getBuf(void) const
{
    // TODO: insert return statement here
    return buf;
}

void Buffer::append(char *msg)
{
    if(msg!=nullptr)
    {
        buf = buf + std::string(msg);
    }
}

void Buffer::clear(void)
{
    buf.clear();
}

const char *Buffer::getCstr(void) const
{
    return buf.c_str();
}
