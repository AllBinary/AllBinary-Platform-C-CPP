
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_TIME_TIME_CPP
        #define ORG_ALLBINARY_BUSINESS_TIME_TIME_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/time/Time.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

Time::Time(std::string time){
this->timeLong= int64_t(time);
    
}


Time::Time(int64_t time){
this->timeLong= int64_t(time);
    
}


    auto Time::getLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeLong;
    
}


    auto Time::getlong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeLong.longValue();;
    
}


    auto Time::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getLong().toString();;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_TIME_TIME_CPP
