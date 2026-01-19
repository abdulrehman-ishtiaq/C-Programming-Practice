# C Programming Practice 🚀

Welcome to my journey of learning C programming! This repository contains my solutions to various logic problems and coding challenges.

## 📂 Recent Update: Problem 2.24 & 2.25

### **Topic: Swapping Two Integers (Advanced Method)**
Most beginners swap two numbers using a third "temporary" variable. In this solution, I implemented the logic to swap two integers **without using a temporary variable**.

### **The Logic (Math Method)**
Instead of extra memory, I used arithmetic operators to swap the values:

```c
a = a + b;  // Step 1: Combine both values
b = a - b;  // Step 2: Subtract original 'b' to get 'a'
a = a - b;  // Step 3: Subtract new 'b' (original 'a') to get original 'b'
