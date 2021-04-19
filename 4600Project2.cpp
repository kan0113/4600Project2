#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {

    int resources = 3//will be changed to the number of resources fromthe matrix
// Huy and Kwin
// INPUT:
// P to R: request
// R to P: assign/holding
// top right: request
// bottom left: assign/allocate
// only need to read in top right and bottom left of matrix


// store into 2 N-dimension arrays : allocation, request
// 	i row for P(i)
// 	j column for R(j)
// 	(N resource might not match N process)


// Desere and Manasa
// REDUCTION ALGORITHM:
// available: 0, 0, 0; size = num of request
    vector(resources, 0);

// while loop till out of process
// 	check for process that its request <= available
// 	if none, exit	
// 	put back that process's holding resource to available 
    return;
}