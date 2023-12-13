#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a map with state populations
    map<string, int> statePopulations = {
        {"maharashtra", 39512223},
        {"punjab", 28995881},
        {"tamilnadu", 21477737},
        {"karnataka",9453561},
        {"kashmir", 12671821}
    };

    // Prompt user for a state name
    cout << "Enter the name of a state: ";
    string inputState;
    cin>>inputState;

    // Look up the population and display the result
    auto it = statePopulations.find(inputState);
    if (it != statePopulations.end()) {
        cout << "Population of " << inputState << ": " << it->second << endl;
    } else {
        cout << "Population data not available for " << inputState << endl;
    }
    return 0;
}
