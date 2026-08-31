
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_TIMETYPEUTIL_H
        #define ORG_ALLBINARY_TIME_TIMETYPEUTIL_H

            #include "../../../java/lang/Object.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/TimeZone.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TimeTypeUtil
            : public Object
         {
        

    private: static const instance: TimeTypeUtil = new TimeTypeUtil();

    public static TimeTypeUtil getInstance();

    public const NIGHT: string = "Night";

    public const DAY: string = "Day";

    public bool isNight();

    public int32_t getHourOfDay();

    public string getNightOrDay();

    public int32_t getHourOfDay(int64_t timeInMillis);

    public bool isNight(int64_t timeInMillis);

    public string getNightOrDay(int64_t timeInMillis);

};

            


        #endif //ORG_ALLBINARY_TIME_TIMETYPEUTIL_H
