
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYEREVENT_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYEREVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/RTSLayerEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"


RTSLayerEvent::RTSLayerEvent(PathFindingLayerInterface* rtsLayer) : AllBinaryEventObject(rtsLayer), rtsLayer(NullPathFindingLayer::NULL_PATH_FINDING_LAYER){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto RTSLayerEvent::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("RTSLayerEvent: \n");
    
stringBuffer->append("RTSLayer: ");
    
stringBuffer->append(this->getRtsLayer()->toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto RTSLayerEvent::getRtsLayer() -> PathFindingLayerInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rtsLayer;
    
}


    auto RTSLayerEvent::setRtsLayer(PathFindingLayerInterface* rtsLayer) -> void{
this->rtsLayer= rtsLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYEREVENT_CPP
