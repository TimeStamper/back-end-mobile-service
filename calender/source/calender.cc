/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: calender.cc
 */

#include "include/calender.h"
#include <algorithm>

namespace time_stamper {

Calender::Calender()
: interface::Calender(),
  list_of_dates_() {
}


Calender::~Calender() {
}


void Calender::addDate(const GregorianDate& designated_date) {
  DateList::const_iterator iter;

  iter = std::find(list_of_dates_.begin(),
                   list_of_dates_.end(),
                   designated_date);

  if (iter == list_of_dates_.end()) {
    list_of_dates_.push_back(designated_date);
  }
}


const DateList& Calender::getDateList() const {
  return list_of_dates_;
}

}  // namespace time_stamper
