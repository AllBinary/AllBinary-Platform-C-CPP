
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
        
class HorizontaRotationManeuverAI: public BasicAI, public ArtificialIntelligenceTransitionInterface {

    private: const CircularIndexUtil circularIndexUtil = CircularIndexUtil::createInstanceAt(10, Integer::MAX_VALUE);

    private: int32_t currentSpeedDivisor = 5;

    private: IndexedAnimation rotationAnimationInterface;

    private: BasicVelocityProperties baseVelocityInterface;

    private: VelocityInterface velocityInterface;

public: HorizontaRotationManeuverAI(AllBinaryLayer ownerLayerInterface, GameInput gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    RotationAnimationInterfaceCompositeInterface rotationAnimationInterfaceCompositeInterface = this->getOwnerLayerInterface() as unknown;;
    
this->rotationAnimationInterface= rotationAnimationInterfaceCompositeInterface.getRotationAnimationInterface();
    

    VelocityInterfaceCompositeInterface velocityInterfaceCompositeInterface = this->getOwnerLayerInterface() as unknown;;
    
this->baseVelocityInterface= velocityInterfaceCompositeInterface.getVelocityProperties();
    
this->velocityInterface= this->baseVelocityInterface as unknown;
    

    RotationAnimationInterface rotationAnimationInterface = this->rotationAnimationInterface as unknown;;
    

    AngleIncrementInfo angleIncrementInfo = rotationAnimationInterface.getAngleInfoP().getAngleIncrementInfo();;
    
rotationAnimationInterfaceCompositeInterface.setFrame(angleIncrementInfo.RIGHT_FRAME.intValue());
    
}


    public: void transition(){

    RotationAnimationInterface rotationAnimationInterface = this->rotationAnimationInterface as unknown;;
    

    AngleIncrementInfo angleIncrementInfo = rotationAnimationInterface.getAngleInfoP().getAngleIncrementInfo();;
    

    RotationAnimationInterfaceCompositeInterface rotationAnimationInterfaceCompositeInterface = this->getOwnerLayerInterface() as unknown;;
    
rotationAnimationInterfaceCompositeInterface.setFrame(angleIncrementInfo.RIGHT_FRAME.intValue());
    

    AllBinaryLayer allbinaryLayer = this->getOwnerLayerInterface();;
    
allbinaryLayer.setPosition(allbinaryLayer.getXP(), 1, allbinaryLayer.getZP());
    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager){

    RotationAnimationInterface rotationAnimationInterface = (this->rotationAnimationInterface as unknown);;
    

    AngleIncrementInfo angleIncrementInfo = rotationAnimationInterface.getAngleInfoP().getAngleIncrementInfo();;
    

    int32_t frame = this->rotationAnimationInterface.getFrame();;
    

    AllBinaryLayer ownerLayerInterface = this->getOwnerLayerInterface();;
    

                        if(ownerLayerInterface.getXP() -ownerLayerInterface.getWidth() <= 0 && frame == angleIncrementInfo.LEFT_FRAME.intValue())
                        
                                    {
                                    this->reverse();
    
this->drop();
    

                                    }
                                

    DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();;
    

                        if(ownerLayerInterface.getX2() +ownerLayerInterface.getWidth() > displayInfo.getLastWidth() && frame == angleIncrementInfo.RIGHT_FRAME.intValue())
                        
                                    {
                                    this->reverse();
    
this->accelerate();
    
this->drop();
    

                                    }
                                

    int32_t index = this->circularIndexUtil.getIndex();;
    

                        if(index % this->currentSpeedDivisor == 0 && index % 2 == 0)
                        
                                    {
                                    super.processKeyAI(Canvas::UP);
    
this->velocityInterface.limitMaxXYVelocity(this->velocityInterface.getMaxForwardVelocity() /this->currentSpeedDivisor);
    

                                    }
                                
this->circularIndexUtil.next();
    

                        if(frame == angleIncrementInfo.LEFT_FRAME.intValue())
                        
                                    {
                                    super.processKeyAI(Canvas::KEY_NUM0);
    

                                    }
                                
                             else 
                        if(frame == angleIncrementInfo.RIGHT_FRAME.intValue())
                        
                                    {
                                    super.processKeyAI(Canvas::KEY_POUND);
    

                                    }
                                
}


    protected: void reverse(){

    RotationAnimationInterface rotationAnimationInterface = this->rotationAnimationInterface as unknown;;
    

    AngleIncrementInfo angleIncrementInfo = rotationAnimationInterface.getAngleInfoP().getAngleIncrementInfo();;
    

    int32_t frame = this->rotationAnimationInterface.getFrame();;
    

                        if(frame == angleIncrementInfo.LEFT_FRAME.intValue())
                        
                                    {
                                    
    RotationAnimationInterfaceCompositeInterface rotationAnimationInterfaceCompositeInterface = this->getOwnerLayerInterface() as unknown;;
    
rotationAnimationInterfaceCompositeInterface.setFrame(angleIncrementInfo.RIGHT_FRAME.intValue());
    
this->baseVelocityInterface.zero();
    

                                    }
                                
                             else 
                        if(frame == angleIncrementInfo.RIGHT_FRAME.intValue())
                        
                                    {
                                    
    RotationAnimationInterfaceCompositeInterface rotationAnimationInterfaceCompositeInterface = this->getOwnerLayerInterface() as unknown;;
    
rotationAnimationInterfaceCompositeInterface.setFrame(angleIncrementInfo.LEFT_FRAME.intValue());
    
this->baseVelocityInterface.zero();
    

                                    }
                                
}


    private: void accelerate(){

                        if(this->currentSpeedDivisor > 1)
                        
                                    {
                                    this->currentSpeedDivisor--;
    

                                    }
                                
}


    private: void drop(){

    DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();;
    

    AllBinaryLayer ownerLayerInterface = this->getOwnerLayerInterface();;
    

    int32_t y = ownerLayerInterface.getYP();;
    

                        if(ownerLayerInterface.getY2() +ownerLayerInterface.getHeight() > displayInfo.getLastHeight())
                        
                                    {
                                    y= 0;
    

                                    }
                                
                        else {
                            y += ownerLayerInterface.getHeight() +1;
    

                        }
                            
ownerLayerInterface.setPosition(ownerLayerInterface.getXP(), y, ownerLayerInterface.getZP());
    
}


    public: int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ArtificialIntelligence::AI_ID;
    
}


};

            

