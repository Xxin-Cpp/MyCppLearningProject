#include <iostream>

class Log {


public:
	enum Level //对于普通的枚举来说,Level不是一个命名空间，你不能把它当做命名空间，也就是error,warn,info只是单纯在Log类里面
	{
		LevelError = 0, LevelWarning, LevelInfo
	};

private:
	Level m_LogLevel = LevelInfo;

public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]:" << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]:" << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]:" << message << std::endl;
	}

};

int main() {
	Log log;
	log.SetLevel(Log::LevelWarning); //因为我们的Warning枚举值是在Log类命名空间的，而枚举类型Level本身不是一个命名空间
	log.Warn("The Network Is Bad");
	log.Error("The Program Is Error");
	log.Info("The LogInfo");

	std::cin.get();
}