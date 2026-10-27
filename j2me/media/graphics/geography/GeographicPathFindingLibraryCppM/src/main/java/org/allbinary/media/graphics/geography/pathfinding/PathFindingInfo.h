
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGINFO_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfoInterface.h"
class PathFindingNodeCostInfoFactoryBase;
class GeographicPathFinderBase;
class PathFindingNode;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PathFindingInfo
            : public virtual Object
        , public PathFindingInfoInterface {

    private: static PathFindingInfo* NULL_PATH_FINDING_INFO_owner();
    public: static PathFindingInfo* NULL_PATH_FINDING_INFO;

    private: GeographicPathFinderBase* pathFinder;

    private: BasicArrayList* startPathFindingNodeList;

    private: BasicArrayList* endPathFindingNodeList;

    private: PathFindingNodeCostInfoFactoryBase* pathFindingNodeCostInfoFactoryInterface;

public: PathFindingInfo(PathFindingNodeCostInfoFactoryBase* pathFindingNodeCostInfoFactoryInterface, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);

    public: BasicArrayList* getStartPathFindingNodeList();

    public: BasicArrayList* getEndPathFindingNodeList();

    public: GeographicPathFinderBase* getPathFinder();

    public: void addStartPathFindingNode(PathFindingNode* startPathFindingNode);

    public: void addEndPathFindingNode(PathFindingNode* endPathFindingNode);

    public: void setPathFinder(GeographicPathFinderBase* pathFinder);

    public: PathFindingNodeCostInfoFactoryBase* getPathFindingNodeCostInfoFactoryInterface();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGINFO_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGINFO_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingInfoInterface.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfoInterface.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h")
#include "org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h")
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
#endif

        #endif
    
