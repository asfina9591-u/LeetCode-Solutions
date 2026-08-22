class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;

        int temp=n;
        while(temp){
           sum+=temp%10;
           product*=temp%10;
           temp/=10;
        }
        return (sum + product != 0) && (n % (sum + product) == 0);
            }
};