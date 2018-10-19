#include<graphics.h>
#include<conio.h>

main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	putpixel(10,10,CYAN);
	getch();
	closegraph();
	return 0;
}

