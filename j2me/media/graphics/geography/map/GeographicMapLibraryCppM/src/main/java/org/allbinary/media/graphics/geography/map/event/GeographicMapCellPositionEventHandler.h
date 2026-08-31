
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTHANDLER_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTHANDLER_H

            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/game/layer/geographic/map/MiniMapLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPositionEvent.h"
#include "GeographicMapCellPositionEventListenerInterface.h"

class GeographicMapCellPositionEventHandler: public BasicEventHandler {
        

    private: static instance: GeographicMapCellPositionEventHandler = new GeographicMapCellPositionEventHandler();

    public static GeographicMapCellPositionEventHandler getInstance();

    private: const list: BasicArrayList = new BasicArrayListD();

private constructor ();

    public addListener(MiniMapLayer miniMapLayer);

    public removeAllListeners();

    public removeListener(EventListenerInterface eventListenerInterface);

                //@Throws(Exception.constructor)
            
    public fireEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public fireRemoveEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_EVENT_GEOGRAPHICMAPCELLPOSITIONEVENTHANDLER_H
