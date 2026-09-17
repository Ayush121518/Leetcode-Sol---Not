class Solution {
public:
    int alternateDigitSum(int n) {
        int nd = 0;
        int num = n;

        while(num >= 1)
        {
            nd++;
            num = num / 10;
        }

        int sum = 0;
        int count = 1;

        num = n;

        while(num >= 1)
        {
            nd = nd - 1;

            int p = pow(10, nd);
            int d = num / p;

            if(count % 2 == 0)
            {
                sum = sum - d;
            }
            else
            {
                sum = sum + d;
            }

            count++;
            num = num % p;
        }

        return sum;

    }
};