
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
        

    static int64_t millisForHourLocal(int32_t hour){

    cal: Calendar = Calendar.getInstance()!;;
    
cal.set(Calendar.HOUR_OF_DAY, hour);
    
cal.set(Calendar.MINUTE, 0);
    
cal.set(Calendar.SECOND, 0);
    
cal.set(Calendar.MILLISECOND, 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return cal.getTimeInMillis();;
    
}


//inner= member=true isStatic=static
class TestableTimeTypeUtil: public TimeTypeUtil {
        
/*Static stuff is not allowed for CPP inner classes*//**/


    private: const hour: int32_t;

 constructor (int32_t hour){

            super();
        this.hour= hour;
    
}


    public int32_t getHourOfDay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hour;
    
}


};

            
    isNight_returnsTrue_for_hours_less_than_6(){

                    //Otherwise - statement - ForEachStmt

}


    isNight_returnsTrue_for_hours_greater_than_18(){

                    //Otherwise - statement - ForEachStmt

}


    isNight_returnsFalse_for_boundary_hours_6_and_18(){

                    //Otherwise - statement - ForEachStmt

}


    getNightOrDay_returns_expected_label(){

    nightUtil: TimeTypeUtil = new this.TestableTimeTypeUtil(0);;
    
Assertions.assertEquals(nightUtil!.NIGHT, nightUtil!.getNightOrDay());
    

    dayUtil: TimeTypeUtil = new this.TestableTimeTypeUtil(12);;
    
Assertions.assertEquals(dayUtil!.DAY, dayUtil!.getNightOrDay());
    
}


    getHourOfDay_long_converts_epoch_to_local_hour(){

    util: TimeTypeUtil = new TimeTypeUtil();;
    

                    //Otherwise - statement - ForEachStmt

}


    isNight_long_expected_ranges(){

    util: TimeTypeUtil = new TimeTypeUtil();;
    

                    //Otherwise - statement - ForEachStmt


                    //Otherwise - statement - ForEachStmt

}


    getNightOrDay_long_consistency(){

    util: TimeTypeUtil = new TimeTypeUtil();;
    

    nightMillis: int64_t = TimeTypeTest.millisForHourLocal(0)!;;
    

    dayMillis: int64_t = TimeTypeTest.millisForHourLocal(12)!;;
    
Assertions.assertEquals(util.NIGHT, util.getNightOrDay(nightMillis));
    
Assertions.assertEquals(util.DAY, util.getNightOrDay(dayMillis));
    
}


    boundaries_day_for_long_based_api(){

    util: TimeTypeUtil = new TimeTypeUtil();;
    

                    //Otherwise - statement - ForEachStmt

}


    constants_accessible_and_stable(){

    util: TimeTypeUtil = new TimeTypeUtil();;
    
Assertions.assertEquals("Night", util.NIGHT);
    
Assertions.assertEquals("Day", util.DAY);
    
}


    getInstance_returns_same_singleton(){

    a: TimeTypeUtil = TimeTypeUtil.getInstance()!;;
    

    b: TimeTypeUtil = TimeTypeUtil.getInstance()!;;
    
Assertions.assertSame(a, b);
    
}


};

            

