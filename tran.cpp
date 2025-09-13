#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100, y1 = 100, x2 = 200, y2 = 200;
    int tx = 50, ty = 80;

    // Draw original rectangle
    rectangle(x1, y1, x2, y2);
    outtextxy(x1, y1 - 10, "Original");

    // Apply translation
    rectangle(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
    outtextxy(x1 + tx, y1 + ty - 10, "Translated");
 getch();
    closegraph();
    return 0;
}



