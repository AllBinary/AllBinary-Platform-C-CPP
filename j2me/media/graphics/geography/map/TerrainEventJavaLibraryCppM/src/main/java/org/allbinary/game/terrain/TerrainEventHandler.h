
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
        



        #ifndef ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTHANDLER_H
        #define ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTHANDLER_H

            #include "../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TerrainEventListener.h"
#include "TerrainEvent.h"
#include "TerrainEventListenerInterface.h"

class TerrainEventHandler: public BasicEventHandler {
        

    private: static hashtable: Hashtable<any, any> = NullUtil.getInstance()!.NULL_TABLE;

    public static init();

    public static TerrainEventHandler getInstance(any = {} anyType);

    private: const list: BasicArrayList = new BasicArrayListD();

private constructor ();

    public addListener(TerrainEventListener terrainEventListener);

    public removeAllListeners();

    public removeListener(EventListenerInterface eventListenerInterface);

                //@Throws(Exception.constructor)
            
    public fireEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_TERRAIN_TERRAINEVENTHANDLER_H
