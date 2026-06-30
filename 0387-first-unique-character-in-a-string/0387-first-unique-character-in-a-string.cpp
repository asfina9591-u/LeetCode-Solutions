class Solution {
public:
    int firstUniqChar(string s) {
       
        int n=s.size();
        
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i]==s[j] && i!=j){
                break;
            }
            if(j==n-1)
            return i;
        }
       }
       return -1;
    }
};
