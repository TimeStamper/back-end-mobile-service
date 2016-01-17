/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: calender.h
 */

#ifndef CALENDER_H_
#define CALENDER_H_

namespace timer_stamper {

class Calender {
public:
  /**
   * \brief Default constructor.
   */
  Calender();

  /**
   * \brief destructor.
   */
  virtual ~Calender();

private:
  Calender(const Calender&);

  Calender& operator =(const Calender&);
};

}  // namespace timer_stamper

#endif  // CALENDER_H_
