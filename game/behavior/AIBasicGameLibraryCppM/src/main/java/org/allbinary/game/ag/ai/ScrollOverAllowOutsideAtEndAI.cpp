
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
        
class ScrollOverAllowOutsideAtEndAI: public BasicAI {
        

public constructor (AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){

    ownerLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

    x: int32_t = ownerLayerInterface!.getXP()!;;
    

    y: int32_t = ownerLayerInterface!.getYP()!;;
    

    width: int32_t = ownerLayerInterface!.getWidth()!;;
    

    height: int32_t = ownerLayerInterface!.getHeight()!;;
    

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

                        if(x > displayInfo!.getLastWidth())
                        
                                    {
                                    ownerLayerInterface!.setPosition( -width, y, ownerLayerInterface!.getZP());
    

                                    }
                                

                        if(y > displayInfo!.getLastHeight())
                        
                                    {
                                    ownerLayerInterface!.setPosition(x,  -height, ownerLayerInterface!.getZP());
    

                                    }
                                

                        if(x <  -width)
                        
                                    {
                                    ownerLayerInterface!.setPosition(displayInfo!.getLastWidth() +width, y, ownerLayerInterface!.getZP());
    

                                    }
                                

                        if(y <  -height)
                        
                                    {
                                    ownerLayerInterface!.setPosition(x, displayInfo!.getLastHeight() +height, ownerLayerInterface!.getZP());
    

                                    }
                                
}


};

            

