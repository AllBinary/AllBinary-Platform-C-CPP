
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPEVENTHANDLER_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/GeographicMapEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto GeographicMapEventHandler::instance_owner() -> GeographicMapEventHandler* { static std::unique_ptr<GeographicMapEventHandler> value(new GeographicMapEventHandler()); return value.get(); }
GeographicMapEventHandler* GeographicMapEventHandler::instance = GeographicMapEventHandler::instance_owner();

    auto GeographicMapEventHandler::getInstance() -> GeographicMapEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapEventHandler::instance;
    
}


GeographicMapEventHandler::GeographicMapEventHandler() : list(new BasicArrayListD()){
}


    auto GeographicMapEventHandler::addListener(AllBinaryGameLayer* gameLayer) -> void{

                        if(!this->list->contains(gameLayer))
                        
                                    {
                                    this->list->add(gameLayer);
    

                                    }
                                
}


    auto GeographicMapEventHandler::removeAllListeners() -> void{
this->list->clear();
    
BasicEventHandler::removeAllListeners();
    
}


    auto GeographicMapEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListener(eventListenerInterface);
    
}


    auto GeographicMapEventHandler::fireEvent() -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    AllBinaryGameLayer* gameLayer = dynamic_cast<AllBinaryGameLayer*>(this->list->get(index));;
    
gameLayer->move();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPEVENTHANDLER_CPP
