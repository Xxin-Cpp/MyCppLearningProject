#include <iostream>

class Log {


public:
	enum Level //������ͨ��ö����˵,Level����һ�������ռ䣬�㲻�ܰ������������ռ䣬Ҳ����error,warn,infoֻ�ǵ�����Log������
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
	log.SetLevel(Log::LevelWarning); //��Ϊ���ǵ�Warningö��ֵ����Log�������ռ�ģ���ö������Level������һ�������ռ�
	log.Warn("The Network Is Bad");
	log.Error("The Program Is Error");
	log.Info("The LogInfo");

	std::cin.get();
}