/**
 * Copyright 2015 Erik Ahlberg
 * Created: 10 aug. 2015
 *  Author: Erik
 *    File: day_entry_interface.h
 */


#ifndef DAY_ENTRY_INCLUDE_DAY_ENTRY_INTERFACE_H_
#define DAY_ENTRY_INCLUDE_DAY_ENTRY_INTERFACE_H_

#include <vector>
#include "include/stamp.h"

namespace time_stamper {

typedef std::vector<Stamp> StampList;

namespace interface {

/**
 * \brief Specifies the elementary item of a <b>Calender</b> object.
 *
 * Contains the necessary information needed to constitute an elementary item of an arbitrary
 * <b>Calender</b> object. Contains user specified stamp information along side date data.
 */
class DayEntry {
 public:
  /**
   * \brief Destructor.
   */
  virtual ~DayEntry() = 0;

  /**
   * \brief Conducts a stamping within the confines of a day.
   *
   * Initiates a new stamp, i.e. a check in, if no previous day stamp is active. If a stamp is
   * already active, this method will finalize it, i.e. conduct a check out.
   */
  virtual void stampDay() = 0;

  /**
   * \brief Provides access to the available stamps.
   *
   * Returns the user specified stamps available for the dedicated instance.
   *
   * \return Constant reference to the list of available stamps.
   */
  virtual const StampList& getStamps() const = 0;

 protected:
  /**
   * \brief Default constructor.
   */
  DayEntry();

 private:
  DayEntry(const DayEntry&);

  DayEntry& operator =(const DayEntry&);
};


inline DayEntry::~DayEntry() { }


inline DayEntry::DayEntry() { }

}  // namespace interface

}  // namespace time_stamper

#endif  // DAY_ENTRY_INCLUDE_DAY_ENTRY_INTERFACE_H_
