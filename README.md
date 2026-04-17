# Compiler-Design
This repository contains implementations of several fundamental concepts from Compiler Design using the C++ programming language. The goal of this project is to understand and demonstrate the working principles of different phases of a compiler and important grammar-processing algorithms used in language translation.

In this project, multiple compiler construction experiments are implemented to illustrate how a programming language is analyzed and processed from raw source code to structured syntactic representations.

The implementations included in this repository are:

1.Lexical Analyzer

Breaks input source code into tokens such as keywords, identifiers, numbers, operators, and special symbols. 
   
2.Regular Expression to NFA

Converts a given regular expression into a Non-deterministic Finite Automaton.
   
3.NFA to DFA Conversion

Transforms an NFA into an equivalent DFA for efficient pattern recognition.
   
4.Ambiguity in Grammar

Demonstrates ambiguous grammars and multiple parse trees.
   
5.Grammar Transformation 

Includes elimination of left recursion and left factoring for predictive parsing.
   
6.FIRST and FOLLOW Computation

Computes FIRST and FOLLOW sets required for parsing table construction.
   
7.Predictive Parsing

Implements LL(1) parsing using parsing tables.
   
8.LR(0) Items

Demonstrates item sets used in bottom-up parsing techniques.
   
9.Postfix Conversion

Converts infix expressions into postfix form.
   
10.Intermediate Code Generation

Generates Quadruple, Triple, and Indirect Triple representations.
   
11.Simple Code Generator

Produces basic pseudo assembly instructions.
   
12.DAG Representation

Shows optimization using Directed Acyclic Graph (common subexpression elimination).
   
13.Data Flow Analysis

Demonstrates definition and usage of variables in a program.
   
14.Storage Allocation Strategies

Explains static, stack, and heap memory allocation.

Objective of the Project

The objective of this project is to implement and understand the major phases of a compiler, including tokenization, grammar processing, parsing, and intermediate code generation. It provides hands-on experience in automata theory, parsing techniques, and program analysis.

These implementations help in understanding how a compiler processes a programming language step by step, starting from tokenization to syntax validation.
