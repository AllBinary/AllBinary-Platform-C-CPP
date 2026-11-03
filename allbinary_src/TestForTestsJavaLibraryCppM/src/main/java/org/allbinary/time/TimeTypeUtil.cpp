
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_TIMETYPEUTIL_CPP
        #define ORG_ALLBINARY_TIME_TIMETYPEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/time/TimeTypeUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/TimeZone.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TimeTypeUtil::TimeTypeUtil() {
        }
        auto TimeTypeUtil::instance_owner() -> TimeTypeUtil* { static std::unique_ptr<TimeTypeUtil> value(new TimeTypeUtil()); return value.get(); }
TimeTypeUtil* TimeTypeUtil::instance = TimeTypeUtil::instance_owner();

    auto TimeTypeUtil::getInstance() -> TimeTypeUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TimeTypeUtil::instance;
    
}


    auto TimeTypeUtil::isNight() -> bool{

    int32_t hoursOfDay = this->getHourOfDay();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hoursOfDay < 6 || hoursOfDay > 18;
    
}


    auto TimeTypeUtil::getHourOfDay() -> int32_t{

    Calendar* calendar = Calendar::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return calendar->get(Calendar::HOUR_OF_DAY);;
    
}


    auto TimeTypeUtil::getNightOrDay() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isNight()
                        ?       
                                this->NIGHT
                                :

                            this->DAY;;
    
}


    auto TimeTypeUtil::getHourOfDay(int64_t timeInMillis) -> int32_t{

    Calendar* calendar = Calendar::getInstance();;
    
calendar->setTimeInMillis(timeInMillis);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return calendar->get(Calendar::HOUR_OF_DAY);;
    
}


    auto TimeTypeUtil::isNight(int64_t timeInMillis) -> bool{

    int32_t hoursOfDay = this->getHourOfDay(timeInMillis);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hoursOfDay < 6 || hoursOfDay > 18;
    
}


    auto TimeTypeUtil::getNightOrDay(int64_t timeInMillis) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isNight(timeInMillis)
                        ?       
                                this->NIGHT
                                :

                            this->DAY;;
    
}




        #endif //ORG_ALLBINARY_TIME_TIMETYPEUTIL_CPP
