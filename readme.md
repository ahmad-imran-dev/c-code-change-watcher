# data-science-programming

This project provides a simple setup for automatically compiling and running C++ code whenever changes are made to the source files (`.cpp` and `.h`). It uses `nodemon` to watch for file changes and execute the compilation and run commands.

## Getting Started

1. **Prerequisites:**

   - Ensure you have g++ (GNU C++ Compiler) installed on your system.
   - Node.js and npm (Node Package Manager) are required for running the scripts.  You can download them from [nodejs.org](nodejs.org).

2. **Installation:**

   - Clone this repository:  (Replace with your repo URL if applicable)
     ```bash
     git clone <repository_url>
     ```
   - Navigate to the project directory:
     ```bash
     cd data-science-programming
     ```
   - Install the dependencies:
     ```bash
     npm install
     ```

## Usage

### `npm start`

Compiles the `main.cpp` file and creates an executable named `output`. Then, it runs the `output` executable. This command is for a single compilation and execution.

```bash
npm start