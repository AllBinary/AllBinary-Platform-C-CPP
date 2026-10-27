
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_TACTICAL_HORIZONTALMANEUVERAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_TACTICAL_HORIZONTALMANEUVERAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/tactical/HorizontalManeuverAI.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HorizontalManeuverAI::HorizontalManeuverAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->currentSpeed= 5;
    
}


                //@Throws(Exception.constructor)
            
    auto HorizontalManeuverAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{

    AllBinaryLayer* ownerLayerInterface = this->getOwnerLayerInterface();;
    

    int32_t x = ownerLayerInterface->getXP();;
    

                        if(ownerLayerInterface->getXP() -this->currentSpeed <= 0)
                        
                                    {
                                    this->reverse();
    
this->drop();
    

                                    }
                                

                        if(ownerLayerInterface->getX2() +this->currentSpeed > DisplayInfoSingleton::getInstance()->getLastWidth())
                        
                                    {
                                    this->reverse();
    
this->accelerate();
    
this->drop();
    

                                    }
                                

                        if(this->currentRelativeAngle == 0)
                        
                                    {
                                    x += this->currentSpeed;
    

                                    }
                                
                             else 
                        if(this->currentRelativeAngle == 180)
                        
                                    {
                                    x -= this->currentSpeed;
    

                                    }
                                
ownerLayerInterface->setPosition(x, ownerLayerInterface->getYP(), ownerLayerInterface->getZP());
    

                        if(this->currentRelativeAngle == 0)
                        
                                    {
                                    BasicAI::processKeyAI(Canvas::KEY_NUM0);
    

                                    }
                                
                             else 
                        if(this->currentRelativeAngle == 180)
                        
                                    {
                                    BasicAI::processKeyAI(Canvas::KEY_POUND);
    

                                    }
                                
}


    auto HorizontalManeuverAI::reverse() -> void{

                        if(this->currentRelativeAngle == 180)
                        
                                    {
                                    this->currentRelativeAngle= 0;
    

                                    }
                                
                             else 
                        if(this->currentRelativeAngle == 0)
                        
                                    {
                                    this->currentRelativeAngle= 180;
    

                                    }
                                
}


    auto HorizontalManeuverAI::accelerate() -> void{

                        if(this->currentSpeed < 20)
                        
                                    {
                                    this->currentSpeed++;
    

                                    }
                                
}


    auto HorizontalManeuverAI::drop() -> void{

    AllBinaryLayer* ownerLayerInterface = this->getOwnerLayerInterface();;
    

    int32_t y = ownerLayerInterface->getYP();;
    

                        if(ownerLayerInterface->getY2() +ownerLayerInterface->getHeight() > DisplayInfoSingleton::getInstance()->getLastHeight())
                        
                                    {
                                    y= 0;
    

                                    }
                                
                        else {
                            y += ownerLayerInterface->getHeight() +1;
    

                        }
                            
ownerLayerInterface->setPosition(ownerLayerInterface->getXP(), y, ownerLayerInterface->getZP());
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_TACTICAL_HORIZONTALMANEUVERAI_CPP
