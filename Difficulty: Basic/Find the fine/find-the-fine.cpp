

class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        int total = 0;
        
        for(int i = 0; i<car.size(); i++){
            if(date%2==0 && car[i]%2 != 0){
                total += fine[i];
            }
            
            else if(date%2 !=0 && car[i]%2==0){
                total +=  fine[i];
            }
        }
        
        return total;
    }
};