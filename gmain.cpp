#include"libOne.h"
void gmain() {
    window(1600, 900, full);
    ShowCursor(FALSE);
    angleMode(DEGREES);
    float x = 0, y = 0, w = 0, h = 0, a = 0;
    int cols = 0, rows = 0;
    w = 100;
    h = 100;
    cols = int(width / w);
    rows = int(height / h);
    float cx = 0, cy = 0;
    cx = width / 2;
    cy = height / 2;
    while (notQuit) {
        //rectangles
        a += 0.2f;
        clear(250, 200, 0);
        strokeWeight(0);
        for (int j = 0; j < rows; j++) {
            y = h * j;
            for (int i = 0; i < cols; i++) {
                if ((j + i) % 2 == 0) {
                    fill(0, 128, 0);
                }
                else {
                    fill(0);
                }
                x = w * i;
                rect(x, y, w, h, a);
            }
        }
        //circle
        fill(255,0,0);
        circle(cx, cy, 320);
        fill(255);
        circle(cx-12, cy, 290);
        //text
        font("HGñæí©E");
        float ofs = 0;
        float tx = cx - 150;
        int size = 100;
        textSize(size);
        for (int i = 1; i >= 0; i--) {
            fill(150.0f * i);
            ofs = 2.0f * i;
            text("ãSñ≈ÇÃ", tx + ofs, cy + ofs);
            text("ñΩóﬂèë", tx + ofs, cy + size + ofs);
        }
    }
    ShowCursor(TRUE);
}