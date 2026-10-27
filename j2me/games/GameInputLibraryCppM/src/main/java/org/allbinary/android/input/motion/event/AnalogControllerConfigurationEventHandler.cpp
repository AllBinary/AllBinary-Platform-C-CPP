
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

class AnalogControllerConfigurationEventHandler: public BasicEventHandler {

    private: static AnalogControllerConfigurationEventHandler* instance() { static std::unique_ptr<AnalogControllerConfigurationEventHandler> value(new AnalogControllerConfigurationEventHandler()); return value.get(); }

    public: static AnalogControllerConfigurationEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnalogControllerConfigurationEventHandler::instance();
    
}


    private: BasicArrayList* list = new BasicArrayListD();

private: AnalogControllerConfigurationEventHandler(){
}


    public: void addListener(AnalogControllerConfigurationEventListenerInterface* analogControllerConfigurationEventListenerInterface){

                        if(!this->list->contains(analogControllerConfigurationEventListenerInterface))
                        
                                    {
                                    this->list->add(analogControllerConfigurationEventListenerInterface);
    

                                    }
                                
}


    public: void removeAllListeners(){
this->list->clear();
    
super.removeAllListeners();
    
}


    public: void removeListener(EventListenerInterface* eventListenerInterface){
this->list->remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void fireEvent(AllBinaryEventObject* eventObject){




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    AnalogControllerConfigurationEventListenerInterface* playerGameInput = dynamic_cast<AnalogControllerConfigurationEventListenerInterface*>(this->list->objectArray[index]);;
    
playerGameInput->onAnalogControllerConfigurationEvent(dynamic_cast<AnalogControllerConfigurationEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface){

    AnalogControllerConfigurationEventListenerInterface* analogControllerConfigurationEventListenerInterface = (dynamic_cast<AnalogControllerConfigurationEventListenerInterface*>(eventListenerInterface));;
    
analogControllerConfigurationEventListenerInterface->onAnalogControllerConfigurationEvent(dynamic_cast<AnalogControllerConfigurationEvent*>(eventObject));
    
}


};

            

