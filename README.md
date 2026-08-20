# 🛡️ SecurityTerminal

**A modular C++ command-line application built to practise programming fundamentals and multi-file software architecture.**

> **GORN — Build. Protect. Grow.**

---

## 📌 About the Project

`SecurityTerminal` is a learning project developed in C++ to consolidate the programming concepts I have studied so far.

The project started as a collection of independent exercises and was later reorganised into a **single multi-file application**, where each component has its own responsibility.

The main goal is to keep improving and refactoring the same project as I learn more advanced C++ concepts.

---

## ⚙️ Current Features

### 🔐 Access System

* Numeric PIN authentication
* Maximum number of login attempts
* Successful and failed access handling
* Boolean access state

### 🧭 Main Menu

* Interactive command-line menu
* `switch`-based navigation
* Menu remains active until logout
* Access to the different programme modules

### 🛡️ Security Level

* Security levels from `1` to `3`
* Input validation
* LOW / MEDIUM / HIGH status
* Security upgrade tracking

### ☢️ Reactor Control

* Reactor ON/OFF state
* User-controlled reactor operations
* Boolean state management
* Reactor activity tracking

### 💰 Credit System

* Shared credit balance
* Different operation costs
* Credits remain updated between module executions
* Interactive service menu

### 📊 Statistics

* Executed commands
* Failed login attempts
* Reactor restarts
* Security upgrades
* Shared data between different modules

---

## 🧱 Project Structure

```text
SecurityTerminal/
│
├── main.cpp
│
├── SistemadiAccesso.cpp
├── SistemadiAccesso.h
│
├── MenuPrincipale.cpp
├── MenuPrincipale.h
│
├── LivelloSicurezza.cpp
├── LivelloSicurezza.h
│
├── Reattore.cpp
├── Reattore.h
│
├── Crediti.cpp
├── Crediti.h
│
├── Statistiche.cpp
├── Statistiche.h
│
├── DatiCondivisi.cpp
└── DatiCondivisi.h
```

Each module is separated into a `.cpp` implementation file and a `.h` header file.

`DatiCondivisi` manages the programme state that needs to be accessed by multiple modules.

---

## 🧠 C++ Concepts Used

This project currently includes:

* Variables and data types

  * `int`
  * `double`
  * `bool`
* `cout` and `cin`
* Arithmetic operators
* Comparison operators
* Logical operators

  * `&&`
  * `||`
  * `!`
* Compound assignment

  * `+=`
  * `-=`
* Increment operators

  * `++`
* `if / else if / else`
* `switch / case / break / default`
* `while`
* `do-while`
* Functions
* Function declarations
* Boolean return values
* Header files
* Multi-file compilation
* Shared variables with `extern`

---

## 🔄 Programme Flow

```text
main.cpp
   │
   ▼
Access System
   │
   ├── Access denied → Exit
   │
   └── Access granted
            │
            ▼
       Main Menu
       │   │   │   │
       ▼   ▼   ▼   ▼
   Security Reactor Credits Statistics
```

---

## 🛠️ Compilation

The project currently uses `g++`.

From the project directory:

```bash
g++ *.cpp -o SecurityTerminal.exe
```

Run on Windows:

```bash
.\SecurityTerminal.exe
```

---

## 🚧 Current Version

### `v0.1 — First Working Multi-File Build`

The first complete version successfully connects the different modules into a single executable C++ application.

The current focus is functionality and understanding the architecture rather than optimisation.

---

## 🗺️ Roadmap

### v0.2

* Prevent credits from becoming negative
* Improve failed-login statistics
* Improve reactor statistics
* Track executed commands correctly
* Improve invalid input handling
* Clean up names and repeated code

### Future versions

As I learn new C++ concepts, I plan to progressively refactor and expand the project with:

* Arrays
* More advanced functions
* `struct`
* Object-Oriented Programming
* Classes
* File saving and loading
* Persistent user data
* Improved authentication
* Error handling
* More advanced security logic
* Graphical interface

---

## 🎯 Purpose

This repository is not intended to represent a finished commercial security system.

It documents my progression while learning C++ and software development, showing how a simple command-line programme can gradually evolve into a more structured application.

The project will continue to change as my knowledge improves.

---

## 👤 Author

**Guilherme Randon**

Software Engineering & Cybersecurity learning journey.

### GORN

**Build. Protect. Grow.**
