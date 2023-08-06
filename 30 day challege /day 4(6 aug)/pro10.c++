// Subtract the Product and Sum of Digits of an Integer:-

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int product = 1;
        int sum = 0;
        while(n != 0){
            int lol = n%10; // 4 | 3
            product  = product * lol; // 4 | 12
            sum = sum + lol; // 4 | 7
            n = n/10; //23
        }
        return (product - sum);

    }
};
