class Solution {
public:
    string decodeMessage(string key, string message) {
        string ans;
        int c = 0;
        vector<int> t (26,-1);
        for(int i = 0; i < key.size();i++){
            if(key[i] == ' '){
                continue;
            }
            if(t[key[i] - 'a'] == -1){
                t[key[i] - 'a'] = c;
                c++;
            }
        }
        for(int i=0;i<message.size();i++)
        {
            if(message[i]==' ') ans+=' ';
            else ans+=('a'+t[message[i]-'a']);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna