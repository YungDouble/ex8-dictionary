### Assignment: Create a Simple Dictionary with C++ Pointers (Collision Detection and Handling)

**Instructions:**
- Create a class `MyDictionary` that implements a basic dictionary using pointers.
- The dictionary must support **collision detection and handling** using techniques such as **chaining** or **open addressing**.
- Implement the following functions:
  1. **`insert(key, value)`**: Insert key-value pairs into the dictionary.
  2. **`search(key)`**: Search for a key and return its corresponding value.
  3. **`remove(key)`**: Remove a key-value pair from the dictionary.

**Test Program:**
Use the following `main()` to test your implementation:

```cpp
int main() {
    MyDictionary dict;

    // Test 1: Insert and Search
    dict.insert("apple", "fruit");
    dict.insert("banana", "fruit");
    dict.insert("carrot", "vegetable");
    dict.insert("date", "fruit");

    std::cout << dict.search("banana") << std::endl;  // Output: "fruit"
    std::cout << dict.search("carrot") << std::endl;  // Output: "vegetable"
    std::cout << dict.search("date") << std::endl;    // Output: "fruit"

    // Test 2: Handle collision (depends on hash function implementation)
    dict.insert("carrot", "root vegetable");
    std::cout << dict.search("carrot") << std::endl;  // Output: "root vegetable" (updated value)

    // Test 3: Remove and Search
    dict.remove("apple");
    std::cout << dict.search("apple") << std::endl;   // Output: "Not found" (after removal)

    // Test 4: Remove non-existing key
    dict.remove("orange");  // Should handle gracefully, no errors

    // Test 5: Search non-existing key
    std::cout << dict.search("orange") << std::endl;  // Output: "Not found"

    // Test 6: Insert multiple items and check for collisions or handling
    dict.insert("eggplant", "vegetable");
    dict.insert("fig", "fruit");
    dict.insert("grape", "fruit");

    std::cout << dict.search("grape") << std::endl;   // Output: "fruit"

    return 0;
}
```

**Tests Included:**
1. **Inserting more key-value pairs**.
2. **Handling key collisions** by updating an existing key’s value.
3. **Removing a non-existent key** to ensure error handling.
4. **Searching for non-existent keys** after performing removal operations.
5. **Inserting more items** to stress test the collision-handling mechanism.

Please ensure your dictionary handles collisions and edge cases efficiently.
