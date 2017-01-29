/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: calendar.h
 */

#ifndef CALENDAR_INCLUDE_CALENDAR_H_
#define CALENDAR_INCLUDE_CALENDAR_H_

#include "include/calendar_interface.h"

namespace time_stamper {

class Calendar : public interface::Calendar {
 public:
  /**
   * \brief Default constructor.
   */
  Calendar();

  /**
   * \brief destructor.
   */
  virtual ~Calendar();

  virtual void addDate(const GregorianDate& designated_date);

  virtual const DayEntry& getDate(const GregorianDate& designated_date) const;

 private:
  typedef std::map<GregorianDate,
                   DayEntry> DateList;

  DayEntry* default_date_entry_;
  DateList list_of_dates_;

  Calendar(const Calendar&);

  Calendar& operator =(const Calendar&);
};

}  // namespace time_stamper

#endif  // CALENDAR_INCLUDE_CALENDAR_H_
