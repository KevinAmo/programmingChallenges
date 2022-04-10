
using namespace std;
int solution(vector<int> &A) 
{
    int sum1 = A[0];
    int sum2 = 0;
    int P = 1;
    for (int i = P; i < A.size(); i++) 
    {
        sum2 += A[i];
    }
    int diff = abs(sum1 - sum2);

    for (; P < A.size()-1; P++) 
    {
        sum1 += A[P];
        sum2 -= A[P];

        int newDiff = abs(sum1 - sum2);
        if (newDiff < diff) 
        {
            diff = newDiff;
        }
    }
    return diff;
}