#include <stdio.h>   
#include <stdlib.h>

int char_1(char sym_1[1]) {
    printf("%c", sym_1[0]);
    return 0;
}
int char_2(void) {
    printf("e");
    return 0;
}
int char_3(int sym3) {
    printf("%c", sym3);
    return 0;
}
char char_4(void) {
    return 'l';
}
char char_5(void) {
    char sym5; 
    sym5 = 'o';
    return sym5;
}
char char_6(void) {
    return ' ';
}
char char_7(void) {
    char char_W; 
    __asm__ __volatile__ (
        "movb $87, %0"     
        : "=r" (char_W)    
        :                  
        :                  
    );
    return char_W;
}
int char_8(void) {
    putchar(0x6F);
    return 0;
}
int char_9(void *ptr) {
    printf("%c", *(char*)ptr); 
    return 0;
}
void killer_free(void **ptr_to_ptr) {
    free(*ptr_to_ptr);
    *ptr_to_ptr = NULL; 
}

int char_10(void) {
    int *heap_ptr = (int*)malloc(5 * sizeof(int));
    *(heap_ptr + 3) = 108; 
    printf("%c", 3[heap_ptr]); 
    killer_free((void**)&heap_ptr); 
    return 0; 
}
int char_11(void) {
    int bit_6 = (1 << 6); 
    int bit_5 = (1 << 5); 
    int bit_2 = (1 << 2);
    int result = bit_6 | bit_5 | bit_2;
    
    printf("%c", (result == 100) ? (char)result : '?');
    return 0;
}


int main(void) {
    char_1("H"); 
    char_2(); 
    char_3(108); 
    printf("%c", char_4());
    printf("%c", char_5());
    printf("%c", char_6());
    putchar(char_7());
    char_8();
    char letter_r = 114;       
    char_9((void*)&letter_r); 
    char_10();
    char_11();
    printf("\n");
    return 0;
}
