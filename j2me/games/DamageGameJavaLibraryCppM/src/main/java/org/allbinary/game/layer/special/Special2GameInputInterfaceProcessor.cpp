
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL2GAMEINPUTINTERFACEPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL2GAMEINPUTINTERFACEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/special/Special2GameInputInterfaceProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/special/SpecialGameInputInterfaceProcessor.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"


Special2GameInputInterfaceProcessor::Special2GameInputInterfaceProcessor(SpecialGameInputInterface* collidableDestroyableDamageableLayer) : SpecialGameInputInterfaceProcessor(collidableDestroyableDamageableLayer){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto Special2GameInputInterfaceProcessor::processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) -> void{
this->specialGameInputInterface->special2(allbinaryLayerManager, gameKeyEvent);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_SPECIAL_SPECIAL2GAMEINPUTINTERFACEPROCESSOR_CPP
