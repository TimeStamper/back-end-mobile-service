/**
 * Created: 26 juli 2015
 *  Author: Erik
 *    File: calender.h
 */

#ifndef CORE_CALENDER_CALENDER_H_
#define CORE_CALENDER_CALENDER_H_

namespace time_stamper {

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

} // namespace time_stamper

#endif // CORE_CALENDER_CALENDER_H_
