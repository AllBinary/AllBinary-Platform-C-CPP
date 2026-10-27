
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/NullGameCanvas.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"


DestroyedEvent::DestroyedEvent(AllBinaryGameCanvas* combatGameCanvas) : AllBinaryEventObject(DestroyedEventHandler::getInstance()), allBinaryGameCanvas(NullGameCanvas::getInstance()), allBinaryLayerInterface(AllBinaryLayer::NULL_ALLBINARY_LAYER){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setAllBinaryGameCanvas(combatGameCanvas);
    
}


    auto DestroyedEvent::getAllBinaryGameCanvas() -> AllBinaryGameCanvas*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->allBinaryGameCanvas;
    
}


    auto DestroyedEvent::getLayerInterface() -> AllBinaryLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->allBinaryLayerInterface;
    
}


    auto DestroyedEvent::setAllBinaryGameCanvas(AllBinaryGameCanvas* allBinaryGameCanvas) -> void{
this->allBinaryGameCanvas= allBinaryGameCanvas;
    
}


    auto DestroyedEvent::setLayerInterfaceForCircularStaticPool(AllBinaryLayer* allBinaryLayerInterface) -> void{
this->allBinaryLayerInterface= allBinaryLayerInterface;
    
}


    auto DestroyedEvent::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("DestroyedEvent: \n");
    
stringBuffer->append("AllBinaryLayerInterface: ");
    
stringBuffer->append(this->allBinaryLayerInterface->toString());
    
stringBuffer->append("\nAllBinaryGameCanvas: ");
    
stringBuffer->append(StringUtil::getInstance()->toString(this->getAllBinaryGameCanvas()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENT_CPP
