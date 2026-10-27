
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Font;
class Graphics;
class RTSLayer;
#include <org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h>
class BasicArrayList;
class KeyValueDrawCharArray;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeologicalGeographicMapCellPosition;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeologicalResourceInfoHudPaintable: public WaypointInfoHudPaintable {

    private: static inline const std::string RESOURCES = "Resources: ";

    private: KeyValueDrawCharArray* keyvalueDrawString;

    private: int32_t fontHeight = 0;

public: GeologicalResourceInfoHudPaintable();

    public: void updateMeasurement(Graphics* graphics);

    public: void updateSelectionInfo();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h>)
#include <org/allbinary/game/layer/waypoint/WaypointInfoHudPaintable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/graphics/draw/KeyValueDrawCharArray.h>)
#include <org/allbinary/graphics/draw/KeyValueDrawCharArray.h>
#endif
#if __has_include("org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h")
#include "org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h"
#endif

        #endif
    
