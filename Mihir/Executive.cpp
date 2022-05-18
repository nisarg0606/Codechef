#include <bits/stdc++.h>
using namespace std;
#include "Executive.h"
namespace storekosscomembership
{
    Executive ::Executive() : inititalPoints(1000), finalPoints(1000)
    {
    }

    void Executive ::PointsCalculator(double cost, string purchaseOrReturn)
    {
        if (purchaseOrReturn == "purchase")
        {
            finalPoints = (int)(inititalPoints + 1 * cost);
            inititalPoints = finalPoints;
            cout << "Your new points are: " << finalPoints << endl;
        }
        else if (purchaseOrReturn == "return")
        {
            finalPoints = (int)(inititalPoints - 1 * cost);
            inititalPoints = finalPoints;
            cout << "Your new points are: " << finalPoints << endl;
        }
        else
        {
            cout << "ERROR: Invalid input for purchaseOrReturn.\n";
            exit(1);
        }
    }

    double Executive ::PointsReedem(int points)
    {
        finalPoints = finalPoints - points;
        return (.01) * points;
    }

    void Executive::welcomeMessage()
    {
        cout << "Welcome to Executive Membership!\n";
        cout << "You have " << inititalPoints << " points.\n";
    }

    void Executive::choices()
    {
        string purchaseOrReturn;
        double cost;
        cout << "Would you like to purchase or return a product?\n";
        cin >> purchaseOrReturn;
        cout << "How much did you spend?\n";
        cin >> cost;
        PointsCalculator(cost, purchaseOrReturn);
    }

    int Executive ::get_inititalPoints() const
    {
        return inititalPoints;
    }

    int Executive ::get_finalPoints() const
    {
        return finalPoints;
    }
}
