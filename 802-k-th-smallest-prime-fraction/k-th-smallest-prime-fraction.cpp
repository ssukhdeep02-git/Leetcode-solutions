class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        //using max heap maintaining the size k
        priority_queue <vector<double>> pq; //{double, arr[i], arr[j]}

        int n = arr.size();

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                double fraction = (double)arr[i]/arr[j];
                pq.push({fraction, (double)arr[i], (double)arr[j]});

                if(pq.size() > k)
                pq.pop();
            }
        }

        auto vec = pq.top();
        vector <int> res(2);

        res[0] = vec[1];
        res[1] = vec[2];

        return res;
    }
};