class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital=0;
    
        for(int i=0;i<word.size();i++){ // count the uppercase letters
            if(isupper(word[i])){
                capital++;
            
            }
        }
        // case1: all the letters are upper case
        if(capital==word.size()){
            return true;
        }
        // case2: all the letters are lower case
        if(capital==0){
            return true;
        }
        //case3: onlythe first letter is capital
        if(capital==1 && isupper(word[0])){
            return true;
        }
        return false;
    }
};



            
        


        
    
