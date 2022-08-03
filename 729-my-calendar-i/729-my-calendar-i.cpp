class MyCalendar {
public:
    vector<pair<int,int>> A;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        bool flag=true;
        for(auto &i:A)
        {
            if(start>=i.first && start<i.second)
            {
                flag=false;
                break;
            }
            if(end>i.first && end <=i.second)
            {
                flag=false;
                break;
            }
            if(start<i.first && end>i.second)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            A.push_back({start,end});
        }
        return flag;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */