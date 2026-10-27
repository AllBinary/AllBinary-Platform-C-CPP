
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_TIMETYPETEST_CPP
        #define ORG_ALLBINARY_TIME_TIMETYPETEST_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/time/TimeTypeTest.h"
        

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


TimeTypeTest::TimeTypeTest() {
        }
        
    auto TimeTypeTest::millisForHourLocal(int32_t hour) -> int64_t{

    Calendar* cal = Calendar::getInstance();;
    
cal->set(Calendar::HOUR_OF_DAY, hour);
    
cal->set(Calendar::MINUTE, 0);
    
cal->set(Calendar::SECOND, 0);
    
cal->set(Calendar::MILLISECOND, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return cal->getTimeInMillis();;
    
}


TimeTypeTest::TestableTimeTypeUtil::TestableTimeTypeUtil(int32_t hour){
this->hour= hour;
    
}


    auto TimeTypeTest::TestableTimeTypeUtil::getHourOfDay() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hour;
    
}


    auto TimeTypeTest::isNight_returnsTrue_for_hours_less_than_6() -> void{

                    //Otherwise - statement - ForEachStmt

}


    auto TimeTypeTest::isNight_returnsTrue_for_hours_greater_than_18() -> void{

                    //Otherwise - statement - ForEachStmt

}


    auto TimeTypeTest::isNight_returnsFalse_for_boundary_hours_6_and_18() -> void{

                    //Otherwise - statement - ForEachStmt

}


    auto TimeTypeTest::getNightOrDay_returns_expected_label() -> void{

    TimeTypeUtil* nightUtil = new TestableTimeTypeUtil(0);;
    
Assertions::assertEquals(nightUtil->NIGHT, nightUtil->getNightOrDay());
    

    TimeTypeUtil* dayUtil = new TestableTimeTypeUtil(12);;
    
Assertions::assertEquals(dayUtil->DAY, dayUtil->getNightOrDay());
    
}


    auto TimeTypeTest::getHourOfDay_long_converts_epoch_to_local_hour() -> void{

    TimeTypeUtil* util = new TimeTypeUtil();;
    

                    //Otherwise - statement - ForEachStmt

}


    auto TimeTypeTest::isNight_long_expected_ranges() -> void{

    TimeTypeUtil* util = new TimeTypeUtil();;
    

                    //Otherwise - statement - ForEachStmt


                    //Otherwise - statement - ForEachStmt

}


    auto TimeTypeTest::getNightOrDay_long_consistency() -> void{

    TimeTypeUtil* util = new TimeTypeUtil();;
    

    int64_t nightMillis = TimeTypeTest::millisForHourLocal(0);;
    

    int64_t dayMillis = TimeTypeTest::millisForHourLocal(12);;
    
Assertions::assertEquals(util->NIGHT, util->getNightOrDay(nightMillis));
    
Assertions::assertEquals(util->DAY, util->getNightOrDay(dayMillis));
    
}


    auto TimeTypeTest::boundaries_day_for_long_based_api() -> void{

    TimeTypeUtil* util = new TimeTypeUtil();;
    

                    //Otherwise - statement - ForEachStmt

}


    auto TimeTypeTest::constants_accessible_and_stable() -> void{

    TimeTypeUtil* util = new TimeTypeUtil();;
    
Assertions::assertEquals("Night", util->NIGHT);
    
Assertions::assertEquals("Day", util->DAY);
    
}


    auto TimeTypeTest::getInstance_returns_same_singleton() -> void{

    TimeTypeUtil* a = TimeTypeUtil::getInstance();;
    

    TimeTypeUtil* b = TimeTypeUtil::getInstance();;
    
Assertions::assertSame(a, b);
    
}




        #endif //ORG_ALLBINARY_TIME_TIMETYPETEST_CPP
