//
//  main.c
//  FizzBuzzNezz
//
//  Created by Alex on 2015-01-25.
//  Copyright (c) 2015 Alex. All rights reserved.
//

#include <stdio.h>
void fizzBuzzNezz(int n, int x, int y) {
    int i;
    for(i=1; i <=n; i++){
        if(i%x == 0 && i%y == 0) {
            printf("BUZZFIZZ\n");
        }
        
        else if(i%x == 0) printf("Fizz\n");
        
        else if(i%y == 0) printf("Buzz\n");
        
        else{
            printf("%d\n", i);
        }
    }
}


int main(int argc, const char * argv[])
{
    printf("Please enter the number you want to go up to: ");
    int num;
    scanf("%d", &num);
    printf("Please enter your fizz number: ");
    int fizz;
    scanf("%d", &fizz);
    printf("Please enter your buzz number: ");
    int buzz;
    scanf("%d", &buzz);
    fizzBuzzNezz(num, fizz, buzz);
}
