class Solution {
public:
    int findComplement(int num) {
         int num_bits = std::log2(num) + 1;
         bitset<32> binary(num); 
         string str = binary.to_string().substr(32 - num_bits);
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='1')
                str[i]='0';
            else
                str[i]='1';
        }
      //  bitset<32> binary(str); 
    long long decimal_value = std::stoll(str, nullptr, 2);
        return decimal_value;
    }
};