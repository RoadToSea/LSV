#pragma once

#include <iostream>

namespace LogSpace {
    
    enum Log_Level
    {
        DEBUG_ = 0,
        INFO_,
        WARNING_,
        ERROR_,
        FATAL_,
        LOG_COUNT_
    };
    inline const char* levelStr[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
        "FATAL"
    };
}