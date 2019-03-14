
#include "stdio.h"
#include "stdbool.h"

int64_t maskSixtyFour = 0000000000000000000000000000000000000000000000000000000000000000;
int32_t maskThirtyTwo = 00000000000000000000000000000000;


void setBit(int32_t *data, int bitPos);
void clearBit(int32_t *data, int bitPos);
void toggleBit(int32_t *data, int bitPos);
bool checkBit(int32_t data, int bitPos);

int32_t tag = 0;

int main() {

    printf("--START--\r\n");
    for (int i=0; i<32; i++) {
        setBit(&tag, i);
    }
    printf("---END---\r\n");

    
    return 0;
}

void setBit(int32_t *data, int bitPos) {
    
    *data |= (1 << bitPos);
    printf("setting bit(%d): new value: %d\r\n", bitPos, *data); 
}

void clearBit(int32_t *data, int bitPos) {

    *data &= ~(1 << bitPos);
    printf("clearing bit(%d): new value: %d\r\n", bitPos, *data);
}

void toggleBit(int32_t *data, int bitPos) {

    *data ^= (1 << bitPos);
    printf("toggling bit(%d): new value: %d\r\n", bitPos, *data);
}


bool checkBit(int32_t data, int bitPos) {
    return ((data) & (1<<(bitPos)));
}
