class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size()-1;
        while(size >= 0){
            if(digits[size] < 9){
                digits[size]++;
                break;
            }
            else if(size == 0){
                digits[size] = 0;
                digits.insert(digits.begin(),1);
                break;
            }
            else{
                digits[size] = 0;
                size--;
            }

        }
        return digits;
    }
};
