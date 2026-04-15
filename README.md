# 🚀 LeetCode Solutions in C++

My personal journey through algorithmic challenges and technical interview preparation.

## 📊 Statistics

| Difficulty | Solved |
|------------|--------|
| 🟢 Easy    | 4      |
| 🟡 Medium  | 1      |
| 🔴 Hard    | 0      |
| **Total** | **5** |

---

## 📂 Repository Structure

* [**/Easy**](./Easy) — Fundamental algorithms and data structures.
* [**/Medium**](./Medium) — Optimization and complex problem-solving.
* [**/Hard**](./Hard) — Advanced mathematical and algorithmic concepts.

---

## ✅ Solved Problems

### Easy
1. **[1. Two Sum](./Easy/cpp/1_Two_Sum)** - **Approach:** $O(n^2)$ Brute Force (Iterative search).
   - **Note:** Solved with a nested loop; planning an $O(n)$ Hash Map optimization.
2. **[2. Palindrome Number](./Easy/cpp/0002-Palindrome-Number/)** - **Approach:** $O(\log_{10} n)$ Reverting the Half of the Number.
   - **Note:** Optimized mathematical approach that compares only half of the digits to avoid integer overflow.
3. **[3. Roman to Integer](./Easy/cpp/0003-Roman-To-Integer/)** — **Approach:** $O(n)$ Single Pass (Linear scan with look-ahead).
   - **Note:** Uses a hash map for symbol values; compares the current character with the next to handle subtractive cases (e.g., IV, XC).
4. **[14. Longest Common Prefix](./Easy/cpp/0004-Longest-Common-Prefix/)** — **Approach:** $O(S)$ Horizontal Scanning (Squeeze method).
   - **Note:** Uses the first string as an initial prefix and iteratively shortens it until it matches the start of the next string.

### Medium
1. **[1. Add Two Numbers](./Meduim/cpp/0001-add-two-nums/)** - **Approach:** $O(\max(m, n))$ Linear Traversal.
   - **Note:** Implemented using a **Dummy Node** to simplify list construction and a **Carry** variable for digit addition logic.

---

## 🛠 Tech Stack
- **Language:** C++20
- **IDE:** CLion / VS Code
- **Build System:** CMake
- **Compiler:** GCC / MSVC

---
*Last updated: 2026-04-15*