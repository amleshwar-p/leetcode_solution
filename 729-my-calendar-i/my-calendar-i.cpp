class MyCalendar {
private:
    vector<pair<int,int>> events;

public:
    MyCalendar() {}

    bool book(int start, int end) {
        for (const auto& event : events) {
            if (start < event.second && end > event.first) {
                return false;
            }
        }
        events.push_back(make_pair(start, end));
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */