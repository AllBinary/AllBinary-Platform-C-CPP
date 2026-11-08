
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/LurchRotationAI.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/RotationAnimationInterface.h>

      
#include <org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/ag/ai/tactical/LurchAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/math/AngleIncrementInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LurchRotationAI::LurchRotationAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : LurchAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = dynamic_cast<RotationAnimationInterfaceCompositeInterface*>(this->getOwnerLayerInterface());;
    
this->rotationAnimationInterface= rotationAnimationInterfaceCompositeInterface->getRotationAnimationInterface();
    
this->update();
    
}


    auto LurchRotationAI::reverse() -> void{
LurchAI::reverse();
    
this->update();
    
}


    auto LurchRotationAI::update() -> void{

                        if(this->currentRelativeAngle == 0)
                        
                                    {
                                    
    RotationAnimationInterface* rotationAnimationInterface = dynamic_cast<RotationAnimationInterface*>(this->rotationAnimationInterface);;
    

    AngleIncrementInfo* angleIncrementInfo = rotationAnimationInterface->getAngleInfoP()->getAngleIncrementInfo();;
    

    RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = dynamic_cast<RotationAnimationInterfaceCompositeInterface*>(this->getOwnerLayerInterface());;
    
rotationAnimationInterfaceCompositeInterface->setFrame(JavaBoxes::value<int32_t>(angleIncrementInfo->RIGHT_FRAME));
    

                                    }
                                
                             else 
                        if(this->currentRelativeAngle == 180)
                        
                                    {
                                    
    RotationAnimationInterface* rotationAnimationInterface = dynamic_cast<RotationAnimationInterface*>(this->rotationAnimationInterface);;
    

    AngleIncrementInfo* angleIncrementInfo = rotationAnimationInterface->getAngleInfoP()->getAngleIncrementInfo();;
    

    RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = dynamic_cast<RotationAnimationInterfaceCompositeInterface*>(this->getOwnerLayerInterface());;
    
rotationAnimationInterfaceCompositeInterface->setFrame(JavaBoxes::value<int32_t>(angleIncrementInfo->LEFT_FRAME));
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_LURCHROTATIONAI_CPP
