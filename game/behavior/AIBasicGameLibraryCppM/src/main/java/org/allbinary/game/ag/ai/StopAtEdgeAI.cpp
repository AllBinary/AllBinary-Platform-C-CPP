
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
        
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StopAtEdgeAI: public BasicAI {

public: StopAtEdgeAI(AllBinaryLayer ownerLayerInterface, GameInput gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager){

    AllBinaryLayer ownerLayerInterface = this->getOwnerLayerInterface();;
    

    VelocityInterfaceCompositeInterface velocityInterfaceCompositeInterface = (ownerLayerInterface);;
    

    BasicVelocityProperties velocityProperties = velocityInterfaceCompositeInterface.getVelocityProperties();;
    

    int32_t x = ownerLayerInterface.getXP();;
    

    int32_t y = ownerLayerInterface.getYP();;
    

    int32_t x2 = ownerLayerInterface.getX2();;
    

    int32_t y2 = ownerLayerInterface.getY2();;
    

    int32_t width = ownerLayerInterface.getWidth();;
    

    int32_t height = ownerLayerInterface.getHeight();;
    

    DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();;
    

                        if(x2 +velocityProperties.getVelocityXBasicDecimalP().getScaled() > displayInfo.getLastWidth())
                        
                                    {
                                    ownerLayerInterface.setPosition(displayInfo.getLastWidth() -width, y, ownerLayerInterface.getZP());
    
velocityProperties.getVelocityYBasicDecimalP().setint(0);
    

                                    }
                                

                        if(y2 +velocityProperties.getVelocityYBasicDecimalP().getScaled() > displayInfo.getLastHeight())
                        
                                    {
                                    ownerLayerInterface.setPosition(x, displayInfo.getLastHeight() -height, ownerLayerInterface.getZP());
    
velocityProperties.getVelocityXBasicDecimalP().setint(0);
    

                                    }
                                

                        if(x +velocityProperties.getVelocityXBasicDecimalP().getScaled() < 0)
                        
                                    {
                                    ownerLayerInterface.setPosition(0, y, ownerLayerInterface.getZP());
    
velocityProperties.getVelocityYBasicDecimalP().setint(0);
    

                                    }
                                

                        if(y +velocityProperties.getVelocityYBasicDecimalP().getScaled() < 0)
                        
                                    {
                                    ownerLayerInterface.setPosition(x, 0, ownerLayerInterface.getZP());
    
velocityProperties.getVelocityXBasicDecimalP().setint(0);
    

                                    }
                                
}


};

            

