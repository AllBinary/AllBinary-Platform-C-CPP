
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

class GeographicMapCellPositionAreaBase
            : public Object
        , public GeographicMapCellPositionAreaInterface {

    public: static GeographicMapCellPositionAreaBase* NULL_GEOGRPAHIC_MAP_POSITION_AREA_BASE() { static std::unique_ptr<GeographicMapCellPositionAreaBase> value(new GeographicMapCellPositionAreaBase()); return value.get(); }

    public: GeographicMapCellPosition* getNextSurroundingGeographicMapCellPosition(){



                            throw new RuntimeException();
                    
}


    public: BasicArrayList* getOccupyingGeographicMapCellPositionList(){



                            throw new RuntimeException();
                    
}


    public: BasicArrayList* getSurroundingGeographicMapCellPositionList(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public: void update(BasicGeographicMap* geographicMapInterface){



                            throw new RuntimeException();
                    
}


};

            

