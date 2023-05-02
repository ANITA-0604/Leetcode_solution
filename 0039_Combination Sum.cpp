class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<vector<int>>> dp;
        int size = candidates.size();
        sort(candidates.begin(),candidates.end());
        for(int i = 1 ;i <= target ; i++){
            cout<<"------------"<<i<<"--------------"<<endl;
            vector<vector<int>> cur;
            for(int j= 0 ;j < size; j++){
                if(candidates[j] > i) 
                    break;
                else if(candidates[j]== i ){
                    cout<<"candidate"<<candidates[j]<<endl;
                    cur.push_back({candidates[j]});
                    break;
                }
                else {
                    
                    for(auto k: dp[i- candidates[j]-1]){
                        // cout<<"target:"<<i- candidates[j]<<endl;
                        // cout<<candidates[j]<<endl;
                        // for(int m = 0;m < k.size();m++){
                        //     cout<< k[m]<<",";
                        // }
                        // cout<<endl;
                        if(k.empty()) break;
                        if(candidates[j] > k[0]) continue;
                        k.insert(k.begin(),candidates[j]);
                        cur.push_back(k);
                    }
                }

            }
            dp.push_back(cur);
        }
        // for(int i=0;i<dp.size();i++){
        //     cout<<"candidates: "<<i+1<<endl;
        //     for(int j = 0; j <dp[i].size();j++){
        //         cout<< "Ans:";
        //         for(int k = 0; k < dp[i][j].size();k++){
        //             cout<<dp[i][j][k]<<", ";
        //         }
        //         cout<<endl;
        //     }
        // }
        return dp[target - 1];
        
    }
};
