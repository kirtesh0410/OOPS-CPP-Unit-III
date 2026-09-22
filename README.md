Brief description of Project :- 

• Mini Project :- Media Player with Polymorphic Controls :-

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
