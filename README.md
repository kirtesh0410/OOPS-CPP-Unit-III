Brief description of Program :- 

• CAD Shape Drawing System :-

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
