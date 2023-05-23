class KthLargest {
public:
    int k2;
    //vector<int> all;
    priority_queue<int, vector<int>, greater<int>> all;

    KthLargest(int k, vector<int>& nums) {
        k2 = k;
        for(int i=0; i< nums.size(); i++)
        {
            all.push( nums[i] );
            if(all.size()> k2) all.pop(); //超過就丟掉
        }//備份全部數字
    }

    int add(int val) {
        all.push(val);
        if(all.size() > k2) all.pop(); //超過就丟掉
        //sort(all.begin(),all.end());
        return all.top(); //我們要從大到小
    }
};
