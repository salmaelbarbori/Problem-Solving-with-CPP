class Solution {
public:
    int pivotInteger(int n) {
     if(n==1)return 1; int sum1=1,sum2=n,i=2,j=n-1;while(i<=n&&j>0) 
    {if(sum1<sum2){sum1+=i;i++;} else if(sum2<sum1){ sum2+=j;j--;}else return i;}return (-1);
}};
