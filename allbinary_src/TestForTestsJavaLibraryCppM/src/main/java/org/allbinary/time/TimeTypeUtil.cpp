
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/TimeZone.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TimeTypeUtil
            : public Object
         {

    private: static TimeTypeUtil* instance() { static std::unique_ptr<TimeTypeUtil> value(new TimeTypeUtil()); return value.get(); }

    public: static TimeTypeUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TimeTypeUtil::instance();
    
}


    public: const std::string NIGHT = "Night";

    public: const std::string DAY = "Day";

    public: bool isNight(){

    int32_t hoursOfDay = this->getHourOfDay();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hoursOfDay < 6 || hoursOfDay > 18;
    
}


    public: int32_t getHourOfDay(){

    Calendar* calendar = Calendar::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return calendar->get(Calendar::HOUR_OF_DAY);;
    
}


    public: std::string getNightOrDay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isNight()
                        ?       
                                this->NIGHT
                                :

                            this->DAY;

    ;
    
}


    public: int32_t getHourOfDay(int64_t timeInMillis){

    Calendar* calendar = Calendar::getInstance();;
    
calendar->setTimeInMillis(timeInMillis);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return calendar->get(Calendar::HOUR_OF_DAY);;
    
}


    public: bool isNight(int64_t timeInMillis){

    int32_t hoursOfDay = this->getHourOfDay(timeInMillis);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hoursOfDay < 6 || hoursOfDay > 18;
    
}


    public: std::string getNightOrDay(int64_t timeInMillis){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isNight(timeInMillis)
                        ?       
                                this->NIGHT
                                :

                            this->DAY;

    ;
    
}


};

            

