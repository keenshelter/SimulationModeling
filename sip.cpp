#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
  int point[5], quantity[5], shortage;
  float cost[5];
  cout << "1/17/FET/BCS/007\nAbhishek Malik 8CSA\nAssignment 2\n";
  cout << "Simulation of Inventory Problem\n";

  cout << "Enter reorder point ::\n";
  for (int i = 0; i < 5; i++)
    {
      cin >> point[i];
    }

  cout << "\nEnter reorder quantity ::\n";
  for (int j = 0; j < 5; j++)
    {
      cin >> quantity[j];
    }
  int demand = rand () % 100;
  int s = 0;
  for (int k = 0; k < 5; k++)
    {
      s++;
      int day = 0, duedate = 0;
      int start = 0, stock = 115, unitsdue = 45;
      cost[k] = 0;
      while (day <= 180)
	{
	  if (day == duedate)
	    {
	      stock = stock + quantity[k];
	      unitsdue = 0;
	    }
	  if (demand <= stock)
	    {
	      stock = stock - demand;
	      cost[k] = cost[k] + 0.75;
	    }
	  else
	    {
	      shortage = demand - stock;
	      cost[k] = cost[k] + shortage;
	      stock = 0;
	    }
	  if (stock + unitsdue <= point[k])
	    {
	      unitsdue = quantity[k];
	      cost[k] = cost[k] + 18;
	      duedate = day + 3;
	    }
	  day = day + 1;
	}
      cout << "\n" << s << ". Order Point=" << point[k] << " Order quantity="<< quantity[k] << " Cost in Rs.=" << cost[k];
    }
  return 0;
}