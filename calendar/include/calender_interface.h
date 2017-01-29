/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: calender_interface.h
 */

#ifndef CALENDER_INCLUDE_CALENDER_INTERFACE_H_
#define CALENDER_INCLUDE_CALENDER_INTERFACE_H_

#include <map>
#include "include/calender_types.h"

namespace time_stamper {

// Forward declarations.
class DayEntry;

namespace interface {

/**
 * @brief A dedicated calender.
 *
 * Provides an atypical calender functionality for the client by acting as a
 * dedicated handler for <b>Gregorian</b> date objects. This module contains
 * intelligent functionality for adding, and retrieving, dates into its list.
 */
class Calender {
 public:
  /**
   * @brief Destructor.
   */
  virtual ~Calender() = 0;

  /**
   * @brief Adds a date to the calender.
   *
   * Checks if the date already exists in the calender. If not, adds it,
   * otherwise nothing is done.
   *
   * @param designated_date The date to be added.
   */
  virtual void addDate(const GregorianDate& designated_date) = 0;

  /**
   * @brief Retrieves the corresponding entry for the given date.
   *
   * Returns the <b>Day Entry</b> object corresponding to the user specified
   * date. If it does not exist, a default <b>Day Entry</b> object is returned.
   */
  virtual const DayEntry& getDate(
      const GregorianDate& designated_date) const = 0;

 protected:
  Calender();

 private:
  Calender(const Calender&);

  Calender& operator =(const Calender&);
};


inline Calender::~Calender() { }


inline Calender::Calender() { }


}  // namespace interface

}  // namespace time_stamper

#endif  // CALENDER_INCLUDE_CALENDER_INTERFACE_H_
