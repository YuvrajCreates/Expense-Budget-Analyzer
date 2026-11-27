#include <iostream>
using namespace std;

const int max_expenses = 100;

char expensesNames[max_expenses][50];
float expenses[max_expenses];
int expensescount = 0;
float monthlyBudget = 0;
float remainingBudget = 0;

void setmonthlybudget(){
    cout << "Enter your Monthly Budget (Rs.): ";
    cin >> monthlyBudget;

    remainingBudget = monthlyBudget;

    cout << "Your Budget: Rs. " << monthlyBudget << endl;
}

void addnewexpenses(){
    if(monthlyBudget == 0){
        cout << "Please set your monthly budget first.\n";
        return;
    }

    if(expensescount >= max_expenses){
        cout << "You cannot add more expenses.\n";
        return;
    }

    cout << "\n--- Add New Expense ---\n";

    cout << "Enter Expense Name: ";
    cin >> expensesNames[expensescount];

    cout << "Enter Amount (Rs.): ";
    cin >> expenses[expensescount];

    remainingBudget = remainingBudget - expenses[expensescount];
    expensescount++;

    cout << "Expense added successfully.\n";
}

void viewbudgetsummary(){
    cout << "\n--- Budget Summary ---\n";
    cout << "Monthly Budget: Rs. " << monthlyBudget << endl;
    cout << "Remaining Budget: Rs. " << remainingBudget << endl;
}

void viewallexpenses(){
    if(expensescount == 0){
        cout << "\nNo expenses have been added yet.\n";
        return;
    }

    cout << "\n--- All Expenses ---\n";

    for(int i = 0; i < expensescount; i++){
        cout << i + 1 << ". ";
        cout << expensesNames[i] << " - Rs. ";
        cout << expenses[i] << endl;
    }
}

void analysespending(){
    float totalspent = 0;

    if(expensescount == 0){
        cout << "\nNo expenses have been added yet.\n";
        return;
    }

    for(int i = 0; i < expensescount; i++){
        totalspent = totalspent + expenses[i];
    }

    cout << "\n--- Spending Analysis ---\n";
    cout << "Total Expenses: " << expensescount << endl;
    cout << "Total Amount Spent: Rs. " << totalspent << endl;

    if(totalspent > monthlyBudget){
    cout << "Warning: You have exceeded your monthly budget by Rs. ";
    cout << totalspent - monthlyBudget << endl;
}
else if(totalspent >= monthlyBudget * 0.8){
    cout << "Warning: You are near your monthly budget limit.\n";
    cout << "You have used 80% or more of your budget.\n";
}
else{
    cout << "You are within your monthly budget.\n";
}
    
}

void Menu(){
    cout << "\n========================================\n";
    cout << "       EXPENSE & BUDGET ANALYZER\n";
    cout << "========================================\n";
    cout << "1. Set Monthly Budget\n";
    cout << "2. Add New Expense\n";
    cout << "3. View All Expenses\n";
    cout << "4. Analyze Spending\n";
    cout << "5. View Budget Summary\n";
    cout << "6. Exit\n";
    cout << "========================================\n";
    cout << "Select an option: ";
}

int main(){
    int choice = 0;
    bool running = true;

    cout << "Welcome to the Expense & Budget Analyzer!\n";

    while(running){
        Menu();
        cin >> choice;

        switch(choice){
            case 1:
                setmonthlybudget();
                break;

            case 2:
                addnewexpenses();
                break;

            case 3:
                viewallexpenses();
                break;

            case 4:
                analysespending();
                break;

            case 5:
                viewbudgetsummary();
                break;

            case 6:
                cout << "Thank you for using the program. Goodbye!\n";
                running = false;
                break;

            default:
                cout << "Invalid option. Please choose a number from 1 to 6.\n";
        }
    }

    return 0;
}