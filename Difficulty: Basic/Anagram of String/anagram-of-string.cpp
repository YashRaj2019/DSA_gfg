// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s1, string s2) {
    // Your code goes here
    int f1[26]={0}, f2[26]={0};
    
    for(char c : s1){
       f1[c-'a']++; 
    }
    for(char c : s2){
        f2[c-'a']++;
    }
    
    int del =0;
    
    for(int i=0;i<26;i++){
        del += abs(f1[i] - f2[i]);
    }
    return del;
    
};

