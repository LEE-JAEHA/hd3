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
	// namespace 안에 있는 요소를 사용하는 3가지 방법 - 8page
	Video::init(); // 1.완전한 이름

	using Video::init; // 2. using 선언(declaration)
	init();

	using namespace Video; // 3. using 지시어(directive)
	init();
}