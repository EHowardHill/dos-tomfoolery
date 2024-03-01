#include <stdio.h>
#include <conio.h>
#include <graphics.h>

char c;

int main() {
    int graphdriver = DETECT, graphmode, errorcode;
    initgraph(&graphdriver, &graphmode, "C:\\TC\\BGI");

    errorcode = graphresult();
    if (errorcode != 0) {
	printf("Graphics error :( \n");
	printf("%s \n", grapherrormsg(errorcode));
	getch();
	return 1;
    }

    circle(150, 150, 150);

    c = getchar();
    printf("%c", c);

    closegraph();

    return 0;
}