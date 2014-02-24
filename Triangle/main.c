//
//  main.c
//  Triangle
//
//  Created by Ken Swain on 2/24/14.
//  Copyright (c) 2014 Ken Swain. All rights reserved.
//

#include <stdio.h>

// find the third angle of the problem

float remainingAngle(float a, float b)
{
    float c = a + b;
    float d = 180 -c;
    return d;
}

int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}

