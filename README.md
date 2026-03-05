# Compiler-Design
This repository contains implementations of several fundamental concepts from Compiler Design using the C++ programming language. The goal of this project is to understand and demonstrate the working principles of different phases of a compiler and important grammar-processing algorithms used in language translation.

In this project, multiple compiler construction experiments are implemented to illustrate how a programming language is analyzed and processed from raw source code to structured syntactic representations.

The implementations included in this repository are:

1. Lexical Analyzer

The lexical analyzer scans the input source code and breaks it into tokens such as keywords, identifiers, numbers, operators, and special symbols. It represents the first phase of the compiler, responsible for converting raw text into meaningful tokens.

2. Regular Expression to NFA

This module demonstrates the construction of a Non-deterministic Finite Automaton (NFA) from a given regular expression. This process is important in the implementation of lexical analyzers and pattern recognition in compilers.

3. NFA to DFA Conversion

This program converts a Non-deterministic Finite Automaton (NFA) into an equivalent Deterministic Finite Automaton (DFA) using standard conversion techniques. DFA simplifies pattern matching and is used in lexical analysis.

4. Ambiguity in Grammar

This program demonstrates ambiguous grammar and shows how a single input string can generate multiple parse trees. Understanding ambiguity is important in designing grammars for programming languages.

5. Grammar Transformation

This module implements techniques such as:

Elimination of Left Recursion

Left Factoring

These transformations are required to convert grammars into forms suitable for predictive parsing.

6. FIRST and FOLLOW Computation

This program computes the FIRST and FOLLOW sets for a given grammar. These sets are essential for constructing predictive parsing tables and for designing LL(1) parsers.

7. Predictive Parsing

This implementation demonstrates a Predictive Parser, which parses input strings using a parsing table constructed from FIRST and FOLLOW sets. Predictive parsing is an important top-down parsing technique used in compiler construction.

Objective of the Project

The objective of this repository is to provide practical implementations of theoretical compiler design concepts. Through these experiments, the following topics are studied and practiced:

Lexical analysis

Finite automata theory

Regular expressions

Grammar transformations

Parsing techniques

Syntax analysis

These implementations help in understanding how a compiler processes a programming language step by step, starting from tokenization to syntax validation
