
        /* Generated Code Do Not Modify */
        



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

    private: static int64_t millisForHourLocal(int32_t hour){

    Calendar cal = Calendar::getInstance();;
    
cal.set(Calendar::HOUR_OF_DAY, hour);
    
cal.set(Calendar::MINUTE, 0);
    
cal.set(Calendar::SECOND, 0);
    
cal.set(Calendar::MILLISECOND, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return cal.getTimeInMillis();;
    
}


//inner= member=true isStatic=static
class TestableTimeTypeUtil: public TimeTypeUtil {
/*Static stuff is not allowed for CPP inner classes*//**/


    private: int32_t hour;

: TestableTimeTypeUtil(int32_t hour){
this->hour= hour;
    
}


    public: int32_t getHourOfDay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hour;
    
}


};

            
    void isNight_returnsTrue_for_hours_less_than_6(){

                    //Otherwise - statement - ForEachStmt

}


    void isNight_returnsTrue_for_hours_greater_than_18(){

                    //Otherwise - statement - ForEachStmt

}


    void isNight_returnsFalse_for_boundary_hours_6_and_18(){

                    //Otherwise - statement - ForEachStmt

}


    void getNightOrDay_returns_expected_label(){

    TimeTypeUtil nightUtil = TestableTimeTypeUtil(0);;
    
Assertions::assertEquals(nightUtil.NIGHT, nightUtil.getNightOrDay());
    

    TimeTypeUtil dayUtil = TestableTimeTypeUtil(12);;
    
Assertions::assertEquals(dayUtil.DAY, dayUtil.getNightOrDay());
    
}


    void getHourOfDay_long_converts_epoch_to_local_hour(){

    TimeTypeUtil util = TimeTypeUtil();;
    

                    //Otherwise - statement - ForEachStmt

}


    void isNight_long_expected_ranges(){

    TimeTypeUtil util = TimeTypeUtil();;
    

                    //Otherwise - statement - ForEachStmt


                    //Otherwise - statement - ForEachStmt

}


    void getNightOrDay_long_consistency(){

    TimeTypeUtil util = TimeTypeUtil();;
    

    int64_t nightMillis = TimeTypeTest::millisForHourLocal(0);;
    

    int64_t dayMillis = TimeTypeTest::millisForHourLocal(12);;
    
Assertions::assertEquals(util.NIGHT, util.getNightOrDay(nightMillis));
    
Assertions::assertEquals(util.DAY, util.getNightOrDay(dayMillis));
    
}


    void boundaries_day_for_long_based_api(){

    TimeTypeUtil util = TimeTypeUtil();;
    

                    //Otherwise - statement - ForEachStmt

}


    void constants_accessible_and_stable(){

    TimeTypeUtil util = TimeTypeUtil();;
    
Assertions::assertEquals("Night", util.NIGHT);
    
Assertions::assertEquals("Day", util.DAY);
    
}


    void getInstance_returns_same_singleton(){

    TimeTypeUtil a = TimeTypeUtil::getInstance();;
    

    TimeTypeUtil b = TimeTypeUtil::getInstance();;
    
Assertions::assertSame(a, b);
    
}


};

            

