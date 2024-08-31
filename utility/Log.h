#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include "LogConfig.h"

#define LOG(level,logInfo)              Logger::getInstance().logMessage(__FILE__,__LINE__,level,logInfo)
#define Lerror(condition,logInfo)       if(condition)  \
                                          {             \
                                              Logger::getInstance().logMessage(__FILE__,__LINE__-1,LogSpace::ERROR_,logInfo);\
                                              exit(0);\
                                           }
                                        

using namespace LogSpace;


    class Logger
    {
    public:
        void logMessage(const char* file , unsigned line , Log_Level level,std::string logInfo);
        static Logger& getInstance();
        void setfileName(std::string& name);
        
    private:
        std::string fileName=R"(/home/oliver/cpp_projects/LSV/Log.txt)";
        std::ofstream ofs;
        std::ostringstream ostr;
        std::string strBuf;
        Logger() {};
        ~Logger() ;
        Logger(const Logger&) = delete;
        Logger& operator=(const Logger&) = delete;
    };

