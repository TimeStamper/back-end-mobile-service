/**
 * Copyright 2015 Erik Ahlberg
 * Created: 10 aug. 2015
 *  Author: Erik
 *    File: day_entry.cc
 */

#include "include/day_entry.h"

namespace time_stamper {

DayEntry::DayEntry()
: interface::DayEntry(),
  has_stamps_(false),
  active_stamp_(),
  stamps_() {
}


DayEntry::DayEntry(const DayEntry& Rhs)
: interface::DayEntry(),
  has_stamps_(Rhs.has_stamps_),
  active_stamp_(Rhs.active_stamp_),
  stamps_(Rhs.stamps_) {
}


DayEntry::~DayEntry() {
}


DayEntry& DayEntry::operator =(const DayEntry& Rhs) {
  if (this != &Rhs) {
    has_stamps_ = Rhs.has_stamps_;
    active_stamp_ = Rhs.active_stamp_;
    stamps_ = Rhs.stamps_;
  }

  return *this;
}


BooleanType DayEntry::containsStamps() const {
  return has_stamps_;
}


void DayEntry::stamp() {
  has_stamps_ = true;

  if (!active_stamp_.isActive()) {
    active_stamp_.checkIn();
  } else {
    active_stamp_.checkOut();

    stamps_.push_back(active_stamp_);
  }
}


const StampList& DayEntry::getStamps() const {
  return stamps_;
}

}  // namespace time_stamper
