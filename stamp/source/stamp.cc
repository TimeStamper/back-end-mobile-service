/**
 * Copyright 2015 Erik Ahlberg
 * Created: 2 aug. 2015
 *  Author: Erik
 *    File: stamp.cc
 */

#include "include/stamp.h"

namespace time_stamper {

Stamp::Stamp()
: interface::Stamp(),
  active_status_(false),
  check_in_(new TimeStamp()),
  check_out_(new TimeStamp()) {
}


Stamp::Stamp(const Stamp& Rhs)
: interface::Stamp(),
  active_status_(Rhs.active_status_),
  check_in_(new TimeStamp(*Rhs.check_in_)),
  check_out_(new TimeStamp(*Rhs.check_out_)) {
}


Stamp::~Stamp() {
  delete check_in_;
  delete check_out_;
}


Stamp& Stamp::operator =(const Stamp& Rhs) {
  if (this != &Rhs) {
    delete check_in_;
    delete check_out_;

    active_status_ = Rhs.active_status_;
    check_in_ = new TimeStamp(*Rhs.check_in_);
    check_out_ = new TimeStamp(*Rhs.check_out_);
  }

  return *this;
}


void Stamp::checkIn() {
  active_status_ = true;

  check_in_ = new TimeStamp(boost::posix_time::second_clock::local_time());
}


void Stamp::checkOut() {
  active_status_ = false;

  check_out_ = new TimeStamp(boost::posix_time::second_clock::local_time());
}


const TimeStamp& Stamp::getCheckInTime() const {
  return *check_in_;
}


const TimeStamp& Stamp::getCheckOutTime() const {
  return *check_out_;
}


StampDuration Stamp::getDuration() const {
  return (*check_out_ - *check_in_);
}


BooleanType Stamp::isActive() const {
  return active_status_;
}

}  // namespace time_stamper
