class UndergroundSystem {
public:
    map<int, pair<string,double>> A;
    map<pair<string, string>, vector<double>> B;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        A[id]={stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string a=A[id].first;
        double b=A[id].second;
        B[{a, stationName}].push_back(t-b);
    }
    
    double getAverageTime(string startStation, string endStation) {
        int cnt=B[{startStation, endStation}].size();
        double a=0;
        for(auto &i:B[{startStation, endStation}])
        {
            a+=i;
        }
        return double(a)/double(cnt);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */