#include "Events.hpp"

Event::Event(const std::string& name, const std::string& date)
    : EventName(name), EventDate(date) {}
    
void Event::display() const {
    std::cout << "Event: " << EventName << ", Date: " << EventDate << std::endl;
}

void Event::setEvent(const std::string& name, const std::string& date) {
        EventName = name;
        EventDate = date;
  }