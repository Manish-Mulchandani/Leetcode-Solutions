class ParkingSystem {
public:
    int a=0,b=0,c=0;
    ParkingSystem(int big, int medium, int small) {
        a=big;
        b=medium;
        c=small;
    }
    
    bool addCar(int carType) {
        if(carType==1)
        {
            if(a>0)
            {
                a--;
                return true;
            }
            else 
                return false;
        }
        if(carType==2)
        {
            if(b>0)
            {
                b--;
                return true;
            }
            else 
                return false;
        }
        if(carType==3)
        {
            if(c>0)
            {
                c--;
                return true;
            }
            else 
                return false;
        }
        return 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */