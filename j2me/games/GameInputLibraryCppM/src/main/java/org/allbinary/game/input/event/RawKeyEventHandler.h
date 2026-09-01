
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

    private: static RawKeyEventHandler instance() { return RawKeyEventHandler(); }

    public: static RawKeyEventHandler getInstance();

    private: static const std::string TOTAL_LISTENERS = "Total Listeners: ";

    private: static const std::string LISTENER_LABEL = " Listener: ";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: BasicArrayList eventListenerInterfaceList;

public: RawKeyEventHandler();

    public: void removeAllListeners();

    public: void addListeners(BasicArrayList vector);

    public: void addListenerSingleThreaded(RawKeyEventListener eventListenerInterface);

    public: void addListener(RawKeyEventListener eventListenerInterface);

    public: void removeListenerSingleThreaded(RawKeyEventListener eventListenerInterface);

    public: void removeListener(RawKeyEventListener eventListenerInterface);

                //@Throws(Exception.constructor)
            
    public: void fireEvent(int32_t keyCode, int32_t deviceId, bool repeated);

                //@Throws(Exception.constructor)
            
    protected: void process(int32_t keyCode, int32_t deviceId, bool repeated, RawKeyEventListener eventListenerInterface);

    public: BasicArrayList getEventListenerInterfaceListP();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_H
