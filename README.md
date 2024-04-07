# ORGANIZED

Welcome to the "ORGANIZED" project, a fundamental programming challenge in C focusing on data management and algorithm efficiency. This project is a part of the Elementary Programming in C module, designed to sharpen your skills in manipulating and sorting data using linked lists and sorting algorithms.

## Project Overview

The "ORGANIZED" project simulates a scenario where your laboratory is cluttered with various tools, components, and documents. Your objective is to create a system that not only sorts these items effectively but also makes them easily accessible. Through this project, you will delve into the creation of linked lists, develop sorting algorithms, and implement a shell to manage your virtual workspace.

### Objectives

- Implement functionality to add, delete, and display hardware items.
- Develop a sorting system to organize items based on multiple criteria.
- Handle a significant quantity of items efficiently.

### Materials

Items in your virtual laboratory fall into five categories:

- Actuators: buttons, levers, etc.
- Devices: radios, watches, recorders, etc.
- Processors: Intel, AMD, etc.
- Sensors: movement sensors, sound sensors, thermal sensors, etc.
- Wires: Type-C, HDMI, jack, etc.

Each item is identified by a type, name, and a unique ID, starting at 0 and incrementing with each new addition.

## Implementation

### Shell Commands

You will interact with your workshop through a provided shell, implementing the following commands:

- `add`: Add new hardware.
- `del`: Delete hardware.
- `disp`: Display the contents of your workshop.
- `sort`: Sort materials present in the workshop according to specified criteria.

### Storing and Handling Materials

Implement the `add`, `del`, and `disp` commands to manage hardware items. Items should be stored in a linked list, allowing for efficient manipulation.

### Sorting Algorithm

The `sort` command should enable sorting by TYPE (ASCII), NAME (ASCII), and ID (numerically ascending), with an optional `-r` flag for reverse sorting. It's crucial to explore and implement efficient sorting algorithms beyond simple bubble sorts for optimal performance.

## Getting Started

### Prerequisites

- Knowledge of C programming.
- Understanding of linked lists and basic sorting algorithms.

### Installation

1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Compile the program using the `make` command.

## Usage

Here's a quick example of how to use the shell to organize your workshop:

```bash
./organized
Workshop » add WIRE usb, ACTUATOR button, DEVICE recorder
Workshop » sort NAME
Workshop » disp
```
