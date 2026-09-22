Brief description of Program :- 

• Input Validation Service :-

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
