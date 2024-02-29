class Solution {
public:
    int compress(vector<char>& chars) {
            int n = chars.size();
    int writeIndex = 0; 

    for (int readIndex = 0; readIndex < n; ) {
        char currentChar = chars[readIndex];
        int count = 0; 
        while (readIndex < n && chars[readIndex] == currentChar) {
            readIndex++;
            count++;
        }

        chars[writeIndex++] = currentChar;
        if (count > 1) {
            string countStr = to_string(count);
            for (char ch : countStr) {
                chars[writeIndex++] = ch;
            }
        }
    }

    return writeIndex; 
    }
};