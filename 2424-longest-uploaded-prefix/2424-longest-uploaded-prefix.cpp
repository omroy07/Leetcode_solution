class LUPrefix {
public:
    vector<bool> nums;
    int prev,size;
    LUPrefix(int n) {
        prev = 0;
        nums.resize(n+1,0);
        nums[0] = true;
        size = n;
    }
    
    void upload(int video) {
        nums[video] = true;
        while(prev+1 <= size && nums[prev+1] == true){
            prev++;
        }
    }
    
    int longest() {
        return prev;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */