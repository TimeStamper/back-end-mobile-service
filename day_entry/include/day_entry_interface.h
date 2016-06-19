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

/**
 * @brief Defines a list containing the stamps of a <b>Day Entry</b> object.
 */
typedef std::vector<Stamp> StampList;

namespace interface {

/**
 * @brief Specifies the elementary item of a <b>Calender</b> object.
 *
 * Contains the necessary information needed to constitute an elementary item
 * of an arbitrary <b>Calender</b> object. Contains user specified stamp
 * information along side date data.
 */
class DayEntry {
 public:
  /**
   * \brief Destructor.
   */
  virtual ~DayEntry() = 0;

  /**
   * @brief Retrieves status on existence of time stamps.
   *
   * Returns the status value whether the object contains any time stamps or
   * not. An object void of stamps is just the basic default <b>Day Entry</b>
   * object.
   *
   * @return Boolean value representing the status of stamp existence.
   */
  virtual BooleanType containsStamps() const = 0;

  /**
   * @brief Provides access to the available stamps.
   *
   * Returns the user specified stamps available for the dedicated instance.
   *
   * @return Constant reference to the list of available stamps.
   */
  virtual const StampList& getStamps() const = 0;

  /**
   * @brief Creates a new stamp.
   *
   * The created stamp is set as the active stamp of this object, with a
   * creation time equal to the time of check in. If a new stamp is created
   * when there already exists an active stamp, the previously active stamp
   * is finalized and the new stamp is set to active.
   */
  virtual void stamp() = 0;

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
