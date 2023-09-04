//GFG: Fractional Knapsack

class Solution
{
    public:
    static bool cmp(struct Item a, struct Item b)
    {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }
 
    double fractionalKnapsack(int W, Item arr[], int n)
    {   
        int i = 0;
        sort(arr,arr+n,cmp);
        
        
        double wt = 0, val = 0;
        i = 0;
        while(wt<=W && i<n){
            if(wt+arr[i].weight<=W){
                val += arr[i].value;
                wt += arr[i].weight;
            }
            else if(wt+arr[i].weight>W){
                val += ((double)arr[i].value/(double)arr[i].weight)*(double)(W-wt);
                wt = W;
            }
            i++;
        }
        
        return val;
    }
        
};
