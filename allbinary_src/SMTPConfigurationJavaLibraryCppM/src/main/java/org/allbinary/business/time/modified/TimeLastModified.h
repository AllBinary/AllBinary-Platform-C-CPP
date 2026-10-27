
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_TIME_MODIFIED_TIMELASTMODIFIED_H
        #define ORG_ALLBINARY_BUSINESS_TIME_MODIFIED_TIMELASTMODIFIED_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/business/time/Time.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TimeLastModified: public Time {

public: TimeLastModified(std::string time);

public: TimeLastModified(int64_t time);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_TIME_MODIFIED_TIMELASTMODIFIED_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_TIME_MODIFIED_TIMELASTMODIFIED_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_TIME_MODIFIED_TIMELASTMODIFIED_H_COMPLETE
        #if __has_include(<org/allbinary/business/time/Time.h>)
#include <org/allbinary/business/time/Time.h>
#endif

        #endif
    
