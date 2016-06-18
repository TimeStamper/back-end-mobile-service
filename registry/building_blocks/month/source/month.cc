/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: month.cc
 */

#include "include/month.h"

namespace time_stamper {

Month::Month(const UnsignedIntegerType designated_identifier)
: interface::Month(),
  identifier_(designated_identifier) {
}


Month::Month(const Month& Rhs)
: interface::Month(),
  identifier_(Rhs.identifier_) {
}


Month::~Month() {
}


Month& Month::operator =(const Month& Rhs) {
  if (this != &Rhs) {
    identifier_=Rhs.identifier_;
  }

  return *this;
}

}  // namespace time_stamper
