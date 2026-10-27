
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENTHANDLER_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventListenerInterface.h"
#include "org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h"

auto AnalogControllerConfigurationEventHandler::instance_owner() -> AnalogControllerConfigurationEventHandler* { static std::unique_ptr<AnalogControllerConfigurationEventHandler> value(new AnalogControllerConfigurationEventHandler()); return value.get(); }
AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler::instance = AnalogControllerConfigurationEventHandler::instance_owner();

    auto AnalogControllerConfigurationEventHandler::getInstance() -> AnalogControllerConfigurationEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnalogControllerConfigurationEventHandler::instance;
    
}


AnalogControllerConfigurationEventHandler::AnalogControllerConfigurationEventHandler() : list(new BasicArrayListD()){
}


    auto AnalogControllerConfigurationEventHandler::addListener(AnalogControllerConfigurationEventListenerInterface* analogControllerConfigurationEventListenerInterface) -> void{

                        if(!this->list->contains(analogControllerConfigurationEventListenerInterface))
                        
                                    {
                                    this->list->add(analogControllerConfigurationEventListenerInterface);
    

                                    }
                                
}


    auto AnalogControllerConfigurationEventHandler::removeAllListeners() -> void{
this->list->clear();
    
BasicEventHandler::removeAllListeners();
    
}


    auto AnalogControllerConfigurationEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto AnalogControllerConfigurationEventHandler::fireEvent(AllBinaryEventObject* eventObject) -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    AnalogControllerConfigurationEventListenerInterface* playerGameInput = dynamic_cast<AnalogControllerConfigurationEventListenerInterface*>(this->list->objectArray[index]);;
    
playerGameInput->onAnalogControllerConfigurationEvent(dynamic_cast<AnalogControllerConfigurationEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

BasicEventHandler::fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    auto AnalogControllerConfigurationEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    AnalogControllerConfigurationEventListenerInterface* analogControllerConfigurationEventListenerInterface = (dynamic_cast<AnalogControllerConfigurationEventListenerInterface*>(eventListenerInterface));;
    
analogControllerConfigurationEventListenerInterface->onAnalogControllerConfigurationEvent(dynamic_cast<AnalogControllerConfigurationEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_EVENT_ANALOGCONTROLLERCONFIGURATIONEVENTHANDLER_CPP
