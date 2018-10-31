//
//  main.c
//  binaryTodecimal
//
//  Created by Felix ITs 08 on 31/10/18.
//  Copyright © 2018 Felix. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int bnum = 1111;
    int base =1;
    int rdigit;
 int sum =0;
    int i=0;
    while (bnum > 0) {
        rdigit = bnum % 10;
        sum = sum + (rdigit * base);
        bnum = bnum/10;
        i++;
        base*=2;
    }
    printf("Sum = %d",sum);
    return 0;
}
