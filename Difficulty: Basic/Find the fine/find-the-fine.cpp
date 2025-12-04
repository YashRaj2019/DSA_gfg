

class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        long long int collection = 0;
        
        int n=car.size();
        
        if(date%2==1){
            for(int i=0;i<n;i++){
                if(car[i]%2==0){
                    collection = collection+fine[i];
                }
            }
        }
        
        if(date%2==0){
            for(int i=0;i<n;i++){
                if(car[i]%2==1){
                    collection = collection+fine[i];
                }
            }
        }
        return collection;
    }
};