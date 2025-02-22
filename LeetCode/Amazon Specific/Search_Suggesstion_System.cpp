class Solution {
    public:
        vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {

            string prefix = "";
            vector<vector<string>> result;
            sort(products.begin(),products.end());
            for(auto s : searchWord)
            {
                prefix += s;
                vector<string> found;
    
                for(auto p : products)
                {
                    if(p.find(prefix) == 0)
                    {
                        found.push_back(p);
                    }
                }
    
                if(found.size() > 3)
                {
                    found.resize(3);
                }
                result.push_back(found);
            }
            return result;
        }
    };


 /*    Example 1:

Input: products = ["mobile","mouse","moneypot","monitor","mousepad"], searchWord = "mouse"
Output: [["mobile","moneypot","monitor"],["mobile","moneypot","monitor"],["mouse","mousepad"],["mouse","mousepad"],["mouse","mousepad"]]
Explanation: products sorted lexicographically = ["mobile","moneypot","monitor","mouse","mousepad"].
After typing m and mo all products match and we show user ["mobile","moneypot","monitor"].
After typing mou, mous and mouse the system suggests ["mouse","mousepad"].
Example 2:

Input: products = ["havana"], searchWord = "havana"
Output: [["havana"],["havana"],["havana"],["havana"],["havana"],["havana"]]
Explanation: The only word "havana" will be always suggested while typing the search word.
  */