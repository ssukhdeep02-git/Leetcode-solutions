class Solution {
public:
    typedef vector<double> v; 

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        //using min heap for the optimal solution

        priority_queue <v, vector<v>, greater<v>> pq; ///{fraction, i, j}

        int n = arr.size();

        for(int i=0; i<n; i++)
        {
            //first pushing all the numerators divide by the last element to get the smallest

            pq.push({1.0*arr[i]/arr[n-1], (double)i, (double)n-1}); //*1.0 to convert to double
        }

        int smallest = 1;
        ///got the first smallest at the top of pq

        while(smallest < k)
        {
            v vec = pq.top();
            pq.pop();

            int i = vec[1];
            int j = vec[2] - 1; //to get the second smallest among the pq elements

            pq.push({1.0*arr[i]/arr[j], (double)i, (double)j});

            smallest++; //we will get smallest one by one in every iteration of while
        }

        //when smallest = k, loop will terminate

        v vec = pq.top();
        pq.pop();

        int i = vec[1];
        int j = vec[2];

        return {arr[i], arr[j]};
    }
};