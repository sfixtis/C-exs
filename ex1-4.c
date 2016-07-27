/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: admin
 *
 * Created on 27 Ιουλίου 2016, 1:18 μμ
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float lower = -17.8;
    float upper = 148.9;
    float step = 11.1111111113;
    float fahr, celsius;
    printf("celsius\tfahr\n");
    for (celsius = lower; celsius <= upper; celsius+= step){
        fahr = ((celsius *9.0/5.0) + 32);
        printf("%6.1f\t%3.0f\n", celsius, fahr);
    }
    
    return (EXIT_SUCCESS);
}

