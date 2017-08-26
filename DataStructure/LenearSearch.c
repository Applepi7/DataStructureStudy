#include <stdio.h>


int LSearch(int arr[], int len, int target) // ���� Ž�� �˰��� ����� �Լ�
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (arr[i] == target)
			return i;	// ã�� �ε��� �� ��ȯ
	}
	return -1;		// ã�� �������� �ǹ��ϴ� �� ��ȯ
}

int main()
{
	int arr[] = { 3, 5, 2, 4, 9 };
	int num;
	int index;

	printf("ã���� �ε��� ���� �Է����ּ��� : ");
	scanf("%d", &num);

	index = LSearch(arr, sizeof(arr) / sizeof(int), num);

	if (index == -1)
		printf("Ž�� ����\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", index);

	return 0;
}

