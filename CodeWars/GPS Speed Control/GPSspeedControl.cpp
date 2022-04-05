#include <iostream>
#include <cmath>
#include <vector>
class GpsSpeed
{
public:
    static int gps(int s, std::vector<double> &x)
    {
        if(x.size() > 1)
        {
            double calc, maxAvr = 0;
            
            for(int i =1; i < x.size();i++)
            {
                calc = x[i] - x[i-1];
                calc*=3600;
                calc = calc/s;
                if(i == 1)
                maxAvr = calc;
                else
                    if(maxAvr < calc )
                        maxAvr = calc;
            }

            return floor(maxAvr);
        }
        else
        return 0;
    }
};


int main()
{   GpsSpeed gs;
    std::vector<double> x = {0.0, 0.23, 0.46, 0.69, 0.92, 1.15, 1.38, 1.61};
    std::cout<<gs.gps(20,x)<<std::endl;
        x = {0.0, 0.11, 0.22, 0.33, 0.44, 0.65, 1.08, 1.26, 1.68, 1.89, 2.1, 2.31, 2.52, 3.25};
    std::cout<<gs.gps(15,x)<<std::endl;
    return 0;
}

