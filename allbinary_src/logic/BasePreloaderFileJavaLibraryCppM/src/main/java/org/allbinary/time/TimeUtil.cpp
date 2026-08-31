
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
        

    private: static const instance: TimeUtil = new TimeUtil();

    public static TimeUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TimeUtil.instance;
    
}


    private: static const calendar: Calendar = Calendar.getInstance()!;

    public setCalendar(Calendar calendar, string yearString, string monthString, string dayString, string hourString){

    year: int32_t = new Integer(yearString).intValue()!;;
    

    month: int32_t = new Integer(monthString).intValue()!;;
    

    day: int32_t = new Integer(dayString).intValue()!;;
    

    hour: int32_t = new Integer(hourString).intValue()!;;
    
calendar.set(year, month, day, hour, 0);
    
}


    public setCalendar(Calendar calendar, string yearString, string monthString, string dayString, string hourString, string minuteString, string secondString){

    year: int32_t = new Integer(yearString).intValue()!;;
    

    month: int32_t = new Integer(monthString).intValue()!;;
    

    day: int32_t = new Integer(dayString).intValue()!;;
    

    hour: int32_t = new Integer(hourString).intValue()!;;
    

    minute: int32_t = new Integer(minuteString).intValue()!;;
    

    second: int32_t = new Integer(secondString).intValue()!;;
    
calendar.set(year, month, day, hour, minute, second);
    
}


    public setExpirationCalendar(Calendar calendar, string yearsString, string monthsString, string daysString, string hoursString, string minutesString, string secondsString){

    year: int32_t = calendar.get(Calendar.YEAR) +new Integer(yearsString).intValue();;
    

    month: int32_t = calendar.get(Calendar.MONTH) +new Integer(monthsString).intValue();;
    

    day: int32_t = calendar.get(Calendar.DAY_OF_MONTH) +new Integer(daysString).intValue();;
    

    hour: int32_t = calendar.get(Calendar.HOUR) +new Integer(hoursString).intValue();;
    

    minute: int32_t = calendar.get(Calendar.MINUTE) +new Integer(minutesString).intValue();;
    

    second: int32_t = calendar.get(Calendar.SECOND) +new Integer(secondsString).intValue();;
    
calendar.set(year, month, day, hour, minute, second);
    
}


    public int64_t getTotalTime(string yearString, string monthString, string dayString, string hourString, string minuteString, string secondString){

    time: int64_t = TimeUtil.calendar.getTimeInMillis()!;;
    
this.setExpirationCalendar(TimeUtil.calendar, yearString, monthString, dayString, hourString, minuteString, secondString);
    

    timeDelta: int64_t = TimeUtil.calendar.getTimeInMillis()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return timeDelta -time;
    
}


};

            

