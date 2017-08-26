#include <stdio.h>

int BSearch(int arr[], int len, int target) 
{
	int first = 0;		// 탐색 대상의 시작 인덱스 값
	int last = len - 1;		// 탐색 대상의 마지막 인덱스 값
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;

		if (target == arr[mid])
		{
			return mid;
		}
		else
		{
			if (target < arr[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}

	return -1;		// 찾지 못했을 때 반환되는 값 -1
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int index;
	int num;

	printf("찾으실 값을 입력해주세요 : ");
	scanf("%d", &num);

	index = BSearch(arr, sizeof(arr) / sizeof(int), num);

	if (index == -1)
		printf("탐색 실패\n");
	else
		printf("타겟 저장 인덱스 : %d\n", index);

	return 0;
}