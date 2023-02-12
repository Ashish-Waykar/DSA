#ifndef TIMER_H
#define TIMER_H
#include <cassert>
#include <ctime>
 
class Timer 
{
public:
	Timer();
		/*   Function: Constructor initializes data 
			Precondition: None
			Postcondition: Defines private variables */
	
	void Start();
		/*   Function: Starts the timer 
			Precondition: Timer has been initialized
			Postcondition: Timer has been started */
	
	void Stop();
		/*   Function: Stops the timer 
			Precondition: Timer has been initialized
			Postcondition: Timer has been stopped */
	
	void Reset();
		/*   Function: Resets the clock 
			Precondition: Timer has been initialized
			Postcondition: Timer has been restarted */
 
	double Timestamp() const;
		/*   Function: Returns the amount of time (in seconds) that has
						elapsed since the clock has started.
			Precondition: The timer has been started but does not need 
								to be stopped. The timer continues to run
			Postcondition: The total time since the clock started is returned */
 
	double Elapsed() const;
		/*   Function: Returns the amount of time (in seconds) that has
						elapsed since the clock has started.
			Precondition: The timer has been started and must be stopped
			Postcondition: The total elapsed time after the clock has stopped 
								is returned */
 
private:
	clock_t m_start; // the first reading by the clock
	clock_t m_end; // the last reading by the clock
};
 
#endif
 
//=========================  Implementation  ================================//
 
Timer::Timer()
{
	Reset();
}// end of Timer
 
void Timer::Start()
{
	m_start = clock();
}// end of Start
 
void Timer::Stop()
{
	m_end = clock();
}// end of Stop
 
void Timer::Reset()
{
	m_start = 0;
	m_end = 0;
}// end of Reset
 
double Timer::Timestamp() const
{
	clock_t temp = clock();
	assert(temp >= m_start);
	return (double)(temp-m_start)/((double)CLOCKS_PER_SEC);
}// end of Timestamp
 
double Timer::Elapsed() const
{
	assert(m_end >= m_start);
	return (double)(m_end-m_start)/((double)CLOCKS_PER_SEC);
}