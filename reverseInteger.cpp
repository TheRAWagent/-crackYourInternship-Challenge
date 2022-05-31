class Solution {
public:
    int reverse(int x) {
        long long temp=0;
while(x){
temp=temp*10 + x%10;
x/=10;
}
if(temp>INT_MAX || temp<INT_MIN)
return 0;
return temp;

    }
};