
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
        



        #ifndef ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H
        #define ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/time/TimeDelayHelper.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoTimeDelayHelper: public TimeDelayHelper {

    private: static NoTimeDelayHelper* SINGLETON_owner();
    public: static NoTimeDelayHelper* SINGLETON;

public: NoTimeDelayHelper();

    public: bool isTimeTNT();

    public: bool isTimeSinceTNT(int32_t delay);

    public: bool isTime(int64_t currentTime);

    public: bool isTimeSince(int32_t delay, int64_t currentTime);

};

            


        #endif //ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_TIME_NOTIMEDELAYHELPER_H_COMPLETE
        #if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif

        #endif
    
