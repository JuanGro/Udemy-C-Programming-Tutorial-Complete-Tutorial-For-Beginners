//
//  main.c
//  variables
//
//  Created by Juan Hernández on 2/12/19.
//  Copyright © 2019 Juan Hernández. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 0;
    float b = 2.56;
    double c = 3.1416;
    printf("Please enter an integer:\n");
    scanf("%d", &a);
    printf("a = %d, b = %f, c = %f\n", a, b, c);
    return 0;
}
