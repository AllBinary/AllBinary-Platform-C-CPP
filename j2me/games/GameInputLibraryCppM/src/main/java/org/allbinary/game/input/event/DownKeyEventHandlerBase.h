
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLERBASE_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLERBASE_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameKeyEvent.h"
#include "DownKeyEventListenerInterface.h"

class DownKeyEventHandlerBase: public BasicEventHandler {
        

    private: static const TOTAL_LISTENERS: string = " Total PlayerGameInput Listeners: ";

    private: static const LISTENER_LABEL: string = " PlayerGameInput Listener: ";

    private: const list: BasicArrayList = new BasicArrayListD();

 constructor ();

    public addListener(PlayerGameInput playerGameInput);

    public removeAllListeners();

    public removeListenerSingleThreaded(EventListenerInterface eventListenerInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeListener(EventListenerInterface eventListenerInterface);

                //@Throws(Exception.constructor)
            
    public fireEventI(Integer eventObject);

                //@Throws(Exception.constructor)
            
    public fireEventForGameKeyEvent(GameKeyEvent eventObject);

                //@Throws(Exception.constructor)
            
    processI(Integer eventObject, EventListenerInterface eventListenerInterface);

                //@Throws(Exception.constructor)
            
    processEvent(GameKeyEvent eventObject, EventListenerInterface eventListenerInterface);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNKEYEVENTHANDLERBASE_H
