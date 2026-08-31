
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPosition.h"

class GeographicMapDirectionUtil
            : public Object
         {
        

    private: static const instance: GeographicMapDirectionUtil = new GeographicMapDirectionUtil();

    public static GeographicMapDirectionUtil getInstance();

private constructor ();

    private: const MESSAGE: string = "Cell Position should have been cached!!!";

                //@Throws(Exception.constructor)
            
    public Direction getDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public Direction getEightDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public Direction getDirectionFromCellPositionToCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition);

    private: const ERROR: string = "Error: ";

    private: const EQUAL: string = " == ";

                //@Throws(Exception.constructor)
            
    public Direction getEightDirectionFromCellPositionToCellPosition(GeographicMapCellPosition fromGeographicMapCellPosition, GeographicMapCellPosition toGeographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_H
