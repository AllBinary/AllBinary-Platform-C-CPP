
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PressGameKeyEventHandler.h"
#include "UpGameKeyEventHandler.h"
#include "DownGameKeyEventHandler.h"

class GameKeyEventHandler
            : public Object
         {

    private: static GameKeyEventHandler instance() { return GameKeyEventHandler(); }

    public: static GameKeyEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameKeyEventHandler::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const PressGameKeyEventHandler pressGameKeyEventHandler = PressGameKeyEventHandler::getInstance();

    private: const UpGameKeyEventHandler upGameKeyEventHandler = UpGameKeyEventHandler::getInstance();

    private: const DownGameKeyEventHandler downGameKeyEventHandler = DownGameKeyEventHandler::getInstance();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeAllListeners(){
this->pressGameKeyEventHandler.removeAllListeners();
    
this->upGameKeyEventHandler.removeAllListeners();
    
this->downGameKeyEventHandler.removeAllListeners();
    
}


    public: void addListenerForPlayer(EventListenerInterface eventListenerInterface, int32_t playerInputId){
this->logUtil.putF(eventListenerInterface.toString(), this, this->commonStrings.ADD_LISTENER);
    
this->pressGameKeyEventHandler.addListenerSingleThreaded(eventListenerInterface);
    
this->upGameKeyEventHandler.getInstanceForPlayer(playerInputId).addListenerSingleThreaded(eventListenerInterface);
    
this->downGameKeyEventHandler.getInstanceForPlayer(playerInputId).addListenerSingleThreaded(eventListenerInterface);
    
}


    public: void addListener(EventListenerInterface eventListenerInterface){
this->logUtil.putF(eventListenerInterface.toString(), this, this->commonStrings.ADD_LISTENER);
    
this->pressGameKeyEventHandler.addListenerSingleThreaded(eventListenerInterface);
    
this->upGameKeyEventHandler.addListenerSingleThreaded(eventListenerInterface);
    
this->downGameKeyEventHandler.addListenerSingleThreaded(eventListenerInterface);
    
}


    public: void removeListener(EventListenerInterface eventListenerInterface){
this->logUtil.putF(eventListenerInterface.toString(), this, this->commonStrings.REMOVE_LISTENER);
    
this->pressGameKeyEventHandler.removeListenerSingleThreaded(eventListenerInterface);
    
this->upGameKeyEventHandler.removeListenerSingleThreaded(eventListenerInterface);
    
this->downGameKeyEventHandler.removeListenerSingleThreaded(eventListenerInterface);
    
}


};

            

