# Binary Search Project

Welcome to the **Binary Search Project**! This project demonstrates a simple implementation of the binary search algorithm in C. The program takes a sorted array and a target value as input, then efficiently finds the target's index using binary search.

---

## Features

- **Binary Search Algorithm**: Efficiently searches for a target value in a sorted array.
- **Dynamic Memory Management**: Uses dynamic memory allocation for handling arrays.
- **Custom Utility Functions**:
    - `a2i`: Converts a string to an integer.
    - `len_of_array`: Calculates the number of elements in a comma-separated string.
    - `fillArray`: Parses a string into an integer array.

---

## How It Works

1. **Input**: Provide a sorted array as a comma-separated string and a target value as command-line arguments.
2. **Processing**:
     - The program parses the input string into an integer array.
     - It performs a binary search to locate the target value.
3. **Output**:
     - If the target is found, the program prints its index.
     - If the target is not found, it notifies the user.

---

## Usage

### Compilation

To compile the program, use the following command:

```bash
gcc main.c -o main.o -lm
```

### Execution

Run the program with the following syntax:

```bash
./main.o "<sorted_array>" <target>
```

- `<sorted_array>`: A comma-separated string of integers (e.g., `1,3,5,7,9`).
- `<target>`: The integer value to search for.

### Example

```bash
./main.o "1,3,5,7,9" 5
```

**Output**:
```
Length of array is 5
Target is 5
Target - 5 is located in index 2
```

---

## Code Overview

The project is implemented in `main.c` and includes the following key functions:

- **`a2i(char* number)`**: Converts a string to an integer.
- **`len_of_array(char* array)`**: Calculates the number of elements in a comma-separated string.
- **`fillArray(int* buffer, int len, char* array)`**: Fills an integer array from a comma-separated string.
- **`main(int argc, char** argv)`**: The entry point of the program, handling input parsing, binary search, and output.

---

## Notes

- Ensure the input array is sorted in ascending order for the binary search to work correctly.
- The program assumes valid input and does not handle malformed strings or non-integer values.

---

Happy coding! 🚀  
