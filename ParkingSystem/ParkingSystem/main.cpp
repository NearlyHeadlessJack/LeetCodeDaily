/*
1603.ParkingSystem
ver.1

by N.H.J.
2021.3.19
*/

class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {

        this->bigcar=big;
        this->midcar=medium;
        this->smallcar=small;

    }
    
    bool addCar(int carType) {
        switch (carType)
        {
            case 1:
            {
                if(this->bigcar<1)
                    return false;
                else
                {
                    bigcar--;
                    return true;
                }
                break;
            }
            case 2:
            {
                if(this->midcar<1)
                    return false;
                else
                {
                    midcar--;
                    return true;
                }
                break;
            }
            case 3:
            {
                if(this->smallcar<1)
                    return false;
                else
                {
                    smallcar--;
                    return true;
                }
                break;
            }
            default:
                {
                    return false;
                    break;
                }
        }

    }

private:
    int bigcar=0;
    int midcar=0;
    int smallcar=0;
};


/*
1603.ParkingSystem
ver.2

by N.H.J.
2021.3.19
*/

class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {

        this->car[1]=big;
        this->car[2]=medium;
        this->car[3]=small;

    }
    
    bool addCar(int carType) {
        if(this->car[carType]<1)
            return false;
        else
        {
            car[carType]--;
            return true;
        }

    }

private:
    int car[4];
};

/*
1603.ParkingSystem
ver.3

by N.H.J.
2021.3.19
*/

class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {

        ParkingSystem::bigcar=big;
        ParkingSystem::midcar=medium;
        ParkingSystem::smallcar=small;

    }
    
    bool addCar(int carType) {
        switch (carType)
        {
            case 1:
            {
                if(ParkingSystem::bigcar<1)
                    return false;
                else
                {
                    bigcar--;
                    return true;
                }
                break;
            }
            case 2:
            {
                if(ParkingSystem::midcar<1)
                    return false;
                else
                {
                    midcar--;
                    return true;
                }
                break;
            }
            case 3:
            {
                if(ParkingSystem::smallcar<1)
                    return false;
                else
                {
                    smallcar--;
                    return true;
                }
                break;
            }
            default:
                {
                    return false;
                    break;
                }
        }

    }

private:
    int bigcar=0;
    int midcar=0;
    int smallcar=0;
};


