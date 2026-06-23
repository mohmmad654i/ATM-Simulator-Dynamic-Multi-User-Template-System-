# ATM-Simulator-Dynamic-Multi-User-Template-System-

# ATM Simulator (Dynamic Multi-User Template System)

A C++ console application that simulates an Automated Teller Machine (ATM) using structures, multi-function architecture, and precise memory scope management.

## 💡 Concept & Architecture
Unlike traditional banking systems that connect to persistent databases, this project is engineered as a **Dynamic Public ATM Simulator**. It uses a local template architecture perfect for public kiosk environments:
* **Session-Based State:** Each user session is fresh. When a user logs in, they get a fresh instance of the account structure initialized with standard default configurations (Balance: $1000, PIN: 1234).
* **Automatic Reset (Zero-Trust Model):** Once the user selects "Exit", the session context is entirely destroyed from the memory stack, automatically resetting the ATM to welcome the next customer with zero data leakage.

## 🛠️ Technical Features
* **Modular Codebase:** Organized into dedicated functions (`wle`, `enter_password`, `to_choose`, `new_pass`) to separate responsibilities.
* **Security Lock Mechanism:** Includes a countdown security block that triggers after 3 consecutive invalid inputs.
* **Data Protection:** Implements password confirmation logic before any critical state changes.
