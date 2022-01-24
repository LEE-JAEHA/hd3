#include <stdio.h>
namespace Audio
{
	void init() { printf("Audio init\n");}
}
namespace Video
{
	void init() { printf("Video init\n");}
}

int main()
{
	// namespace �ȿ� �ִ� ��Ҹ� ����ϴ� 3���� ��� - 8page
	Video::init(); // 1.������ �̸�

	using Video::init; // 2. using ����(declaration)
	init();

	using namespace Video; // 3. using ���þ�(directive)
	init();
}