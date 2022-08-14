


class Solution {
public:
int lowercase(char ch){
if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
return ch;
}
else{
ch = ch - 'A' + 'a';
return ch;
}
}
public:
bool isPalindrome(string s) {
string ans = "";
for(char ch : s){
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
ans.push_back(lowercase(ch));
}
}

    int start = 0;
    int end = ans.length()-1;
    while(start<=end){
        if(ans[start]!=ans[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;}
};