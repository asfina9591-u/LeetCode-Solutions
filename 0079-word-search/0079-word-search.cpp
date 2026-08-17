class Solution {
public:

   bool dfs(vector<vector<char>>&board, string& word, int r, int c, int index){

    if(index==word.length())
    return true;
    // Invalid cell
    if(r<0 || r>=board.size() ||
       c<0 || c>=board[0].size() ||
       board[r][c]!=word[index])
       return false;

    // save the current character
    char temp=board[r][c];
    board[r][c]='#';
    //try for the 4 diections
    bool found= dfs(board, word, r+1, c, index+1) ||
                dfs(board, word, r-1, c, index+1) ||
                dfs(board, word, r, c+1, index+1) ||
                dfs(board, word, r, c-1, index+1);

    board[r][c]=temp;
    return found;
   }
   bool exist(vector<vector<char>>&board, string& word){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(dfs(board, word, i, j, 0))
            return true;
        }
    }
        return false;
    
   }
};




    

   