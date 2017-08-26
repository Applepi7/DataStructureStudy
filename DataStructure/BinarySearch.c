#include <stdio.h>

int BSearch(int arr[], int len, int target) 
{
	int first = 0;		// Ž�� ����� ���� �ε��� ��
	int last = len - 1;		// Ž�� ����� ������ �ε��� ��
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

	return -1;		// ã�� ������ �� ��ȯ�Ǵ� �� -1
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int index;
	int num;

	printf("ã���� ���� �Է����ּ��� : ");
	scanf("%d", &num);

	index = BSearch(arr, sizeof(arr) / sizeof(int), num);

	if (index == -1)
		printf("Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", index);

	return 0;
}