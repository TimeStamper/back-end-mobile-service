/**
 * Copyright 2015 Erik Ahlberg
 * Created: 2 aug. 2015
 *  Author: Erik
 *    File: stamp.cc
 */

#include "include/stamp.h"

namespace time_stamper {

using boost::posix_time::ptime;
using boost::posix_time::second_clock;

Stamp::Stamp()
: check_in_(new ptime()),
  check_out_(new ptime()) {
}


Stamp::Stamp(const Stamp& Rhs)
: check_in_(new ptime(*Rhs.check_in_)),
  check_out_(new ptime(*Rhs.check_out_)) {
}


Stamp::~Stamp() {
  delete check_in_;
  delete check_out_;
}


Stamp& Stamp::operator =(const Stamp& Rhs) {
  if (this != &Rhs) {
    delete check_in_;
    delete check_out_;

    check_in_ = new ptime(*Rhs.check_in_);
    check_out_ = new ptime(*Rhs.check_out_);
  }

  return *this;
}


void Stamp::checkIn() {
  check_in_ = new ptime(second_clock::local_time());
}


void Stamp::checkOut() {
  check_out_ = new ptime(second_clock::local_time());
}

}  // namespace time_stamper
