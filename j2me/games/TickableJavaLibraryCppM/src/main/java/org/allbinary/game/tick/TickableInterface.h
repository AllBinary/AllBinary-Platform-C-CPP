
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
        



        #ifndef ORG_ALLBINARY_GAME_TICK_TICKABLEINTERFACE_H
        #define ORG_ALLBINARY_GAME_TICK_TICKABLEINTERFACE_H

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/NamedInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TickableInterface: public NamedInterface {

                //@Throws(Exception.constructor)
            
    void processTick(AllBinaryLayerManager allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_TICK_TICKABLEINTERFACE_H
