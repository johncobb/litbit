
# LitBit
This C project demonstrates manipulating individual bits of an int32_t. These methods are convenient when desigining code for microcontrollers. Microcontrollers are typically configured by manipulating bitmasks which represent registers that control how the system operates.

### compile and run
```console
gcc main.c
./a.out
```



### Setting a bit
This function takes a pointer to an int32_t and the position of the bit we're wanting to turn on. The result is printed to the console.

```c
void setBit(int32_t *data, int bitPos) {
    
    *data |= (1 << bitPos);
    printf("setting bit(%d): new value: %d\r\n", bitPos, *data); 
}
```

### Clearing a bit
This function takes a pointer to an int32_t and the position of the bit we're wanting to clear. The result is printed to the console.

```c
void clearBit(int32_t *data, int bitPos) {

    *data &= ~(1 << bitPos);
    printf("clearing bit(%d): new value: %d\r\n", bitPos, *data);
}
```

### Checking status of a bit
This function takes an int32_t and the position of the bit we're wanting to read. The result is printed to the console.

```c
bool checkBit(int32_t data, int bitPos) {
    return ((data) & (1<<(bitPos)));
}
```

### Summary
As you can see setting and clearing bits in an integer is easy. Don't let the operaters intimindate you from using them to your advantage. Bit operations are fast and allow for tighter packing of data when system resources are limited.
