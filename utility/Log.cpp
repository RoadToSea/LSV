#include "Log.h"
#include <ctime>



Logger& Logger::getInstance()
{
    static Logger logInstance;
    return logInstance;
}

void Logger::setfileName(std::string& name)
{
    fileName = name;
}


void Logger::logMessage(const char* file, unsigned line, Log_Level level, std::string logInfo)
{
    time_t time =  std::time(nullptr);
    tm* ctime = localtime(&time);
    char timeBuf[20];
    std::strftime(timeBuf, sizeof(timeBuf), "%Y-%m-%d %H:%M:%S", ctime);

    
    ostr.str("");
    ostr.clear();
    ostr << timeBuf << " [" << levelStr[level] << "] " << file << "|->" << line << "\n" << logInfo << "\n"<<"Error Code:"<<errno<<"\n";
    strBuf += ostr.str();

    if (strBuf.size() >= 256)
    {
        ofs.open(fileName, std::ios::app);
        if (!ofs.is_open())
        {
            std::cerr << "open file Log.txt fail" << std::endl;
            return;
        }
        ofs << strBuf;
        if (!ofs.good())
        {
            std::cerr << "ofstream status bad" << std::endl;
            return;
        }
        ofs.close();
        strBuf.clear();
    }
    
    std::cout << ostr.str();
}


Logger::~Logger()
{
    ofs.open(fileName, std::ios::app);
    if (!ofs.is_open())
    {
        std::cerr << "open file Log.txt fail" << std::endl;
        return;
    }
    ofs << strBuf;
    if (!ofs.good())
    {
        std::cerr << "ofstream status bad" << std::endl;
        return;
    }
    ofs.close();
    strBuf.clear();
}
