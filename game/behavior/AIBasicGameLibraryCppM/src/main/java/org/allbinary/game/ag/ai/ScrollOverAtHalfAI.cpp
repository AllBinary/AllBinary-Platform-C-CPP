
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
        
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScrollOverAtHalfAI: public BasicAI {
        

public constructor (AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){

    ownerLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

    x: int32_t = ownerLayerInterface!.getXP()!;;
    

    y: int32_t = ownerLayerInterface!.getYP()!;;
    

    halfWidth: int32_t = ownerLayerInterface!.getHalfWidth()!;;
    

    halfHeight: int32_t = ownerLayerInterface!.getHalfHeight()!;;
    

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

                        if(x > displayInfo!.getLastWidth() -halfWidth)
                        
                                    {
                                    ownerLayerInterface!.setPosition(halfWidth +1, y, ownerLayerInterface!.getZP());
    

                                    }
                                

                        if(y > displayInfo!.getLastHeight() -halfHeight)
                        
                                    {
                                    ownerLayerInterface!.setPosition(x, halfHeight +1, ownerLayerInterface!.getZP());
    

                                    }
                                

                        if(x <  -halfWidth)
                        
                                    {
                                    ownerLayerInterface!.setPosition(displayInfo!.getLastWidth() -halfWidth, y, ownerLayerInterface!.getZP());
    

                                    }
                                

                        if(y <  -halfHeight)
                        
                                    {
                                    ownerLayerInterface!.setPosition(x, displayInfo!.getLastHeight() -halfHeight, ownerLayerInterface!.getZP());
    

                                    }
                                
}


};

            

