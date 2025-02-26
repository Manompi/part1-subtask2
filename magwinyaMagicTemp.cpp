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
    cout << "Enter the first temperature reading"<<endl;
    //store temperaure reading to a variable
    cin >> first_temp;

    //Tell user to enter second temperature reading
    cout << "Enter the second temperature reading"<<endl;
    //store temperature reading to a variable
    cin >> second_temp;
    
    //calculate temperature difference
    difference_temp = (second_temp - first_temp);

    // checking temperature difference and tell user to decrease or increase it

    if(difference_temp > 50){
        cout << "Reduce the fryer heat before taking the third reading"<<endl;
    } else if (difference_temp < 10){
        cout << "Increase the fryer heat before taking the third reading"<<endl ; 
    } 

    //prompt user to enter third temperature reading
    cout << "Enter the third temperature reading"<<endl;
    //store temperaure reading to a variable
    cin >> third_temp;
    if(third_temp > 150 && third_temp < 190){
        cout << "You may start frying the Magwinyas"<<endl;
    } else {
        cout << "Oil is not ready for frying"<<endl;
    }

    return 0;


}

