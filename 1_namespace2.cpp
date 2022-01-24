#include <stdio.h>
namespace Audio
{
	void init() { printf("Audio init\n");}
}
namespace Video
{
	void init() { printf("Video init\n");}
}

// global namespace : Ư�� �̸������� ���Ե��� ���� ����
void init() { printf("global init\n"); }

// using �� �Լ��� �Ǵ� �ۿ� ������ �ֽ��ϴ�.
using Video::init;

int main()
{
	// namespace �ȿ� �ִ� ��Ҹ� ����ϴ� 3���� ��� - 8page
	Video::init(); // 1.������ �̸�

//	using Video::init; // 2. using ����(declaration)
	init();				//   init �Լ��� Video �̸� ���� ���. 

	::init(); // :: ==> scope resolution ������. global �ǹ�

	using namespace Video; // 3. using ���þ�(directive)
	init();					//   Video ���� ��� �ɺ��� Video �̸�����
}		