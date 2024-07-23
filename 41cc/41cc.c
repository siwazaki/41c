#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if(argc != 2) {
        fprintf(stderr, "引数の個数が正しくありません\n");
        return 1;
    }
    int no = atoi(argv[1]);
    printf(".intel_syntax noprefix\n");
    printf(".globl main\n");
    printf("main:\n");
    printf("    mov rax, %d\n", no);
    printf("    ret\n");
}