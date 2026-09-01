
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MultipassState.h"

class GeographicPathFinderBase
            : public Object
         {

    public: static const GeographicPathFinderBase NULL_GEOGRAPHIC_PATH_FINDER_BASE = GeographicPathFinderBase();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList searchTotalPath(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList searchTotalPathN(BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList, int32_t totalPaths, MultipassState multipassState);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_H
