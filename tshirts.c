#include <stdio.h>
#include <assert.h>

void testSsize(void);
void testMsize(void);
void testLsize(void);

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

void testSsize(){
    assert(size(37) == 'S');
    assert(size(38) == 'S');
}

void testMsize(){
    assert(size(39) == 'M');
    assert(size(40) == 'M');
    assert(size(42) == 'M');
}

void testLsize(){
     assert(size(43) == 'L');
}


int main() {
    testSsize();
    testMsize();
    testLsize();
    printf("All is well (maybe!)\n");
    return 0;
}
