class ParkingSystem {
public:
        vector<int> s;

    ParkingSystem(int big, int medium, int small) {
        s={big,medium,small};
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(s[0]==0)
                return false;
            else{
                s[0] --;
                return true;
            }
        }
        else if(carType==2){
            if(s[1]==0)
                return false;
            else{
                s[1] --;
                return true;
            }
        }
        else if(carType==3){
            if(s[2]==0)
                return false;
            else{
                s[2] --;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
