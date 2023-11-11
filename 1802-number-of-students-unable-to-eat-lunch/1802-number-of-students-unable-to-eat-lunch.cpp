class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int unableToEatCount = 0;
        
        while (!students.empty() && unableToEatCount < n) {
            if (students[0] == sandwiches[0]) {
                
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                unableToEatCount = 0;  
            } else {
                
                students.push_back(students[0]);
                students.erase(students.begin());
                unableToEatCount++;
            }
        }

        return students.size();
    }
};
