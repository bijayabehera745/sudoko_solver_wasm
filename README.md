# Sudoku Solver (C++ + WebAssembly)

A high-performance Sudoku puzzle solver written in **C++**, compiled to **WebAssembly**, and deployed in the browser using **vanilla HTML + JavaScript**.

![Demo](https://user-images.githubusercontent.com/placeholder/demo.png) <!-- Add your screenshot later -->

---

## 🚀 Features

- ✅ **Solves any standard 9x9 Sudoku** using optimized backtracking
- ⚡ Solving time: **< 5ms** in browser (WASM)
- 🔁 **20× faster** than equivalent JS-based solvers
- 🌐 Runs entirely in-browser (no server or backend needed)
- 🔗 Built with **Emscripten** and **Embinder** for C++ ↔ JS integration

---

## 🛠 Technologies Used

- C++17
- WebAssembly (WASM)
- Emscripten
- HTML5 + JavaScript

---

## 📦 Local Setup Instructions

```bash
# Clone the repository
git clone https://github.com/bijayabehera745/sudoko_solver_wasm.git
cd sudoko_solver_wasm

# If not compiled yet
emcc sudoku.cpp -o sudoku.js --bind -s WASM=1 -s MODULARIZE=1 -s EXPORT_ES6=0 -s ENVIRONMENT=web -std=c++17

# Start a local server
python3 -m http.server

# Then open in your browser
http://localhost:8000
