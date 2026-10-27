
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h"

class GeologicalGeographicMapCellPositionFactoryInitVisitor
            : public Object
        , public GeographicMapCellPositionFactoryInitVisitorInterface {

                //@Throws(Exception.constructor)
            
    public: void visit(AllBinaryTiledLayer* tiledLayer, GeographicMapCellPosition* cellPosition){

    GeologicalGeographicMapCellPosition* geologicalGeographicMapCellPosition = (dynamic_cast<GeologicalGeographicMapCellPosition*>(cellPosition));;
    
geologicalGeographicMapCellPosition->getGeologicalResource()->init();
    
}


};

            

