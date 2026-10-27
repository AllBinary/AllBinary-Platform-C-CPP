
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_H
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_H

        
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
class StringUtil;
class AllBinaryEventObject;
class EventListenerInterface;
class EventStrings;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/event/handler/BasicEventHandlerInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicEventHandler
            : public virtual Object
        , public BasicEventHandlerInterface {

    public: static inline const std::string PERFORMANCE_MESSAGE = "Use Custom onEvent Methods for needed optimization";

    /*protected*/ public: LogUtil* logUtil;

    private: BasicArrayList* eventListenerInterfaceList;

public: BasicEventHandler();

    public: std::string toString();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeAllListeners();

    public: void addListenerSingleThreaded(EventListenerInterface* eventListenerInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addListenerInterface(EventListenerInterface* eventListenerInterface);

    public: void removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface* eventListenerInterface);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void fireEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

    public: BasicArrayList* getEventListenerInterfaceListP();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
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
#if __has_include("org/allbinary/logic/util/event/handler/BasicEventHandlerInterface.h")
#include "org/allbinary/logic/util/event/handler/BasicEventHandlerInterface.h"
#endif

        #endif
    
