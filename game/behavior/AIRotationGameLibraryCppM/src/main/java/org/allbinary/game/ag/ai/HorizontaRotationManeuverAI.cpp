
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/HorizontaRotationManeuverAI.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/ai/ArtificialIntelligence.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/RotationAnimationInterface.h>

      
#include <org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterface.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/math/AngleIncrementInfo.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HorizontaRotationManeuverAI::HorizontaRotationManeuverAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasicAI(ownerLayerInterface, gameInput), circularIndexUtil(CircularIndexUtil::createInstanceAt(10, Integer.MAX_VALUE)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = dynamic_cast<RotationAnimationInterfaceCompositeInterface*>(this->getOwnerLayerInterface());;
    
this->rotationAnimationInterface= rotationAnimationInterfaceCompositeInterface->getRotationAnimationInterface();
    

    VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = dynamic_cast<VelocityInterfaceCompositeInterface*>(this->getOwnerLayerInterface());;
    
this->baseVelocityInterface= velocityInterfaceCompositeInterface->getVelocityProperties();
    
this->velocityInterface= dynamic_cast<VelocityInterface*>(this->baseVelocityInterface);
    

    RotationAnimationInterface* rotationAnimationInterface = dynamic_cast<RotationAnimationInterface*>(this->rotationAnimationInterface);;
    

    AngleIncrementInfo* angleIncrementInfo = rotationAnimationInterface->getAngleInfoP()->getAngleIncrementInfo();;
    
rotationAnimationInterfaceCompositeInterface->setFrame(angleIncrementInfo->RIGHT_FRAME->intValue());
    
}


    auto HorizontaRotationManeuverAI::transition() -> void{

    RotationAnimationInterface* rotationAnimationInterface = dynamic_cast<RotationAnimationInterface*>(this->rotationAnimationInterface);;
    

    AngleIncrementInfo* angleIncrementInfo = rotationAnimationInterface->getAngleInfoP()->getAngleIncrementInfo();;
    

    RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = dynamic_cast<RotationAnimationInterfaceCompositeInterface*>(this->getOwnerLayerInterface());;
    
rotationAnimationInterfaceCompositeInterface->setFrame(angleIncrementInfo->RIGHT_FRAME->intValue());
    

    AllBinaryLayer* allbinaryLayer = this->getOwnerLayerInterface();;
    
allbinaryLayer->setPosition(allbinaryLayer->getXP(), 1, allbinaryLayer->getZP());
    
}


                //@Throws(Exception.constructor)
            
    auto HorizontaRotationManeuverAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{

    RotationAnimationInterface* rotationAnimationInterface = (dynamic_cast<RotationAnimationInterface*>(this->rotationAnimationInterface));;
    

    AngleIncrementInfo* angleIncrementInfo = rotationAnimationInterface->getAngleInfoP()->getAngleIncrementInfo();;
    

    int32_t frame = this->rotationAnimationInterface->getFrame();;
    

    AllBinaryLayer* ownerLayerInterface = this->getOwnerLayerInterface();;
    

                        if(ownerLayerInterface->getXP() -ownerLayerInterface->getWidth() <= 0 && frame == angleIncrementInfo->LEFT_FRAME->intValue())
                        
                                    {
                                    this->reverse();
    
this->drop();
    

                                    }
                                

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

                        if(ownerLayerInterface->getX2() +ownerLayerInterface->getWidth() > displayInfo->getLastWidth() && frame == angleIncrementInfo->RIGHT_FRAME->intValue())
                        
                                    {
                                    this->reverse();
    
this->accelerate();
    
this->drop();
    

                                    }
                                

    int32_t index = this->circularIndexUtil->getIndex();;
    

                        if(index % this->currentSpeedDivisor == 0 && index % 2 == 0)
                        
                                    {
                                    BasicAI::processKeyAI(Canvas::UP);
    
this->velocityInterface->limitMaxXYVelocity(this->velocityInterface->getMaxForwardVelocity() /this->currentSpeedDivisor);
    

                                    }
                                
this->circularIndexUtil->next();
    

                        if(frame == angleIncrementInfo->LEFT_FRAME->intValue())
                        
                                    {
                                    BasicAI::processKeyAI(Canvas::KEY_NUM0);
    

                                    }
                                
                             else 
                        if(frame == angleIncrementInfo->RIGHT_FRAME->intValue())
                        
                                    {
                                    BasicAI::processKeyAI(Canvas::KEY_POUND);
    

                                    }
                                
}


    auto HorizontaRotationManeuverAI::reverse() -> void{

    RotationAnimationInterface* rotationAnimationInterface = dynamic_cast<RotationAnimationInterface*>(this->rotationAnimationInterface);;
    

    AngleIncrementInfo* angleIncrementInfo = rotationAnimationInterface->getAngleInfoP()->getAngleIncrementInfo();;
    

    int32_t frame = this->rotationAnimationInterface->getFrame();;
    

                        if(frame == angleIncrementInfo->LEFT_FRAME->intValue())
                        
                                    {
                                    
    RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = dynamic_cast<RotationAnimationInterfaceCompositeInterface*>(this->getOwnerLayerInterface());;
    
rotationAnimationInterfaceCompositeInterface->setFrame(angleIncrementInfo->RIGHT_FRAME->intValue());
    
this->baseVelocityInterface->zero();
    

                                    }
                                
                             else 
                        if(frame == angleIncrementInfo->RIGHT_FRAME->intValue())
                        
                                    {
                                    
    RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = dynamic_cast<RotationAnimationInterfaceCompositeInterface*>(this->getOwnerLayerInterface());;
    
rotationAnimationInterfaceCompositeInterface->setFrame(angleIncrementInfo->LEFT_FRAME->intValue());
    
this->baseVelocityInterface->zero();
    

                                    }
                                
}


    auto HorizontaRotationManeuverAI::accelerate() -> void{

                        if(this->currentSpeedDivisor > 1)
                        
                                    {
                                    this->currentSpeedDivisor--;
    

                                    }
                                
}


    auto HorizontaRotationManeuverAI::drop() -> void{

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

    AllBinaryLayer* ownerLayerInterface = this->getOwnerLayerInterface();;
    

    int32_t y = ownerLayerInterface->getYP();;
    

                        if(ownerLayerInterface->getY2() +ownerLayerInterface->getHeight() > displayInfo->getLastHeight())
                        
                                    {
                                    y= 0;
    

                                    }
                                
                        else {
                            y += ownerLayerInterface->getHeight() +1;
    

                        }
                            
ownerLayerInterface->setPosition(ownerLayerInterface->getXP(), y, ownerLayerInterface->getZP());
    
}


    auto HorizontaRotationManeuverAI::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ArtificialIntelligence::AI_ID;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_HORIZONTAROTATIONMANEUVERAI_CPP
