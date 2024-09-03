#pragma once

#include <string>


class Buffer
{
private:
    std::string buf;
public:
    const std::string& getBuf(void) const;
    const char* getCstr(void) const;
    void append(char* msg);
    void clear(void);
};
