

// you can use includes, for example:
 #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;
int solution(vector<int> &A) {
    
    if(A.size() == 1 && A[0] == 1)
    {
        return 1;
    }
    else if (A.size() == 1 && A[0] != 1)
    {
        return 0;
    }

    sort(A.begin(), A.end());
    for (uint i = 1; i <= A.size(); i++) 
    {
        if (i != A[i-1]) 
        {
            return 0;
        }
    }

    return 1;

}

