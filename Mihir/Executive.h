#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <string>
#include "StoreKossCoMembership.h"

using namespace std;

namespace storekosscomembership
{
    class Executive : public StoreKossCoMembership
    {
    private:
        int inititalPoints = 1000;
        int finalPoints = 0;

    public:
        Executive();
        int get_inititalPoints() const;
        // void set_inititalPoints(int new_inititalPoints);
        int get_finalPoints() const;
        void set_finalPoints(int new_finalPoints);
        void PointsCalculator(double cost, string purchaseOrReturn);
        double PointsReedem(int points);
        void welcomeMessage();
        void choices();
        void print_check() const;
    };
}
#endif