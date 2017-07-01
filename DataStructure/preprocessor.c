#include <stdio.h>
#define ERROR 10

main()
{
#ifdef ERROR
	printf("ERROR가 10으로 정의됨\n");
#endif
#undef ERROR
#ifndef ERROR
	printf("ERROR가 정의되지않음\n");
#endif // !ERROR

}