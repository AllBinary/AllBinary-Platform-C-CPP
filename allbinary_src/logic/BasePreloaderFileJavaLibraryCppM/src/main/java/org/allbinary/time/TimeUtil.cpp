
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TimeUtil
            : public Object
         {

    private: static TimeUtil instance() { return TimeUtil(); }

    public: static TimeUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TimeUtil::instance();
    
}


    private: static const Calendar calendar = Calendar::getInstance();

    public: void setCalendar(Calendar calendar, std::string yearString, std::string monthString, std::string dayString, std::string hourString){

    int32_t year = Integer(yearString).intValue();;
    

    int32_t month = Integer(monthString).intValue();;
    

    int32_t day = Integer(dayString).intValue();;
    

    int32_t hour = Integer(hourString).intValue();;
    
calendar.set(year, month, day, hour, 0);
    
}


    public: void setCalendar(Calendar calendar, std::string yearString, std::string monthString, std::string dayString, std::string hourString, std::string minuteString, std::string secondString){

    int32_t year = Integer(yearString).intValue();;
    

    int32_t month = Integer(monthString).intValue();;
    

    int32_t day = Integer(dayString).intValue();;
    

    int32_t hour = Integer(hourString).intValue();;
    

    int32_t minute = Integer(minuteString).intValue();;
    

    int32_t second = Integer(secondString).intValue();;
    
calendar.set(year, month, day, hour, minute, second);
    
}


    public: void setExpirationCalendar(Calendar calendar, std::string yearsString, std::string monthsString, std::string daysString, std::string hoursString, std::string minutesString, std::string secondsString){

    int32_t year = calendar.get(Calendar::YEAR) +Integer(yearsString).intValue();;
    

    int32_t month = calendar.get(Calendar::MONTH) +Integer(monthsString).intValue();;
    

    int32_t day = calendar.get(Calendar::DAY_OF_MONTH) +Integer(daysString).intValue();;
    

    int32_t hour = calendar.get(Calendar::HOUR) +Integer(hoursString).intValue();;
    

    int32_t minute = calendar.get(Calendar::MINUTE) +Integer(minutesString).intValue();;
    

    int32_t second = calendar.get(Calendar::SECOND) +Integer(secondsString).intValue();;
    
calendar.set(year, month, day, hour, minute, second);
    
}


    public: int64_t getTotalTime(std::string yearString, std::string monthString, std::string dayString, std::string hourString, std::string minuteString, std::string secondString){

    int64_t time = TimeUtil::calendar.getTimeInMillis();;
    
this->setExpirationCalendar(TimeUtil::calendar, yearString, monthString, dayString, hourString, minuteString, secondString);
    

    int64_t timeDelta = TimeUtil::calendar.getTimeInMillis();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return timeDelta -time;
    
}


};

            

