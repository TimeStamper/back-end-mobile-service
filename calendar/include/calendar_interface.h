/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: calendar_interface.h
 *
 */

#ifndef CALENDAR_INCLUDE_CALENDAR_INTERFACE_H_
#define CALENDAR_INCLUDE_CALENDAR_INTERFACE_H_

#include <map>
#include "include/calendar_types.h"

namespace time_stamper {

// Forward declarations.
class DayEntry;

namespace interface {

/**
 * @brief A dedicated calendar.
 *
 * Provides an atypical calendar functionality for the client by acting as a
 * dedicated handler for <b>Gregorian</b> date objects. This module contains
 * intelligent functionality for adding, and retrieving, dates into its list.
 */
class Calendar {
 public:
  /**
   * @brief Destructor.
   */
  virtual ~Calendar() = 0;

  /**
   * @brief Adds a date to the calendar.
   *
   * Checks if the date already exists in the calendar. If not, adds it,
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
  Calendar();

 private:
  Calendar(const Calendar&);

  Calendar& operator =(const Calendar&);
};


inline Calendar::~Calendar() { }


inline Calendar::Calendar() { }


}  // namespace interface

}  // namespace time_stamper

#endif  // CALENDAR_INCLUDE_CALENDAR_INTERFACE_H_
