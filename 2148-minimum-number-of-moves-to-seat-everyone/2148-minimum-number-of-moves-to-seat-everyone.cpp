class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {

        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int totalMove=0;
        for(int i=0;i<seats.size();i++){
            totalMove+= abs(seats[i]-students[i]);
        }
        return totalMove;
    }
};