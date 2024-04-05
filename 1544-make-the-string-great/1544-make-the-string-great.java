class Solution {
    public String makeGood(String s) {
               Stack<Character>st=new Stack<>();
        for(int i=s.length()-1;i>=0;i--)
        {
            if(st.empty())
                st.push(s.charAt(i));
            else if(Math.abs(st.peek()-s.charAt(i))==32)
            st.pop();
            else
                st.push(s.charAt(i));
        }
        String ans="";
        while(!st.empty())
        {
            ans+=st.peek();
            st.pop();
        }
        return ans;
    }
}