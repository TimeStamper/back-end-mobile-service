/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: calender_interface.h
 */

#ifndef REGISTRY_CALENDER_INCLUDE_CALENDER_INTERFACE_H_
#define REGISTRY_CALENDER_INCLUDE_CALENDER_INTERFACE_H_

#include "include/calender_types.h"

namespace time_stamper {

namespace interface {

/**
 * @brief A dedicated calender.
 *
 * Provides an atypical calender functionality for the client by acting as a dedicated handler for
 * <b>Gregorian</b> date objects. This module contains intelligent functionality for adding dates
 * into its list and somewhat rudimentary access methods for added dates.
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
   * @brief Retrieves the list of dates.
   *
   * Provides access to the existing dates of the <b>Calender</b> object to the user.
   *
   * @return List of existing dates.
   */
  virtual const DateList& getDateList() const = 0;

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

#endif  // REGISTRY_CALENDER_INCLUDE_CALENDER_INTERFACE_H_
