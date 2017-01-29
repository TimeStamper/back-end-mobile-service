/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: calendar.cc
 *
 */

#include <algorithm>
#include "include/calendar.h"
#include "include/day_entry.h"

namespace time_stamper {

Calendar::Calendar()
: interface::Calendar(),
  default_date_entry_(new DayEntry()),
  list_of_dates_() {
}


Calendar::~Calendar() {
  delete default_date_entry_;
}


void Calendar::addDate(const GregorianDate& designated_date) {
  DayEntry date_entry;

  date_entry.stamp();

  list_of_dates_.insert(std::make_pair(designated_date,
                                       date_entry));
}


const DayEntry& Calendar::getDate(const GregorianDate& designated_date) const {
  const DayEntry* day_entry = default_date_entry_;

  const DateList::const_iterator iterator =
      list_of_dates_.find(designated_date);

  if (iterator != list_of_dates_.end()) {
    day_entry = &list_of_dates_.at(designated_date);
  }

  return *day_entry;
}

}  // namespace time_stamper
