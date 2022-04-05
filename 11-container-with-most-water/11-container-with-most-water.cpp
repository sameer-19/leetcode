class Solution {
public:
    int maxArea(vector<int>& a) {
        int ans=0,i=0,n=a.size();
        int j=n-1;
        while(i<=j)
        {
            int area=min(a[i],a[j])*(j-i);
            ans=max(ans,area);
            if(a[i]<a[j]) i++;
            else j--;
        }
        return ans;
    }
};