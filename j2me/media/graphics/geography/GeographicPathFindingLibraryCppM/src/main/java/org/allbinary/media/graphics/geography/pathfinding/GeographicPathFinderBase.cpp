
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"


GeographicPathFinderBase::GeographicPathFinderBase() : commonStrings(CommonStrings::getInstance()) {
        }
        auto GeographicPathFinderBase::NULL_GEOGRAPHIC_PATH_FINDER_BASE_owner() -> GeographicPathFinderBase* { static std::unique_ptr<GeographicPathFinderBase> value(new GeographicPathFinderBase()); return value.get(); }
GeographicPathFinderBase* GeographicPathFinderBase::NULL_GEOGRAPHIC_PATH_FINDER_BASE = GeographicPathFinderBase::NULL_GEOGRAPHIC_PATH_FINDER_BASE_owner();

                //@Throws(Exception.constructor)
            
    auto GeographicPathFinderBase::searchTotalPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths) -> BasicArrayList*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto GeographicPathFinderBase::searchTotalPathN(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, int32_t totalPaths, MultipassState* multipassState) -> BasicArrayList*{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_GEOGRAPHICPATHFINDERBASE_CPP
