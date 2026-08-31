
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/TimeZone.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TimeTypeUtil
            : public Object
         {
        

    private: static const instance: TimeTypeUtil = new TimeTypeUtil();

    public static TimeTypeUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TimeTypeUtil.instance;
    
}


    public const NIGHT: string = "Night";

    public const DAY: string = "Day";

    public bool isNight(){

    hoursOfDay: int32_t = this.getHourOfDay()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hoursOfDay < 6 || hoursOfDay > 18;
    
}


    public int32_t getHourOfDay(){

    calendar: Calendar = Calendar.getInstance()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return calendar.get(Calendar.HOUR_OF_DAY);;
    
}


    public string getNightOrDay(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isNight()
                        ?       
                                this.NIGHT
                                :

                            this.DAY;

    ;
    
}


    public int32_t getHourOfDay(int64_t timeInMillis){

    calendar: Calendar = Calendar.getInstance()!;;
    
calendar.setTimeInMillis(timeInMillis);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return calendar.get(Calendar.HOUR_OF_DAY);;
    
}


    public bool isNight(int64_t timeInMillis){

    hoursOfDay: int32_t = this.getHourOfDay(timeInMillis)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hoursOfDay < 6 || hoursOfDay > 18;
    
}


    public string getNightOrDay(int64_t timeInMillis){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isNight(timeInMillis)
                        ?       
                                this.NIGHT
                                :

                            this.DAY;

    ;
    
}


};

            

