class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(), skill.end()); //[1,2,3,3,4,5]

        int l = 0;
        int r = n - 1;
        long long ans = 0;
        int mulval;
        int totalSkill = skill[l] + skill[r];
        while (l <= r) {
            mulval = skill[l] * skill[r];
            if (totalSkill != skill[l] + skill[r]) {
                return -1;
            }
            ans += mulval;
            l++;
            r--;
        }
        return ans;
    }
};