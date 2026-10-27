
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_TIMETYPETEST_H
        #define ORG_ALLBINARY_TIME_TIMETYPETEST_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Calendar.h>

      
#include <org/junit/jupiter/api/Assertions.h>

      
#include <org/junit/jupiter/api/DisplayName.h>

      
#include <org/junit/jupiter/api/Test.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/time/TimeTypeUtil.h"
//#include "org/allbinary/time/TestableTimeTypeUtil.h"

class TimeTypeTest
            : public Object
         {

    private: static int64_t millisForHourLocal(int32_t hour);

//inner= member=true isStatic=static
class TestableTimeTypeUtil: public TimeTypeUtil {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: int32_t hour;

: TestableTimeTypeUtil(int32_t hour);

    public: int32_t getHourOfDay();

};

            
    void isNight_returnsTrue_for_hours_less_than_6();

    void isNight_returnsTrue_for_hours_greater_than_18();

    void isNight_returnsFalse_for_boundary_hours_6_and_18();

    void getNightOrDay_returns_expected_label();

    void getHourOfDay_long_converts_epoch_to_local_hour();

    void isNight_long_expected_ranges();

    void getNightOrDay_long_consistency();

    void boundaries_day_for_long_based_api();

    void constants_accessible_and_stable();

    void getInstance_returns_same_singleton();

};

            


        #endif //ORG_ALLBINARY_TIME_TIMETYPETEST_H
