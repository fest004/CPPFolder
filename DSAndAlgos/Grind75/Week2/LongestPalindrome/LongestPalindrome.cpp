int longestPalindrome(string s) {
        std::unordered_map<char, int> map;
        int ans = 0; 
        bool last = false;

        for (int i = 0; i < s.length(); i++) {
            if (map.find(s[i]) == map.end()) {
                map.emplace(s[i], 1);
            } else {
                map[s[i]] += 1;
            }
        }

    for (auto letter : map) {
        while (letter.second >= 2) {
            ans += 2; 
            letter.second -= 2;
        }
        if (letter.second == 1) {
            last = true;
        }
    }

    if (last)
        ans += 1;

    std::cout << ans << std::endl;
    
    return ans;
    
    }
