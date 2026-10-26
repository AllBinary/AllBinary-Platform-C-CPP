
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimpleGeographicMapCellPositionFactory.h"
#include "GeographicMapCellPosition.h"
#include "GeographicMapCellType.h"
#include "BasicGeographicMap.h"
#include "GeographicMapCompositeInterface.h"

class GeographicMapCellPositionTracking
            : public Object
         {

    private: GeographicMapCellPosition currentGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellPosition newGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: GeographicMapCellType currentCellType = GeographicMapCellType::NULL_GEOGRAPHIC_MAP_CELL_TYPE;

public: GeographicMapCellPositionTracking();

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellType getCurrentOverCellType(BasicGeographicMap geographicMap);

                //@Throws(Exception.constructor)
            
    public: bool updateStart(AllBinaryGameCanvasInterface gameCanvasInterface, AllBinaryLayer layer);

    public: bool updateEnd();

    public: GeographicMapCellPosition getPreviousGeographicMapCellPosition();

    public: GeographicMapCellPosition getCurrentGeographicMapCellPosition();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONTRACKING_H
