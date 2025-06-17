void backtrack(vector<string>&result,unordered_map<char,string>&map,string A,string s,int i){
    for(int j=0;j<map[A[i]].size();j++){
        s.push_back(map[A[i]][j]);
        if(i+1<A.size()){
           backtrack(result,map,A,s,i+1); 
        }
        if(i+1==A.size()){
            result.push_back(s);
        }
        s.pop_back();
    }
}
vector<string> Solution::letterCombinations(string A) {
    unordered_map<char,string>map;
    map['0']="0",map['1']="1",map['2']="abc",map['3']="def",map['4']="ghi",map['5']="jkl",map['6']="mno",map['7']="pqrs",map['8']="tuv",map['9']="wxyz";
    vector<string>result;
    string s;
    int i=0;
    backtrack(result,map,A,s,i);
    return result;
    
}
