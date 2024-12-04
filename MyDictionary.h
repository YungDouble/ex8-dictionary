#ifndef MYDICTIONARY_H
#define MYDICTIONARY_H

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <functional>

class MyDictionary {
  private:
    // Define a pair for storing key-value pairs
    struct KeyValuePair {
      std::string key;
      std::string value;
    };

    // Hash table: a vector of lists to handle collisions
    std::vector<std::List<KeyValuePair>> table;
    size_t tableSize;

    // Hash function to map keys to bucket indices
    size_t hashFunction(const std::string& key) const;

    public:
      // Constructor
      MyDictionary(size_t size = 10);

      // Destructor
      ~MyDictionary() = default;

      // Function to insert a key-value pair
      void insert(const std::string& key, const std::string& value);

      // Function to search for a value by key
      std::string search(const std::string& key) const;

      // Function to remove a key-value pair
      void remove(const std::string& key);
};

#endif //MYDICTIONARY_H
