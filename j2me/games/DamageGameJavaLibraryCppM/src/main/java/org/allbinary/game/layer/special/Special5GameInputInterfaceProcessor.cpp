
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialGameInputInterfaceProcessor.h"
#include "SpecialGameInputInterface.h"

class Special5GameInputInterfaceProcessor: public SpecialGameInputInterfaceProcessor {

public: Special5GameInputInterfaceProcessor(SpecialGameInputInterface collidableDestroyableDamageableLayer) : SpecialGameInputInterfaceProcessor(collidableDestroyableDamageableLayer){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
this->specialGameInputInterface.special5(allbinaryLayerManager, gameKeyEvent);
    
}


};

            

