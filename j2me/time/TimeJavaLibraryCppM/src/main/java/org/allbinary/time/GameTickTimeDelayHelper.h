
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_H
        #define ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameTickTimeDelayHelper
            : public virtual Object
         {

    public: int64_t timeDelta= 0;

    public: int64_t startTime;

    public: int64_t lastStartTime;

public: GameTickTimeDelayHelper(int64_t startTime);

    public: int64_t setStartTime();

    public: void loop();

    public: int64_t getTimeFromStart();

};

            


        #endif //ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_H_COMPLETE
        
        #endif
    
