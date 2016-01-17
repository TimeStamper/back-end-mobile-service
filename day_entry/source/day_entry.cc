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
  stamps_() {
}


DayEntry::~DayEntry() {
}


void DayEntry::stampDay() {
}


const StampList& DayEntry::getStamps() const {
  return stamps_;
}

}  // namespace time_stamper
