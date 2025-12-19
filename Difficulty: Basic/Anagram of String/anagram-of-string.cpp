// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s1, string s2) {
    // Your code goes here
    
    int freq1[26] = {0};
    int freq2[26] = {0};
    
    for(int i=0;i<s1.size();i++){
        freq1[s1[i] - 'a']++;
    }
    
    for(int i=0;i<s2.size();i++){
        freq2[s2[i] - 'a']++;
    }
    
    int del = 0;
    
    for(int i=0;i<26;i++){
        del += abs(freq1[i] - freq2[i]);
    }
    
    return del;
    
}