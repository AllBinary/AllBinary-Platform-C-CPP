
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class StringMaker;
class EventStrings;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RawKeyEventListener;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RawKeyEventHandler
            : public virtual Object
         {

    private: static RawKeyEventHandler* instance_owner();
    private: static RawKeyEventHandler* instance;

    public: static RawKeyEventHandler* getInstance();

    private: static inline const std::string TOTAL_LISTENERS = "Total Listeners: ";

    private: static inline const std::string LISTENER_LABEL = " Listener: ";

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: BasicArrayList* eventListenerInterfaceList;

public: RawKeyEventHandler();

    public: void removeAllListeners();

    public: void addListeners(BasicArrayList* vector);

    public: void addListenerSingleThreaded(RawKeyEventListener* eventListenerInterface);

    public: void addListener(RawKeyEventListener* eventListenerInterface);

    public: void removeListenerSingleThreaded(RawKeyEventListener* eventListenerInterface);

    public: void removeListener(RawKeyEventListener* eventListenerInterface);

                //@Throws(Exception.constructor)
            
    public: void fireEvent(int32_t keyCode, int32_t deviceId, bool repeated);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void process(int32_t keyCode, int32_t deviceId, bool repeated, RawKeyEventListener* eventListenerInterface);

    public: BasicArrayList* getEventListenerInterfaceListP();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/input/event/RawKeyEventListener.h")
#include "org/allbinary/game/input/event/RawKeyEventListener.h"
#endif

        #endif
    
