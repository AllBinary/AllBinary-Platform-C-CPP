
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScrollOverImmediateAI: public BasicAI {

public: ScrollOverImmediateAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager){

    AllBinaryLayer* ownerLayerInterface = this->getOwnerLayerInterface();;
    

    int32_t x = ownerLayerInterface->getXP();;
    

    int32_t y = ownerLayerInterface->getYP();;
    

    int32_t x2 = ownerLayerInterface->getX2();;
    

    int32_t y2 = ownerLayerInterface->getY2();;
    

    int32_t width = ownerLayerInterface->getWidth();;
    

    int32_t height = ownerLayerInterface->getHeight();;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

                        if(x2 > displayInfo->getLastWidth())
                        
                                    {
                                    ownerLayerInterface->setPosition(0, y, ownerLayerInterface->getZP());
    

                                    }
                                

                        if(y2 > displayInfo->getLastHeight())
                        
                                    {
                                    ownerLayerInterface->setPosition(x, 0, ownerLayerInterface->getZP());
    

                                    }
                                

                        if(x < 0)
                        
                                    {
                                    ownerLayerInterface->setPosition(displayInfo->getLastWidth() -width, y, ownerLayerInterface->getZP());
    

                                    }
                                

                        if(y < 0)
                        
                                    {
                                    ownerLayerInterface->setPosition(x, displayInfo->getLastHeight() -height, ownerLayerInterface->getZP());
    

                                    }
                                
}


};

            

