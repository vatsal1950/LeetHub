class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        int test = high - low + 1 ;
        if(test %2 == 0)
        {
            return test/2;
        }
        else 
        {
            for(int i = low ; i <= high ; i++)
            {
                if (i%2==1)
                {
                    count++;
                }
                   
            }
             return count;
        }
        
    }
};