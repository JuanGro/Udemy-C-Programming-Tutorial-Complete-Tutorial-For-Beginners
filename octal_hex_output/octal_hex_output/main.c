//
//  main.c
//  octal_hex_output
//
//  Created by Juan Hernández on 2/12/19.
//  Copyright © 2019 Juan Hernández. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int var = 45;
    printf("var = %d\n", var);
    printf("var = %o\n", var);
    printf("var = %x\n", var);
    
    int var1 = 056;
    printf("var1 = %d\n", var1);
    printf("var1 = %o\n", var1);
    printf("var1 = %x\n", var1);
    
    int var2 = 0xa;
    printf("var2 = %d\n", var2);
    printf("var2 = %o\n", var2);
    printf("var2 = %x\n", var2);
    
    return 0;
}
