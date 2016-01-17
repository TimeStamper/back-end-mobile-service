/**
 * Copyright 2015 Erik Ahlberg
 * Created: 10 aug. 2015
 *  Author: Erik
 *    File: day_entry.h
 */

#ifndef DAY_ENTRY_INCLUDE_DAY_ENTRY_H_
#define DAY_ENTRY_INCLUDE_DAY_ENTRY_H_

#include "include/day_entry_interface.h"
#include "include/stamp.h"

namespace time_stamper {

/**
 * \brief Definition of concrete class implementation.
 */
class DayEntry : public interface::DayEntry {
 public:
  /**
   * \brief Default constructor.
   */
  DayEntry();

  /**
   * \brief destructor.
   */
  virtual ~DayEntry();

  virtual void stampDay();

  virtual const StampList& getStamps() const;

 private:
  StampList stamps_;

  DayEntry(const DayEntry&);

  DayEntry& operator =(const DayEntry&);
};

}  // namespace time_stamper

#endif  // DAY_ENTRY_INCLUDE_DAY_ENTRY_H_
