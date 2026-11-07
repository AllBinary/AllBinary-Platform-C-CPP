
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_TIME_TIMESTAMPUTIL_CPP
        #define ORG_ALLBINARY_TIME_TIMESTAMPUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/time/TimeStampUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Calendar.h>

      
//#include <java/util/Date.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
auto TimeStampUtil::instance_owner() -> TimeStampUtil* { static std::unique_ptr<TimeStampUtil> value(new TimeStampUtil()); return value.get(); }
TimeStampUtil* TimeStampUtil::instance = TimeStampUtil::instance_owner();

    /*actual*/ auto TimeStampUtil::getInstance() -> TimeStampUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TimeStampUtil::instance;
    
}


TimeStampUtil::TimeStampUtil(){
}


    /*actual*/ auto TimeStampUtil::getAsString() -> std::string{

    Calendar* calendar = Calendar::getInstance();;
    

    Date* date = calendar->getTime();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(date);;
    
}




        #endif //ORG_ALLBINARY_TIME_TIMESTAMPUTIL_CPP
