#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    double sum = 0;
    if (argc == 1)
    {
        cout << "Please input numbers to find average.\n";
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            double n = atoi(argv[i]);
            sum += n;
        }
        double average = sum / (argc - 1);
        cout << "---------------------------------\n";
        cout << "Average of " << argc - 1 << " numbers = " << average;
        cout << "\n---------------------------------";
    }
    return 0;
}
