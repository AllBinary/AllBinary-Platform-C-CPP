
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TimeUtil
            : public Object
         {
        

    private: static const instance: TimeUtil = new TimeUtil();

    public static TimeUtil getInstance();

    private: static const calendar: Calendar = Calendar.getInstance()!;

    public setCalendar(Calendar calendar, string yearString, string monthString, string dayString, string hourString);

    public setCalendar(Calendar calendar, string yearString, string monthString, string dayString, string hourString, string minuteString, string secondString);

    public setExpirationCalendar(Calendar calendar, string yearsString, string monthsString, string daysString, string hoursString, string minutesString, string secondsString);

    public int64_t getTotalTime(string yearString, string monthString, string dayString, string hourString, string minuteString, string secondString);

};

            


        #endif //ORG_ALLBINARY_TIME_TIMEUTIL_H
