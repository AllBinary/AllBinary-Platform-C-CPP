
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREABASE_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREABASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class BasicGeographicMap;
class GeographicMapCellPosition;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/GeographicMapCellPositionAreaInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellPositionAreaBase
            : public virtual Object
        , public GeographicMapCellPositionAreaInterface {

    private: static GeographicMapCellPositionAreaBase* NULL_GEOGRPAHIC_MAP_POSITION_AREA_BASE_owner();
    public: static GeographicMapCellPositionAreaBase* NULL_GEOGRPAHIC_MAP_POSITION_AREA_BASE;


            
    public: GeographicMapCellPositionAreaBase();
        
    public: GeographicMapCellPosition* getNextSurroundingGeographicMapCellPosition();

    public: BasicArrayList* getOccupyingGeographicMapCellPositionList();

    public: BasicArrayList* getSurroundingGeographicMapCellPositionList();

                //@Throws(Exception.constructor)
            
    public: void update(BasicGeographicMap* geographicMapInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREABASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREABASE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREABASE_H_COMPLETE
        #if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/layer/GeographicMapCellPositionAreaInterface.h")
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaInterface.h"
#endif

        #endif
    
