class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int a=n;
        int r=0;
        while(a!=0)
        {
            int digit=a%10;
            r=r*10+digit;
            a /=10;
        }
        int l=min(r,n);
        int h=max(r,n);
        int ans=0;
        for (int i=l;i<=h;i++)
        {
            if(isPrime(i)) ans +=i;
        }
        return ans;
    }


private:
    bool isPrime(int b) {
        if (b < 2) return false;
        if (b == 2) return true;
        if (b % 2 == 0) return false;

        for (int i = 3; 1LL * i * i <= b; i += 2) {
            if (b % i == 0) return false;
        }
        return true;
    }
};