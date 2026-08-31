
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialGameInputInterfaceProcessor.h"
#include "SpecialGameInputInterface.h"

class SpecialDownGameInputInterfaceProcessor: public SpecialGameInputInterfaceProcessor {
        

public constructor (SpecialGameInputInterface collidableDestroyableDamageableLayer){
            super(collidableDestroyableDamageableLayer);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public processEvent(AllBinaryLayerManager allbinaryLayerManager, GameKeyEvent gameKeyEvent){
this.specialGameInputInterface!.down();
    
}


};

            

