
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_TIMETYPETEST_H
        #define ORG_ALLBINARY_TIME_TIMETYPETEST_H

            #include "../../../java/lang/Object.h"
        
#include <java/util/Calendar.h>

      
#include <org/junit/jupiter/api/Assertions.h>

      
#include <org/junit/jupiter/api/DisplayName.h>

      
#include <org/junit/jupiter/api/Test.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TimeTypeUtil.h"
//#include "TestableTimeTypeUtil.h"

class TimeTypeTest
            : public Object
         {
        

    static int64_t millisForHourLocal(int32_t hour);

//inner= member=true isStatic=static
class TestableTimeTypeUtil: public TimeTypeUtil {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const hour: int32_t;

 constructor (int32_t hour);

    public int32_t getHourOfDay();

};

            
    isNight_returnsTrue_for_hours_less_than_6();

    isNight_returnsTrue_for_hours_greater_than_18();

    isNight_returnsFalse_for_boundary_hours_6_and_18();

    getNightOrDay_returns_expected_label();

    getHourOfDay_long_converts_epoch_to_local_hour();

    isNight_long_expected_ranges();

    getNightOrDay_long_consistency();

    boundaries_day_for_long_based_api();

    constants_accessible_and_stable();

    getInstance_returns_same_singleton();

};

            


        #endif //ORG_ALLBINARY_TIME_TIMETYPETEST_H
