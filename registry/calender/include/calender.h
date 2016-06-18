/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: calender.h
 */

#ifndef REGISTRY_CALENDER_INCLUDE_CALENDER_H_
#define REGISTRY_CALENDER_INCLUDE_CALENDER_H_

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

  virtual const DateList& getDateList() const;

 private:
  DateList list_of_dates_;

  Calender(const Calender&);

  Calender& operator =(const Calender&);
};

}  // namespace time_stamper

#endif  // REGISTRY_CALENDER_INCLUDE_CALENDER_H_
