#include <stdio.h>
#include <assert.h>

void testColor(void);

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

void testColor()
{
    int result = printColorMap();
    assert(result == 24);
    assert(result == 25);
    assert(result == 26);
}

int main() {
    testColor();
    printf("All is well (maybe!)\n");
    return 0;
}
