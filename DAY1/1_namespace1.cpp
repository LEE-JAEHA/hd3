// 1_namespace1.cpp - 7 pag
#include <stdio.h>
namespace Audio
{
	void init()
	{
		printf("Audio init\n");
	}
}
namespace Video
{
	// Video ���� �Լ�, ����ü, ������������ ��� �̾ȿ��� �����.
	void init()
	{
		printf("Video init\n");
	}
}

int main()
{
	Video::init();
}