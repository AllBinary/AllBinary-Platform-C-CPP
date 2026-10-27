
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
        



        #ifndef ORG_ALLBINARY_TIME_TIMESTAMPUTIL_H
        #define ORG_ALLBINARY_TIME_TIMESTAMPUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Calendar.h>
//#include <java/util/Date.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ActualPlatform
/*actual*/ class TimeStampUtil
            : public virtual Object
         {

    private: static TimeStampUtil* instance_owner();
    private: static TimeStampUtil* instance;

    /*actual*/ public: static TimeStampUtil* getInstance();

private: TimeStampUtil();

    /*actual*/ public: std::string getAsString();

};

            


        #endif //ORG_ALLBINARY_TIME_TIMESTAMPUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TIME_TIMESTAMPUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_TIME_TIMESTAMPUTIL_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif


        #endif
    
