
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

    private: static TimeTypeUtil instance() { return TimeTypeUtil(); }

    public: static TimeTypeUtil getInstance();

    public: const std::string NIGHT = "Night";

    public: const std::string DAY = "Day";

    public: bool isNight();

    public: int32_t getHourOfDay();

    public: std::string getNightOrDay();

    public: int32_t getHourOfDay(int64_t timeInMillis);

    public: bool isNight(int64_t timeInMillis);

    public: std::string getNightOrDay(int64_t timeInMillis);

};

            


        #endif //ORG_ALLBINARY_TIME_TIMETYPEUTIL_H
