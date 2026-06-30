class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();

        if(s.length()!=goal.length()){
            return false;
        }

        for(int i=0;i<n;i++){
            if(s==goal)
               return true;
 
        rotate(s.begin(), s.begin()+1, s.end());
        }
        return false;
    }
};

        
        
       