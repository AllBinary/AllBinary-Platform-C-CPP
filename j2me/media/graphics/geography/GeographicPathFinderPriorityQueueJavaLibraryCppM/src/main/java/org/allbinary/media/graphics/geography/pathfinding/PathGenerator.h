
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathGeneratorInterface.h"
#include "PathFindingInfo.h"
#include "GeographicPathFinderBase.h"
#include "MultipassState.h"

class PathGenerator
            : public Object
        : public PathGeneratorInterface {

    private: static const PathGenerator SINGLETON = PathGenerator();

    public: static PathGenerator getInstance();

private: PathGenerator();

                //@Throws(Exception.constructor)
            
    public: void init(Object* geographicMapInterface, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getInstanceNoCache(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList createList(BasicGeographicMap geographicMapInterface, GeographicMapCellHistory geographicMapCellHistory, PathFindingInfo pathFindingInfo, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList create(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, int32_t totalPaths);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList createN(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, int32_t totalPaths, MultipassState multipassState);

                //@Throws(Exception.constructor)
            
    private: bool isValid(BasicArrayList pathList, GeographicMapCellHistory geographicMapCellHistory);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_H
