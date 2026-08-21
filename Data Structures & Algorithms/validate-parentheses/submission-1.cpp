class Solution {
public:
    vector<char> arr;
    int pointer = 0;
    unordered_map<char,char> pairs = {
        {')','('},
        {']','['},
        {'}','{'}
    };

    void push(char ch){
        arr.push_back(ch);
        pointer+=1;
    }

    void pop(){
        if(pointer != 0){
            arr.pop_back();
            pointer-=1;
        }
    }

    bool isValid(string s) {
        for(char ch: s){
            if(ch == '(' || ch == '{' || ch == '['){
                push(ch);
            }else{
                if(pointer == 0 || pairs[ch] != arr[pointer-1]){
                    return false;
                }
                pop();
            }
        }

        return (pointer == 0);
    }
};
