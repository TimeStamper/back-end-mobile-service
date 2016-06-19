/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: calender.h
 */

#ifndef CALENDER_INCLUDE_CALENDER_H_
#define CALENDER_INCLUDE_CALENDER_H_

#include "include/calender_interface.h"

namespace time_stamper {

class Calender : public interface::Calender {
 public:
  /**
   * \brief Default constructor.
   */
  Calender();

  /**
   * \brief destructor.
   */
  virtual ~Calender();

  virtual void addDate(const GregorianDate& designated_date);

  virtual const DayEntry& getDate(const GregorianDate& designated_date) const;

 private:
  typedef std::map<GregorianDate,
                   DayEntry> DateList;

  DayEntry* default_date_entry_;
  DateList list_of_dates_;

  Calender(const Calender&);

  Calender& operator =(const Calender&);
};

}  // namespace time_stamper

#endif  // CALENDER_INCLUDE_CALENDER_H_
