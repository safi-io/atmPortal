# ATM Simulation

This C++ program simulates a simple and basic ATM (Automated Teller Machine) interface which I developed in my first semester of university. It allows users to check their balance, deposit cash, withdraw cash, and exit the system.

## Features

- User authentication using mobile number and PIN
- Balance checking
- Cash deposit
- Cash withdrawal with insufficient funds check
- Menu-driven interface
- Clear screen functionality for better user experience

## How to Use

1. Compile and run the program.
2. Enter the mobile number when prompted (default: 6360228).
3. Enter the PIN when prompted (default: 3344).
4. If authentication is successful, you'll be presented with a menu:
   - 1: Check Balance
   - 2: Deposit Cash
   - 3: Withdraw Cash
   - 4: Exit
5. Choose an option by entering the corresponding number.
6. Follow the on-screen instructions for each operation.
7. The program will continue to show the menu until you choose to exit.

## Technical Details

- Language: C++
- Initial balance: $100
- Screen clearing is done using the `system("CLS")` command, which is Windows-specific. For other operating systems, you may need to modify this command.

## Notes

- The authentication system is very basic and for demonstration purposes only. In a real-world application, you would need a much more secure system.
- The balance is reset to $100 each time the `wholeBank()` function is called. This might not be the intended behavior for a real ATM system.
- Error handling is minimal. In a production environment, you'd want to add more robust error checking and handling.
