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