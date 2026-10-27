
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_NOGEOGRAPHICMAPCELLPOSITIONFACTORYINITVISITOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_NOGEOGRAPHICMAPCELLPOSITIONFACTORYINITVISITOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"

class NoGeographicMapCellPositionFactoryInitVisitor
            : public Object
        , public GeographicMapCellPositionFactoryInitVisitorInterface {

                //@Throws(Exception.constructor)
            
    public: void visit(AllBinaryTiledLayer* tiledLayer, GeographicMapCellPosition* cellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_NOGEOGRAPHICMAPCELLPOSITIONFACTORYINITVISITOR_H
