
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfoInterface.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h"
#include "org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"

class PathFindingInfo
            : public Object
        , public PathFindingInfoInterface {

    public: static PathFindingInfo* NULL_PATH_FINDING_INFO() { static std::unique_ptr<PathFindingInfo> value(new PathFindingInfo(PathFindingNodeCostInfoFactoryBase::NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE, BasicArrayListUtil::getInstance()->getImmutableInstance(), BasicArrayListUtil::getInstance()->getImmutableInstance())); return value.get(); }

    private: GeographicPathFinderBase* pathFinder = GeographicPathFinderBase::NULL_GEOGRAPHIC_PATH_FINDER_BASE;

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
