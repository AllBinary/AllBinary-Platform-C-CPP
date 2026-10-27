
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Calendar.h>

      
//#include <java/util/Date.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform
/*actual*/ class TimeStampUtil
            : public Object
         {

    private: static TimeStampUtil* instance() { static std::unique_ptr<TimeStampUtil> value(new TimeStampUtil()); return value.get(); }

    /*actual*/ public: static TimeStampUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TimeStampUtil::instance();
    
}


private: TimeStampUtil(){
}


    /*actual*/ public: std::string getAsString(){

    Calendar* calendar = Calendar::getInstance();;
    

    Date* date = calendar->getTime();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return date->toString();;
    
}


};

            

