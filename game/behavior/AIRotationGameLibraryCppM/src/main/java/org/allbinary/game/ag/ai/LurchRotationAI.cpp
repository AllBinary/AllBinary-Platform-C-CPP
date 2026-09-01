
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
        



#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/RotationAnimationInterface.h>

      
#include <org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/ag/ai/tactical/LurchAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/math/AngleIncrementInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LurchRotationAI: public LurchAI {

    private: IndexedAnimation rotationAnimationInterface;

public: LurchRotationAI(AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    

    RotationAnimationInterfaceCompositeInterface rotationAnimationInterfaceCompositeInterface = this->getOwnerLayerInterface() as RotationAnimationInterfaceCompositeInterface;;
    
this->rotationAnimationInterface= rotationAnimationInterfaceCompositeInterface.getRotationAnimationInterface();
    
this->update();
    
}


    protected: void reverse(){
super.reverse();
    
this->update();
    
}


    private: void update(){

                        if(this->currentRelativeAngle == 0)
                        
                                    {
                                    
    RotationAnimationInterface rotationAnimationInterface = this->rotationAnimationInterface as RotationAnimationInterface;;
    

    AngleIncrementInfo angleIncrementInfo = rotationAnimationInterface.getAngleInfoP().getAngleIncrementInfo();;
    

    RotationAnimationInterfaceCompositeInterface rotationAnimationInterfaceCompositeInterface = this->getOwnerLayerInterface() as RotationAnimationInterfaceCompositeInterface;;
    
rotationAnimationInterfaceCompositeInterface.setFrame(angleIncrementInfo.RIGHT_FRAME.intValue());
    

                                    }
                                
                             else 
                        if(this->currentRelativeAngle == 180)
                        
                                    {
                                    
    RotationAnimationInterface rotationAnimationInterface = this->rotationAnimationInterface as RotationAnimationInterface;;
    

    AngleIncrementInfo angleIncrementInfo = rotationAnimationInterface.getAngleInfoP().getAngleIncrementInfo();;
    

    RotationAnimationInterfaceCompositeInterface rotationAnimationInterfaceCompositeInterface = this->getOwnerLayerInterface() as RotationAnimationInterfaceCompositeInterface;;
    
rotationAnimationInterfaceCompositeInterface.setFrame(angleIncrementInfo.LEFT_FRAME.intValue());
    

                                    }
                                
}


};

            

