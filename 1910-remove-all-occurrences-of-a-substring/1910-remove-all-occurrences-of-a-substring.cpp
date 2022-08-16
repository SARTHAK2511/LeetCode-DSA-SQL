class Solution {
public:
    string removeOccurrences(string s, string part) {
        int count=s.size()/part.size();   //loop will run at max count times. Give it a thought!
        for(int i=0; i<count; i++){
            int found=s.find(part);
            if(found == -1){
                return s;
            }
            else{
                s.erase(found, part.size());
            }
        }
       return s;
              }
};