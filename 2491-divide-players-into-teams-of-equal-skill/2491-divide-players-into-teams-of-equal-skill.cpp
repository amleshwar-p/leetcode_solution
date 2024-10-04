class Solution {
public:
    long long dividePlayers(vector<int>& skill) {

        int n = skill.size();
        sort(skill.begin(), skill.end());

        int l = 0;
        int r = n - 1;
        int totalSkill = skill[l] + skill[r];
        long ans = 0;
        int mulVal;
        while (l < r) {
            mulVal = (skill[l] * skill[r]);

            if (totalSkill != skill[l] + skill[r]) {
                return -1;
            }
            ans += mulVal;
            l++;
            r--;
        }
        return ans;
    }
};