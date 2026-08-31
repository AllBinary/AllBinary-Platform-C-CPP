
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/System.h"
        
            #include "../../../java/lang/Long.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameTickTimeDelayHelper
            : public Object
         {
        

    public timeDelta: int64_t= 0;

    public startTime: int64_t;

    public lastStartTime: int64_t;

public constructor (int64_t startTime);

    public int64_t setStartTime();

    public loop();

    public int64_t getTimeFromStart();

};

            


        #endif //ORG_ALLBINARY_TIME_GAMETICKTIMEDELAYHELPER_H
