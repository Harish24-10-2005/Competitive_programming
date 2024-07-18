// To solve this problem programmatically, we can use an iterative approach based on the properties of the Josephus problem.
// The key idea is to use the formula:
// J(n,k)=(J(n−1,k)+k)%n

class Solution {
public:
    int findTheWinner(int n, int k) {
        int res = 0;
        for(int i = 2;i<=n;i++)
        {
            res = (res+k)%i;
        }
        return res+1;
    }
};