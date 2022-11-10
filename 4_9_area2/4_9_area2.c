#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    int count = 0;

    for (int x = 0; x < height_len; x++) {
        for (int y = 0; y < height_len; y++) {
            bool risk = true;
            // 체크 - 좌
            if (x != 0) {
                if (height[x - 1][y] <= height[x][y]) {
                    risk = false;
                }
            }
            // 체크 - 우
            if (x != height_len - 1) {
                if (height[x + 1][y] <= height[x][y]) {
                    risk = false;
                }
            }
            // 체크 - 상
            if (y != 0) {
                if (height[x][y - 1] <= height[x][y]) {
                    risk = false;
                }
            }
            // 체크 - 하
            if (y != height_len - 1) {
                if (height[x][y + 1] <= height[x][y]) {
                    risk = false;
                }
            }

            if (risk) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
    int height_len = 4;
    int ret = solution(height, height_len = 4);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}