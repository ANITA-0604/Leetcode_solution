class Solution {
public:
    string intToRoman(int num) {
        string ans ="";
        vector<string> roman({"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"});
        vector<int> val({1000,900,500,400,100,90,50,40,10,9,5,4,1});
        for(int i=0;i<roman.size();i++){
            if(num >= val[i]){
                int times = num/val[i];
               
                for(int j=0;j<times;j++){
                    ans+=roman[i];
                }
                num = num % val[i];
            }
        }
        return ans;
    }
};
