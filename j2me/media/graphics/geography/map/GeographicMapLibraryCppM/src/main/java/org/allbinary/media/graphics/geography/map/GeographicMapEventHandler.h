
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPEVENTHANDLER_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPEVENTHANDLER_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeographicMapEventHandler: public BasicEventHandler {

    private: static GeographicMapEventHandler instance = GeographicMapEventHandler();

    public: static GeographicMapEventHandler getInstance();

    private: const BasicArrayList list = BasicArrayListD();

private: GeographicMapEventHandler();

    public: void addListener(AllBinaryGameLayer gameLayer);

    public: void removeAllListeners();

    public: void removeListener(EventListenerInterface eventListenerInterface);

    public: void fireEvent();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPEVENTHANDLER_H
