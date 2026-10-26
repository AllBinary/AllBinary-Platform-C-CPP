
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_MULTIGEOGRAPHICMAPBEHAVIOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_MULTIGEOGRAPHICMAPBEHAVIOR_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellType.h"
#include "BasicGeographicMap.h"
#include "GeographicMapCellPosition.h"

class MultiGeographicMapBehavior
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: std::vector<GeographicMapCellType> getCellTypeAt(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, GeographicMapCellPosition geographicMapCellPosition);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_MULTIGEOGRAPHICMAPBEHAVIOR_H
