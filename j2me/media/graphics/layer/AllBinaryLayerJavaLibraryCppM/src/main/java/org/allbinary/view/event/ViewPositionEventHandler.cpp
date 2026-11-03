
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
        



        #ifndef ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENTHANDLER_CPP
        #define ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/view/event/ViewPositionEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/event/ViewPositionEvent.h"
#include "org/allbinary/view/event/ViewPositionEventListenerInterface.h"

auto ViewPositionEventHandler::SINGLETON_owner() -> ViewPositionEventHandler* { static std::unique_ptr<ViewPositionEventHandler> value(new ViewPositionEventHandler()); return value.get(); }
ViewPositionEventHandler* ViewPositionEventHandler::SINGLETON = ViewPositionEventHandler::SINGLETON_owner();

    auto ViewPositionEventHandler::getInstance() -> ViewPositionEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ViewPositionEventHandler::SINGLETON;
    
}


ViewPositionEventHandler::ViewPositionEventHandler() : list(new BasicArrayListD()){
}


    auto ViewPositionEventHandler::addListener(AllBinaryLayer* layerInterface) -> void{

                        if(!this->list->contains(layerInterface))
                        
                                    {
                                    this->list->add(layerInterface);
    

                                    }
                                
}


    auto ViewPositionEventHandler::removeAllListeners() -> void{
this->list->clear();
    
BasicEventHandler::removeAllListeners();
    
}


    auto ViewPositionEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto ViewPositionEventHandler::fireEvent(AllBinaryEventObject* eventObject) -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    AllBinaryLayer* layerInterface = dynamic_cast<AllBinaryLayer*>(this->list->objectArray[index]);;
    
layerInterface->onChangeEvent(dynamic_cast<ViewPositionEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

BasicEventHandler::fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    auto ViewPositionEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    ViewPositionEventListenerInterface* viewPositionEventListenerInterface = (dynamic_cast<ViewPositionEventListenerInterface*>(eventListenerInterface));;
    
viewPositionEventListenerInterface->onChangeEvent(dynamic_cast<ViewPositionEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_VIEW_EVENT_VIEWPOSITIONEVENTHANDLER_CPP
