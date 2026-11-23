class ProductOfNumbers {
public:
    //using prefix multiplication

    vector <int> arr;

    ProductOfNumbers() {
        arr.push_back(1);
    }
    
    void add(int num) {
        if(num == 0)
        {
            arr.clear();
            arr.push_back(1);
        }
        else
        {
            arr.push_back(arr.back() * num);    
        }
    }
    
    int getProduct(int k) {
        
        int n = arr.size();

        if(k>=n)
        return 0; //happens if the user adds 0 and then asks for product and in that case k>=n
        //we return 0 in that case

        return arr[n-1] / arr[n-1-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */