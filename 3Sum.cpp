/*
3 Sum Problem: In a set of N integers, how many unique triplets sums to zero.
*/

//BRUTE FORCE ALGORITHM
#include <iostream>
#include <vector>

int Count3Sum(const std::vector<int> &a){ //recieve vector a  as reference
    int N = a.size();
    int count = 0;

    //examines every single triplet in vector
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            for(int k = j + 1; k < N; k++){
                if(a[i] + a[j] + a[k] == 0){ //if sum = 0, then count is incremented
                    count++;
                }
            }
        }
    }
    return count; //return val
}

int main(void){
    int n; //used to read input from keyboard
    std::vector<int> a; //store integers 

    while(std::cin >> n){ //read from keyboard and add to vector
        a.push_back(n);
    }

    std::cout << "Number of Triplets: " << Count3Sum(a) << std::endl; //calls function

    return 0;


}
