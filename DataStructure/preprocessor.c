#include <stdio.h>
#define ERROR 10

main()
{
#ifdef ERROR
	printf("ERROR�� 10���� ���ǵ�\n");
#endif
#undef ERROR
#ifndef ERROR
	printf("ERROR�� ���ǵ�������\n");
#endif // !ERROR

}