
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREABASE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREABASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/GeographicMapCellPositionAreaInterface.h"


GeographicMapCellPositionAreaBase::GeographicMapCellPositionAreaBase() {
        }
        auto GeographicMapCellPositionAreaBase::NULL_GEOGRPAHIC_MAP_POSITION_AREA_BASE_owner() -> GeographicMapCellPositionAreaBase* { static std::unique_ptr<GeographicMapCellPositionAreaBase> value(new GeographicMapCellPositionAreaBase()); return value.get(); }
GeographicMapCellPositionAreaBase* GeographicMapCellPositionAreaBase::NULL_GEOGRPAHIC_MAP_POSITION_AREA_BASE = GeographicMapCellPositionAreaBase::NULL_GEOGRPAHIC_MAP_POSITION_AREA_BASE_owner();

    auto GeographicMapCellPositionAreaBase::getNextSurroundingGeographicMapCellPosition() -> GeographicMapCellPosition*{



                            throw RuntimeException();
                    
}


    auto GeographicMapCellPositionAreaBase::getOccupyingGeographicMapCellPositionList() -> BasicArrayList*{



                            throw RuntimeException();
                    
}


    auto GeographicMapCellPositionAreaBase::getSurroundingGeographicMapCellPositionList() -> BasicArrayList*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellPositionAreaBase::update(BasicGeographicMap* geographicMapInterface) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_GEOGRAPHICMAPCELLPOSITIONAREABASE_CPP
