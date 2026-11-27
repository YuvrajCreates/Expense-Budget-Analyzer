
# 💰 Expense & Budget Analyzer (C++)

A beginner-friendly C++ mini project designed to help users manage their monthly budget, record expenses, and analyze spending habits through a console-based application.

## 📌 Project Overview

The Expense & Budget Analyzer allows users to set a monthly budget, record daily expenses, view expense records, calculate total spending, and monitor their remaining budget.

The project aims to apply fundamental C++ programming concepts to solve a practical, real-world problem.

## 🎯 Objectives

- Create a simple expense-tracking application.
- Allow users to set a monthly budget.
- Record and display multiple expenses.
- Calculate total expenditure and remaining budget.
- Analyze spending by category.
- Notify users when they approach or exceed their budget.
- Practice problem-solving and structured programming in C++.

## 🛠️ Technologies Used

- **Language:** C++
- **Code Editor:** Visual Studio Code
- **Compiler:** GCC / g++
- **Application Type:** Console-based application

## ⚙️ Planned Features

### Phase 1 — Core Features

- [ ] Set a monthly budget
- [ ] Add a new expense
- [ ] View all recorded expenses
- [ ] Calculate total expenses
- [ ] Calculate remaining budget
- [ ] Exit the application

### Phase 2 — Spending Analysis

- [ ] Categorize expenses (Food, Travel, Education, Entertainment, Other)
- [ ] Calculate category-wise spending
- [ ] Find the highest individual expense
- [ ] Calculate budget utilization percentage
- [ ] Display budget warnings
- [ ] Generate a financial summary

### Phase 3 — Advanced Features

- [ ] Save expense records to a file
- [ ] Load previously saved records
- [ ] Edit an expense
- [ ] Delete an expense
- [ ] Generate a monthly report

*Advanced features will be implemented only after the core application works correctly.*

## 🧠 C++ Concepts

The project will focus on the following concepts:

- Variables and data types
- Arithmetic and logical operators
- Conditional statements (`if-else`, `switch`)
- Loops (`for`, `while`)
- Functions
- Arrays
- Input validation
- Character arrays for text input, where needed

**Optional extension:** Classes, objects, and constructors may be introduced if appropriate for the final design.

Initially, the project will avoid `std::vector` and `std::string` to reinforce fundamental C++ concepts. Fixed-size arrays will be used to store expense records.

## 🖥️ Proposed Application Menu

```text
========================================
       EXPENSE & BUDGET ANALYZER
========================================

1. Set Monthly Budget
2. Add New Expense
3. View All Expenses
4. Analyze Spending
5. View Budget Summary
6. Exit

Enter your choice:
```

The menu will repeat until the user chooses to exit.

## 📊 Example Output

```text
========== BUDGET SUMMARY ==========

Monthly Budget:       Rs. 10000
Total Expenses:       Rs.  6500
Remaining Budget:     Rs.  3500
Budget Utilization:      65%

Status: You are within your budget.

===================================
```

*The values above are illustrative examples, not actual program output.*

## 🗂️ Expense Data Design

Each expense record is expected to contain:

| Field | Purpose |
|---|---|
| Expense ID | Identifies an expense |
| Category | Classifies the expense |
| Amount | Stores the expense amount |
| Description | Briefly describes the expense |

The program will use a fixed-size array and a counter to track the number of recorded expenses.

The maximum number of records will be defined in advance and checked before adding new expenses.

## 🗺️ Development Roadmap

### Phase 1: Planning and Setup
- [ ] Create the project directory
- [ ] Create the main C++ source file
- [ ] Design the menu
- [ ] Define the expense data structure

### Phase 2: Expense Management
- [ ] Implement expense entry
- [ ] Store multiple expense records
- [ ] Display recorded expenses
- [ ] Validate input

### Phase 3: Budget Calculations
- [ ] Implement budget configuration
- [ ] Calculate total expenditure
- [ ] Calculate the remaining budget
- [ ] Calculate budget utilization

### Phase 4: Spending Analysis
- [ ] Implement category-wise calculations
- [ ] Find the highest expense
- [ ] Add budget alerts
- [ ] Display a financial summary

### Phase 5: Testing
- [ ] Test valid and invalid inputs
- [ ] Test empty expense records
- [ ] Test zero and negative amounts
- [ ] Test spending equal to the budget
- [ ] Test spending beyond the budget
- [ ] Test the maximum record capacity
- [ ] Verify all calculations

### Phase 6: Documentation and Presentation
- [ ] Finalize the README
- [ ] Capture screenshots of the running application
- [ ] Prepare the project PowerPoint
- [ ] Explain the system flowchart
- [ ] Prepare for the project demonstration and viva

## 🧪 Testing Checklist

| Test Case | Expected Result |
|---|---|
| Add a valid expense | Expense is recorded |
| Enter a negative amount | Input is rejected |
| Calculate total expenses | Correct total is displayed |
| Spend less than the budget | Remaining balance is positive |
| Spend the entire budget | Remaining balance is zero |
| Exceed the budget | Overspending warning is displayed |
| Enter an invalid menu option | Error message is displayed |
| Exceed array capacity | Additional entry is prevented |

## 📽️ PowerPoint Presentation Plan

The project presentation will cover:

1. Title Slide
2. Introduction
3. Problem Statement
4. Objectives
5. Technologies and C++ Concepts
6. System Architecture and Flowchart
7. Implementation and Code Explanation
8. Application Screenshots and Demonstration
9. Testing and Results
10. Conclusion and Future Scope

## ✅ Project Success Criteria

The project will be considered complete when:

- Users can set a monthly budget.
- Multiple expenses can be recorded and displayed.
- Total spending and remaining budget are calculated correctly.
- Spending analysis and budget warnings work as intended.
- Invalid inputs are handled appropriately.
- The program compiles and runs successfully.
- The implementation can be explained confidently during the viva.
- The PowerPoint accurately represents the implemented features.

## 🚀 Future Scope

Possible future improvements include:

- A graphical user interface (GUI)
- Database integration
- Date-wise expense tracking
- Monthly and yearly comparisons
- Charts for visualizing spending patterns
- Exportable financial reports

## 👨‍💻 Learning Goal

The primary learning goal is to strengthen C++ fundamentals by developing a complete, practical application step by step.

Rather than copying a finished solution, each feature will be planned, implemented, tested, and understood before moving to the next stage.
