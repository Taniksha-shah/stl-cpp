# C++ Containers Implementation: Dictionary, Players List, and Pokedex

This repository contains three C++ files demonstrating the use of different STL containers: `map`, `list`, and a combination of both (`map` of `list`) in real-world contexts. The three main components are:

1. **`dictionary.cpp`**: Implements a basic **map** container to store key-value pairs (for example, words and their definitions).
2. **`playersList.cpp`**: Implements a **list** container to manage a dynamic collection of players.
3. **`pokedex.cpp`**: Implements a **map** where the key is a string (e.g., Pokémon type) and the value is a **list** (containing different Pokémon names of that type).

## Files Overview

### 1. `dictionary.cpp`
- **Purpose**: Implements a `map` container to store key-value pairs, where the key is a string (e.g., word) and the value is a corresponding string (e.g., word definition).
- **Key Concepts**: 
  - Use of `std::map` for ordered storage.
  - Insertion, searching, and updating key-value pairs.
  - Traversing the map.

#### Example:
```cpp
std::map<std::string, std::string> dictionary;
dictionary["apple"] = "A fruit that is typically red or green.";
dictionary["banana"] = "A long yellow fruit.";
````

### 2. `playersList.cpp`

* **Purpose**: Implements a `list` container to manage a collection of players.
* **Key Concepts**:

  * Use of `std::list` for efficient insertions and deletions at both ends.
  * Traversing and manipulating the list.
  * Adding/removing players dynamically.

#### Example:

```cpp
list<int> playerList = {2,5,3,7,4,8,2,9,6};

    list<int>beginner;
    list<int>pro;
```

### 3. `pokedex.cpp`

* **Purpose**: Implements a `map` where the **key** is a string (representing Pokémon type, e.g., "Fire", "Water") and the **value** is a `list` of Pokémon names that belong to that type.
* **Key Concepts**:

  * Combination of `std::map` and `std::list` for organizing Pokémon data.
  * Mapping each Pokémon type to a list of Pokémon.
  * Efficient lookup and modification of Pokémon types and names.

#### Example:

```cpp
map<string, list<string>> pokedex;

    list<string> pikachuAttacks = {"thunder shock" , "tail whip" , "quick attack"};
    list<string> charmanderAttacks = {"scary face" , "flame thrower"};
    
```

## Compilation and Execution

1. **Prerequisites**: Ensure you have a C++ compiler installed (e.g., `g++` for Linux or MinGW for Windows).
2. **Compilation**:

   ```bash
   g++ dictionary.cpp -o dictionary
   g++ playersList.cpp -o playersList
   g++ pokedex.cpp -o pokedex
   ```
3. **Execution**:

   * Run the dictionary program:

     ```bash
     ./dictionary
     ```
   * Run the players list program:

     ```bash
     ./playersList
     ```
   * Run the pokedex program:

     ```bash
     ./pokedex
     ```

## Features

* **`dictionary.cpp`**: Implements a dictionary to search for word definitions using a map container.
* **`playersList.cpp`**: Manages a dynamic list of players and supports operations like adding/removing players.
* **`pokedex.cpp`**: Organizes Pokémon data by their type, using a combination of map and list containers.

## Usage

You can modify the code in each of these files to add more entries, search for keys, or customize the behavior to fit your needs.

For example, in `dictionary.cpp`, you can add more words and definitions to the `map` container. Similarly, in `pokedex.cpp`, you can add more Pokémon types and names.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
