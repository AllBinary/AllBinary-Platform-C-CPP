
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DropCellPositionGeneratorInterface.h"

class BaseDropCellPositionGenerator
            : public Object
        : public DropCellPositionGeneratorInterface {

    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryGameLayerManager allBinaryGameLayerManager, BasicGeographicMap geographicMapInterface);

                //@Throws(Exception.constructor)
            
    public: bool isDropAllowedAt(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_DROP_BASEDROPCELLPOSITIONGENERATOR_H
