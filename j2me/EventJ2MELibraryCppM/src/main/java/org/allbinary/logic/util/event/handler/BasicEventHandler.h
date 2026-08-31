
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicEventHandlerInterface.h"

class BasicEventHandler
            : public Object
        : public BasicEventHandlerInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const eventStrings: EventStrings = EventStrings.getInstance()!;

    eventListenerInterfaceList: BasicArrayList;

public constructor ();

    public removeAllListeners();

    public addListeners(BasicArrayList vector);

    public removeListeners(BasicArrayList vector);

    public addListenerSingleThreaded(EventListenerInterface eventListenerInterface);

    public addListenerInterface(EventListenerInterface eventListenerInterface);

    public removeListenerSingleThreaded(EventListenerInterface eventListenerInterface);

    public removeListener(EventListenerInterface eventListenerInterface);

                //@Throws(Exception.constructor)
            
    public fireEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface);

    public BasicArrayList getEventListenerInterfaceListP();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_H
