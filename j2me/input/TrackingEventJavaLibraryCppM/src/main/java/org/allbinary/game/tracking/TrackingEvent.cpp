
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
        



        #ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_CPP
        #define ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/tracking/TrackingEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/tracking/TrackingEventHandler.h"


TrackingEvent::TrackingEvent(Object* allBinaryLayerInterface) : AllBinaryEventObject(allBinaryLayerInterface), layerInterface(AllBinaryLayer::NULL_ALLBINARY_LAYER){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(allBinaryLayerInterface != TrackingEventHandler::getInstance())
                        
                                    {
                                    this->setLayerInterface(dynamic_cast<AllBinaryLayer*>(allBinaryLayerInterface));
    

                                    }
                                
}


    auto TrackingEvent::init(Object* anyType) -> void{
this->setSource(anyType);
    
}


    auto TrackingEvent::getLayerInterface() -> AllBinaryLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->layerInterface;
    
}


    auto TrackingEvent::setLayerInterface(AllBinaryLayer* layerInterface) -> void{
this->layerInterface= layerInterface;
    
}


    auto TrackingEvent::setLayerInterfaceForCircularStaticPool(AllBinaryLayer* layerInterface) -> void{
this->layerInterface= layerInterface;
    
}


    auto TrackingEvent::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("TrackingEvent: \n");
    
stringBuffer->append("LayerInterface: ");
    
stringBuffer->append(this->layerInterface->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_TRACKING_TRACKINGEVENT_CPP
