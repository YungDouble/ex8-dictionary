# ex8-dictionary

## Question:
- Create a simple dictionary with insert, search, and remove. 
- Use this main to test your function
- 
```cplus
int main() {
    MyDictionary dict;
    dict.insert("apple", "fruit");
    dict.insert("banana", "fruit");
    std::cout << dict.search("banana") << std::endl; // Output: "fruit"
    dict.remove("apple");
    std::cout << dict.search("apple") << std::endl; // Output: "Not found"
    return 0;
}
```
