#include <stdio.h>

typedef struct {
	int x, y;
}Point;

typedef int INT;

void ShowPoint(Point xy) {
	printf("(%d, %d)\n", xy.x, xy.y);
}

void ShowPPoint(Point* xy) {
	printf("(%d, %d)\n", xy->x, xy->y);
}

Point Getxy() {
	Point Pxy;
	printf("Input x, y : ");
	scanf("%d %d", &Pxy.x, &Pxy.y);

	return Pxy;
}

int main()
{
	Point xy = Getxy();
	ShowPoint(xy);
	ShowPPoint(&xy);

	INT n = 5;
	printf("%d", n);
}