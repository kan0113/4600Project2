#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int resources=2;//will be changed to the number of resources fromthe matrix
    int processes=3; //will be changed to the number of resources from the matrix
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
    vector<vector<int>> amatrix{{1,0},{0,1},{0,1}};
    vector<vector<int>> rmatrix{{0,1},{1,0},{0,0}};
    //amatrix[0][0] means process 1, allocation vector of [1,0]

// Desere and Manasa
// REDUCTION ALGORITHM:
// available: 0, 0, 0; size = num of request
    vector<int> available(resources, 0);

   vector<int> temp_proc;

   vector<bool> access(resources,false);
// while loop till out of process
    while(temp_proc.size()!=0){
 // 	check for process that its request <= available      
        for(int i=0; i<temp_proc.size(); i++)//looping through the process not taken
        {
            for(int j; j<resources; j++)
            {
                if(available[j]<=rmatrix[temp_proc[i]][j])
                {
                    access[j]=true;
                }
            }
            if(find(begin(access), end(access), false) == end(access))//meaning there is all false and can add the allocation to available
            {
                for(int k=0; k<resources; k++)//add to the alocation part
                {
                    available[k] += amatrix[i][k];
                }
                temp_proc.erase(temp_proc.begin()+i);
            }
            else if(i==(temp_proc.size()-1))//deadlock
            {

            }
        }
        
    }

// 	if none, exit	
// 	put back that process's holding resource to available 
    return;
}