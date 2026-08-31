
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RawKeyEventListener.h"

class RawKeyEventHandler
            : public Object
         {
        

    private: static const instance: RawKeyEventHandler = new RawKeyEventHandler();

    public static RawKeyEventHandler getInstance();

    private: static const TOTAL_LISTENERS: string = "Total Listeners: ";

    private: static const LISTENER_LABEL: string = " Listener: ";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    eventListenerInterfaceList: BasicArrayList;

public constructor ();

    public removeAllListeners();

    public addListeners(BasicArrayList vector);

    public addListenerSingleThreaded(RawKeyEventListener eventListenerInterface);

    public addListener(RawKeyEventListener eventListenerInterface);

    public removeListenerSingleThreaded(RawKeyEventListener eventListenerInterface);

    public removeListener(RawKeyEventListener eventListenerInterface);

                //@Throws(Exception.constructor)
            
    public fireEvent(int32_t keyCode, int32_t deviceId, bool repeated);

                //@Throws(Exception.constructor)
            
    process(int32_t keyCode, int32_t deviceId, bool repeated, RawKeyEventListener eventListenerInterface);

    public BasicArrayList getEventListenerInterfaceListP();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_H
