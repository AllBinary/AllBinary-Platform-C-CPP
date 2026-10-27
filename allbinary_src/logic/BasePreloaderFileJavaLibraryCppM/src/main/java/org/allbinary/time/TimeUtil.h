
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
        



        #ifndef ORG_ALLBINARY_TIME_TIMEUTIL_H
        #define ORG_ALLBINARY_TIME_TIMEUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TimeUtil
            : public Object
         {

    private: static TimeUtil* instance() { static std::unique_ptr<TimeUtil> value(new TimeUtil()); return value.get(); }

    public: static TimeUtil* getInstance();

    private: static inline Calendar* calendar = Calendar::getInstance();

    public: void setCalendar(Calendar* calendar, std::string yearString, std::string monthString, std::string dayString, std::string hourString);

    public: void setCalendar(Calendar* calendar, std::string yearString, std::string monthString, std::string dayString, std::string hourString, std::string minuteString, std::string secondString);

    public: void setExpirationCalendar(Calendar* calendar, std::string yearsString, std::string monthsString, std::string daysString, std::string hoursString, std::string minutesString, std::string secondsString);

    public: int64_t getTotalTime(std::string yearString, std::string monthString, std::string dayString, std::string hourString, std::string minuteString, std::string secondString);

};

            


        #endif //ORG_ALLBINARY_TIME_TIMEUTIL_H
