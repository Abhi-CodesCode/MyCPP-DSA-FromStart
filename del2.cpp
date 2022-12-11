#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int i=0;
        sort(arr.begin(),arr.end());
        while(i<arr.size()){
            int count=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
                ans.push_back(count);
                i=i+count;
            }
            
            
            /*sorting the count of the ans array to 
            find if two of them have the same count*/
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++){
                if(ans[i]==ans[i+1]){
                    return false;
                }
            }
            return true;
        }

int main(){
    vector<int> arr{1,2,2,3,3,3,4,1,1,1};
    cout<<uniqueOccurrences(arr)<<endl;
}