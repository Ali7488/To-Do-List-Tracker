#include <iostream>
#include <string>

class Event {
private:
    std::string EventName;
    std::string EventDate;
public:
    Event(const std::string& name, const std::string& date);

    void display() const;

    void getEvent(std::string& name, std::string& date);

    void setEvent(const std::string& name, const std::string& date);

    };