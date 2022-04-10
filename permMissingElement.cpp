

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    if(A.size() == 0)
    {
        return 1;
    }
    std::sort(A.begin(), A.end());
    for (int i = 1; i <= A.size(); i++) 
    {
        if (i != A[i-1]) 
        {
            return i;
        }
    }
}

