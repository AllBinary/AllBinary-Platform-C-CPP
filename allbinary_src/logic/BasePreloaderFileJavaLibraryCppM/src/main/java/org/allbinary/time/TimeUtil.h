
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Calendar.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TimeUtil
            : public virtual Object
         {

    private: static TimeUtil* instance_owner();
    private: static TimeUtil* instance;

    public: static TimeUtil* getInstance();

    private: static Calendar* calendar;


            
    public: TimeUtil();
        
    public: void setCalendar(Calendar* calendar, std::string yearString, std::string monthString, std::string dayString, std::string hourString);

    public: void setCalendar(Calendar* calendar, std::string yearString, std::string monthString, std::string dayString, std::string hourString, std::string minuteString, std::string secondString);

    public: void setExpirationCalendar(Calendar* calendar, std::string yearsString, std::string monthsString, std::string daysString, std::string hoursString, std::string minutesString, std::string secondsString);

    public: int64_t getTotalTime(std::string yearString, std::string monthString, std::string dayString, std::string hourString, std::string minuteString, std::string secondString);

};

            


        #endif //ORG_ALLBINARY_TIME_TIMEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TIME_TIMEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_TIME_TIMEUTIL_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif

        #endif
    
