
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/graphics/CellPosition.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"

class GeographicMapDirectionUtil
            : public Object
         {

    private: static GeographicMapDirectionUtil* instance() { static std::unique_ptr<GeographicMapDirectionUtil> value(new GeographicMapDirectionUtil()); return value.get(); }

    public: static GeographicMapDirectionUtil* getInstance();

private: GeographicMapDirectionUtil();

    private: const std::string MESSAGE = "Cell Position should have been cached!!!";

                //@Throws(Exception.constructor)
            
    public: Direction* getDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: Direction* getEightDirectionFromCellPositionToAdjacentCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: Direction* getDirectionFromCellPositionToCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);

    private: const std::string ERROR = "Error: ";

    private: const std::string EQUAL = " == ";

                //@Throws(Exception.constructor)
            
    public: Direction* getEightDirectionFromCellPositionToCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPDIRECTIONUTIL_H
