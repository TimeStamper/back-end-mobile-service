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
 * @brief Definition of concrete class implementation.
 */
class DayEntry : public interface::DayEntry {
 public:
  /**
   * @brief Default constructor.
   */
  DayEntry();

  /**
   * @brief Copy constructor.
   *
   * @param Rhs The object to be copied from.
   */
  DayEntry(const DayEntry&);

  /**
   * @brief destructor.
   */
  virtual ~DayEntry();

  /**
   * @brief Assignment operator.
   *
   * @param Rhs The object to be assigned from.
   * @return Reference to this newly assigned object.
   */
  DayEntry& operator =(const DayEntry&);

  virtual BooleanType containsStamps() const;

  virtual const StampList& getStamps() const;

  virtual void stamp();

 private:
  BooleanType has_stamps_;
  Stamp active_stamp_;
  StampList stamps_;
};

}  // namespace time_stamper

#endif  // DAY_ENTRY_INCLUDE_DAY_ENTRY_H_
