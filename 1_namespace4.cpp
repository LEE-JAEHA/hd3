// 10 page
//#include <stdio.h> // C ��� ���. namespace ��� ������ ����Ҽ� ����.
#include <cstdio>  // C++ �� ���. printf�� �������� �ְ�, std ���� �ִ�.

//   C ���      C++ ���
// <xxxx.h>  ==>  <cxxxx>
// <stdio.h> ==>  <cstdio>
// <stdlib.h>==>  <cstdlib>
// <string.h>==>  <cstring>

// C++ ǥ�� ��� : .h �� ������� �ʴ´�.
//				��, ����ڰ� ���鶧�� .h �� �ٿ��� �ȴ�.(���̴°� ����)

int main()
{
	printf("hello\n"); // ok
	std::printf("hello\n"); // �ɱ�� ?
							// printf �� Cǥ��������, C++ǥ���̱⵵ �մϴ�.
}