
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_TIMETYPEUTIL_H
        #define ORG_ALLBINARY_TIME_TIMETYPEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Calendar.h>
#include <java/util/TimeZone.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TimeTypeUtil
            : public virtual Object
         {

    private: static TimeTypeUtil* instance_owner();
    private: static TimeTypeUtil* instance;

    public: static TimeTypeUtil* getInstance();


            
    public: TimeTypeUtil();
        
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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TIME_TIMETYPEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_TIME_TIMETYPEUTIL_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<java/util/TimeZone.h>)
#include <java/util/TimeZone.h>
#endif

        #endif
    
