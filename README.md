# OOPs-CPP-Unit-III
Object Oriented Programming with C++ - Unit III

Student Name :- Kirtesh Bharambe

ZPRN :- 125UET1089

Class/Division :- SY AIDS C

Unit :- III

List of Programs :- 

                    1)CAD Shape Drawing System
                    2)Complex Number Calculator
                    3)Input Validation Service
                    4)Mini Project :- Media Player with Polymorphic Controls

Brief descriptions of each Program :- 

• 1)CAD Shape Drawing System :-

This C++ program implements a **CAD Shape Drawing System** for handling different shapes such as **circles, rectangles, and triangles**.

* The **`Shape` base class** provides a common interface for all shapes.
* **Derived classes** (`Circle`, `Rectangle`, and `Triangle`) inherit from the `Shape` class.
* The `Shape` class is an **abstract base class** because it contains the pure virtual functions `area()` and `draw()`.
* **Pure virtual functions** ensure that each derived class provides its own implementation for drawing the shape and calculating its area.
* **Function overriding** is used by each derived class to define its own `area()` and `draw()` functions.
* **Runtime polymorphism** allows different shape objects to be accessed through a common `Shape` interface.
* A **vector of smart pointers** (`unique_ptr`) is used to store and manage different shape objects safely.
* A **virtual destructor** ensures proper destruction of derived objects.

**In short:** The program demonstrates how **abstract classes, inheritance, pure virtual functions, function overriding, runtime polymorphism, and smart pointers** can be used to create a flexible CAD system for drawing shapes and calculating their areas.

• 2)Complex Number Calculator :-

This C++ program implements a **Complex Number Calculator** for performing arithmetic operations such as **addition, subtraction, multiplication, and comparison** of complex numbers.

* The **`Complex` class** represents a complex number using two private data members: `real` and `imag`.
* **Encapsulation** is used by keeping the real and imaginary parts private and accessing them through class member functions.
* **Operator overloading** is used to redefine the `+`, `-`, `*`, and `==` operators for complex number operations.
* **Binary operator overloading** allows complex numbers to be added, subtracted, and multiplied using natural expressions such as `c1 + c2` and `c1 * c2`.
* The **constructor with default arguments** allows objects to be created with or without providing real and imaginary values.
* **Constant member functions** are used because operations such as `display()` and the overloaded operators do not modify the original objects.
* The `display()` function is used to show the real and imaginary parts of the complex number.

**In short:** The program demonstrates how **operator overloading, constructors with default arguments, constant member functions, and encapsulation** can be used to perform natural and convenient arithmetic operations on complex numbers.

• 3)Input Validation Service :-

This C++ program implements an **Input Validation Service** for validating different types of user data such as **marks, payment amounts, and names**.

* The **`Validator` class** provides a common `validate()` function for checking different types of input.
* **Function overloading** is used to create multiple `validate()` functions with different parameter types such as `int`, `double`, and `string`.
* **Compile-time polymorphism** allows the compiler to select the appropriate `validate()` function based on the type of input provided.
* Marks are validated to ensure they are within the range of **0 to 100**.
* Payment amounts are checked to ensure they are **greater than 0 and within the allowed limit**.
* Name validation uses **string processing** and the `isalpha()` function to ensure that the name contains only alphabets and spaces.
* The program uses **`boolalpha`** to display validation results as `true` or `false`.
* Different types of input can be validated using the same readable `validate()` interface.

**In short:** The program demonstrates **function overloading and compile-time polymorphism** to create a simple and flexible input validation system for different types of user data.

• 4)Mini Project :- Media Player with Polymorphic Controls :-

This C++ mini-project implements a **Media Player System** for managing different types of media such as **audio, video, and image files**.

* The **`Media` base class** provides common operations such as `play()`, `pause()`, `stop()`, and `showDetails()`.
* **Derived classes** (`Audio`, `Video`, and `Image`) inherit from the `Media` class and provide their own implementations of these operations.
* **Inheritance** is used to share common media-related functionality among different media types.
* The `Media` class can be designed as an **abstract base class** using pure virtual functions for media-specific operations.
* **Function overriding** allows each derived class to perform operations according to its media type.
* **Runtime polymorphism** allows different media objects to be controlled using a common `Media` interface.
* A **collection of base-class pointers** is used to store and manage different types of media items together.
* A **virtual destructor** ensures proper cleanup of derived media objects.

**In short:** The project demonstrates how **inheritance, abstract classes, function overriding, runtime polymorphism, and base-class pointers** can be used to create a flexible media player capable of handling different types of media through a common interface.
