
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_TIMETYPETEST_H
        #define ORG_ALLBINARY_TIME_TIMETYPETEST_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Calendar.h>
class Assertions;
class DisplayName;
class Test;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/time/TimeTypeUtil.h"
//class TestableTimeTypeUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TimeTypeTest
            : public virtual Object
         {
private: class TestableTimeTypeUtil;

    private: static int64_t millisForHourLocal(int32_t hour);

//inner= member=true isStatic=static
private: class TestableTimeTypeUtil: public TimeTypeUtil {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: int32_t hour;

public: TestableTimeTypeUtil(int32_t hour);

    public: int32_t getHourOfDay();

};

            

            
    public: TimeTypeTest();
        
    public: void isNight_returnsTrue_for_hours_less_than_6();

    public: void isNight_returnsTrue_for_hours_greater_than_18();

    public: void isNight_returnsFalse_for_boundary_hours_6_and_18();

    public: void getNightOrDay_returns_expected_label();

    public: void getHourOfDay_long_converts_epoch_to_local_hour();

    public: void isNight_long_expected_ranges();

    public: void getNightOrDay_long_consistency();

    public: void boundaries_day_for_long_based_api();

    public: void constants_accessible_and_stable();

    public: void getInstance_returns_same_singleton();

};

            


        #endif //ORG_ALLBINARY_TIME_TIMETYPETEST_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TIME_TIMETYPETEST_H_COMPLETE)
        #define ORG_ALLBINARY_TIME_TIMETYPETEST_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<org/junit/jupiter/api/Assertions.h>)
#include <org/junit/jupiter/api/Assertions.h>
#endif
#if __has_include(<org/junit/jupiter/api/DisplayName.h>)
#include <org/junit/jupiter/api/DisplayName.h>
#endif
#if __has_include(<org/junit/jupiter/api/Test.h>)
#include <org/junit/jupiter/api/Test.h>
#endif
#if __has_include("org/allbinary/time/TimeTypeUtil.h")
#include "org/allbinary/time/TimeTypeUtil.h"
#endif

        #endif
    
