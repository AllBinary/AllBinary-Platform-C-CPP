
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/BoundBounceAI.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/bounds/BoundsVisitorInterface.h>

      
#include <org/allbinary/bounds/LayerBounds.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BoundBounceAI::BoundBounceAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, LayerBounds* layerBounds, BoundsVisitorInterface* boundsVisitorInterface) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->layerBounds= layerBounds;
    
this->boundsVisitorInterface= boundsVisitorInterface;
    
}


    auto BoundBounceAI::paint(Graphics* graphics) -> void{

    Rectangle* rectange = this->layerBounds->getRectangleP();;
    
graphics->drawRect(rectange->getPoint()->getX(), rectange->getPoint()->getY(), rectange->getWidth(), rectange->getHeight());
    
}


                //@Throws(Exception.constructor)
            
    auto BoundBounceAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{
this->layerBounds->visit(this->boundsVisitorInterface);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_CPP
