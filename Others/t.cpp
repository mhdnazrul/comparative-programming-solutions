#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>
#include <numeric> // For std::accumulate

using namespace std;

// Function to calculate the cost of a number
double calculateCost(const string &num)
{
  if (num.empty())
  {
    return numeric_limits<double>::max(); // Handle empty string case
  }
  long long n = stoll(num); // Convert the string to a long long
  long long sumOfDigits = 0;
  for (char c : num)
  {
    sumOfDigits += (c - '0');
  }
  if (sumOfDigits == 0)
  {
    return numeric_limits<double>::max();
  }
  return static_cast<double>(n) / sumOfDigits;
}

// 1. Brute-Force Approach (with Optimization)
int bruteForceSolution(const string &number)
{
  int n = number.length();
  double minCost = numeric_limits<double>::max();
  int minRemovedDigits = 0;

  // Iterate through all possible number of digits to remove
  for (int removedDigits = 0; removedDigits < n; ++removedDigits)
  {
    // Generate all combinations of indices to remove
    vector<int> indicesToRemove(removedDigits);
    // Initialize the indicesToRemove vector.
    for (int i = 0; i < removedDigits; ++i)
    {
      indicesToRemove[i] = i;
    }

    // Use a do-while loop to generate all combinations.
    do
    {
      string currentNumber = "";
      vector<bool> keep(n, true); // Vector to mark digits to keep

      for (int indexToRemove : indicesToRemove)
      {
        keep[indexToRemove] = false; // Mark the digits to remove
      }

      for (int i = 0; i < n; ++i)
      {
        if (keep[i])
        {
          currentNumber += number[i];
        }
      }
      if (currentNumber.empty())
      {
        continue;
      }

      double currentCost = calculateCost(currentNumber);

      // Update minimum cost and removed digits if necessary
      if (currentCost < minCost)
      {
        minCost = currentCost;
        minRemovedDigits = removedDigits;
        if (minCost == 1.0)
        {
          return minRemovedDigits;
        }
      }
    } while (next_permutation(indicesToRemove.begin(), indicesToRemove.end())); // Important: Generates the next combination
  }
  return minRemovedDigits;
}

// 2. Greedy Approach
int greedySolution(const string &number)
{
  string currentNumber = number;
  int removedDigits = 0;
  double minCost = calculateCost(currentNumber);

  while (currentNumber.length() > 1)
  {
    int bestDigitIndex = -1;
    double bestCost = numeric_limits<double>::max();
    for (int i = 0; i < currentNumber.length(); ++i)
    {
      string tempNumber = currentNumber;
      tempNumber.erase(i, 1); // Remove the digit at index i
      double tempCost = calculateCost(tempNumber);
      if (tempCost < bestCost)
      {
        bestCost = tempCost;
        bestDigitIndex = i;
      }
    }

    if (bestCost < minCost)
    {
      currentNumber.erase(bestDigitIndex, 1);
      minCost = bestCost;
      removedDigits++;
    }
    else
    {
      break;
    }
  }
  return removedDigits;
}

int main()
{
  string number;
  cin >> number;

  // Call the brute force solution
  cout << "Brute Force Solution: " << bruteForceSolution(number) << endl;

  // Call the greedy solution
  cout << "Greedy Solution: " << greedySolution(number) << endl;

  return 0;
}
