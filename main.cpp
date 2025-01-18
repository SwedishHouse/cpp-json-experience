#include <iostream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    json j;
    j["name"] = "Alice";
    j["age"] = 30;
    j["city"] = "Budapest";

    std::cout << j.dump(4) << std::endl;
    return 0;
}