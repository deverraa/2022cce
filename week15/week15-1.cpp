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
            if(all.size()> k2) all.pop(); //�W�L�N�ᱼ
        }//�ƥ������Ʀr
    }

    int add(int val) {
        all.push(val);
        if(all.size() > k2) all.pop(); //�W�L�N�ᱼ
        //sort(all.begin(),all.end());
        return all.top(); //�ڭ̭n�q�j��p
    }
};
