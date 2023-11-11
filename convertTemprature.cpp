class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>vec;
        double fara=celsius*1.80+32.00;
        double kelv=celsius+273.15;

        vec.push_back(kelv);
        vec.push_back(fara);
        return vec;
    }
};
