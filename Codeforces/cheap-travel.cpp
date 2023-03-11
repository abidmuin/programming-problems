// https://codeforces.com/problemset/problem/466/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int totalUse = 0, specialTicketUse = 0;
	int singleRideCost = 0, specialRideCost = 0;

	cin >> totalUse >> specialTicketUse >> singleRideCost >> specialRideCost;

	int totalCostSingleTicket = 0;
	int totalCostSpecialTicket = 0;
	int totalCostMixedTicket = 0;

	totalCostSingleTicket = (totalUse * singleRideCost);

	if ((totalUse % specialTicketUse) == 0)
	{
		totalCostSpecialTicket = (totalUse / specialTicketUse) * specialRideCost;
	}
	else
	{
		totalCostSpecialTicket = ((totalUse / specialTicketUse) + 1) * specialRideCost;
	}

	int totalSpecialTickets = (totalUse / specialTicketUse);
	totalCostMixedTicket = ((totalUse - (totalSpecialTickets * specialTicketUse)) * singleRideCost) + (totalSpecialTickets * specialRideCost);

	cout << min({totalCostSingleTicket, totalCostSpecialTicket, totalCostMixedTicket}) << endl;

	return 0;
}