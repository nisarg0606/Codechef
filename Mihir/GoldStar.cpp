#include <bits/stdc++.h>
using namespace std;
#include "GoldStar.h"
namespace storekosscomembership
{
    GoldStar ::GoldStar() : inititalPoints(500), finalPoints(500)
    {
    }

    void GoldStar ::PointsCalculator(double cost, string purchaseOrReturn)
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

    double GoldStar ::PointsReedem(int points)
    {
        finalPoints = finalPoints - points;
        inititalPoints = finalPoints;
        return (.01) * points;
    }

    void GoldStar::welcomeMessage()
    {
        cout << "Welcome to GoldStar Membership!\n";
        cout << "You have " << inititalPoints << " points.\n";
    }

    void GoldStar::choices()
    {
        string purchaseOrReturn;
        double cost;
        cout << "Would you like to purchase or return a product?\n";
        cin >> purchaseOrReturn;
        cout << "How much did you spend?\n";
        cin >> cost;
        PointsCalculator(cost, purchaseOrReturn);
    }
    int GoldStar ::get_inititalPoints() const
    {
        return inititalPoints;
    }

    int GoldStar ::get_finalPoints() const
    {
        return finalPoints;
    }
}
