//starting Magwinya Magic program I first include necessary librarues
# include <iostream>
using namespace std;
//main function of the program
int main() {
    //i start bycreating variables
    int first_temp;
    int second_temp;
    int third_temp;
    int difference_temp;

    //Tell user to enter first temperature reading
    cout << "Enter the first temperature reading";
    //store temperaure reading to a variable
    cin >> first_temp;

    //Tell user to enter secont temperature reading
    cout << "Enter the second temperature reading";
    //store temperaure reading to a variable
    cin >> second_temp;
    
    //calculate temperature difference
    difference_temp = (second_temp - first_temp);

    // checking temperature difference and tell user to decrease or increase it

    if(difference_temp > 50){
        cout << "Reduce the fryer heat before taking the third reading";
    } else if (difference_temp < 10){
        cout << "Increase the fryer heat before taking the third reading" ; 
    } 

    //Tell user to enter third temperature reading
    cout << "Enter the third temperature reading";
    //store temperaure reading to a variable
    cin >> third_temp;
    if(third_temp > 150 && third_temp < 190){
        cout << "Y ou may start frying the Magwinyas";
    } else {
        cout << "Oil is not ready for fryingg";
    }

    return 0;


}

