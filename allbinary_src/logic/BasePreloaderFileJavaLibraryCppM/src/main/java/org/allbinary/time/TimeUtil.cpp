
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
        



        #ifndef ORG_ALLBINARY_TIME_TIMEUTIL_CPP
        #define ORG_ALLBINARY_TIME_TIMEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/time/TimeUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TimeUtil::TimeUtil() {
        }
        auto TimeUtil::instance_owner() -> TimeUtil* { static std::unique_ptr<TimeUtil> value(new TimeUtil()); return value.get(); }
TimeUtil* TimeUtil::instance = TimeUtil::instance_owner();

    auto TimeUtil::getInstance() -> TimeUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TimeUtil::instance;
    
}


    auto TimeUtil::setCalendar(Calendar* calendar, std::string yearString, std::string monthString, std::string dayString, std::string hourString) -> void{

    int32_t year = (int32_t(yearString)).intValue();;
    

    int32_t month = (int32_t(monthString)).intValue();;
    

    int32_t day = (int32_t(dayString)).intValue();;
    

    int32_t hour = (int32_t(hourString)).intValue();;
    
calendar->set(year, month, day, hour, 0);
    
}


    auto TimeUtil::setCalendar(Calendar* calendar, std::string yearString, std::string monthString, std::string dayString, std::string hourString, std::string minuteString, std::string secondString) -> void{

    int32_t year = (int32_t(yearString)).intValue();;
    

    int32_t month = (int32_t(monthString)).intValue();;
    

    int32_t day = (int32_t(dayString)).intValue();;
    

    int32_t hour = (int32_t(hourString)).intValue();;
    

    int32_t minute = (int32_t(minuteString)).intValue();;
    

    int32_t second = (int32_t(secondString)).intValue();;
    
calendar->set(year, month, day, hour, minute, second);
    
}


    auto TimeUtil::setExpirationCalendar(Calendar* calendar, std::string yearsString, std::string monthsString, std::string daysString, std::string hoursString, std::string minutesString, std::string secondsString) -> void{

    int32_t year = calendar->get(Calendar::YEAR) +(int32_t(yearsString)).intValue();;
    

    int32_t month = calendar->get(Calendar::MONTH) +(int32_t(monthsString)).intValue();;
    

    int32_t day = calendar->get(Calendar::DAY_OF_MONTH) +(int32_t(daysString)).intValue();;
    

    int32_t hour = calendar->get(Calendar::HOUR) +(int32_t(hoursString)).intValue();;
    

    int32_t minute = calendar->get(Calendar::MINUTE) +(int32_t(minutesString)).intValue();;
    

    int32_t second = calendar->get(Calendar::SECOND) +(int32_t(secondsString)).intValue();;
    
calendar->set(year, month, day, hour, minute, second);
    
}

Calendar* TimeUtil::calendar = Calendar::getInstance();

    auto TimeUtil::getTotalTime(std::string yearString, std::string monthString, std::string dayString, std::string hourString, std::string minuteString, std::string secondString) -> int64_t{

    int64_t time = TimeUtil::calendar->getTimeInMillis();;
    
this->setExpirationCalendar(TimeUtil::calendar, yearString, monthString, dayString, hourString, minuteString, secondString);
    

    int64_t timeDelta = TimeUtil::calendar->getTimeInMillis();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return timeDelta -time;
    
}




        #endif //ORG_ALLBINARY_TIME_TIMEUTIL_CPP
