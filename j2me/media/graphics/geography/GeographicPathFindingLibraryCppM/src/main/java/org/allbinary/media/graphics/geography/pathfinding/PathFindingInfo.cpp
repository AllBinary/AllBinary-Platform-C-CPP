
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGINFO_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
        

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

auto PathFindingInfo::NULL_PATH_FINDING_INFO_owner() -> PathFindingInfo* { static std::unique_ptr<PathFindingInfo> value(new PathFindingInfo(PathFindingNodeCostInfoFactoryBase::NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE, BasicArrayListUtil::getInstance()->getImmutableInstance(), BasicArrayListUtil::getInstance()->getImmutableInstance())); return value.get(); }
PathFindingInfo* PathFindingInfo::NULL_PATH_FINDING_INFO = PathFindingInfo::NULL_PATH_FINDING_INFO_owner();

PathFindingInfo::PathFindingInfo(PathFindingNodeCostInfoFactoryBase* pathFindingNodeCostInfoFactoryInterface, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) : pathFinder(GeographicPathFinderBase::NULL_GEOGRAPHIC_PATH_FINDER_BASE){
this->pathFindingNodeCostInfoFactoryInterface= pathFindingNodeCostInfoFactoryInterface;
    
this->startPathFindingNodeList= startPathFindingNodeList;
    
this->endPathFindingNodeList= endPathFindingNodeList;
    
}


    auto PathFindingInfo::getStartPathFindingNodeList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->startPathFindingNodeList;
    
}


    auto PathFindingInfo::getEndPathFindingNodeList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->endPathFindingNodeList;
    
}


    auto PathFindingInfo::getPathFinder() -> GeographicPathFinderBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->pathFinder;
    
}


    auto PathFindingInfo::addStartPathFindingNode(PathFindingNode* startPathFindingNode) -> void{
this->startPathFindingNodeList->add(startPathFindingNode);
    
}


    auto PathFindingInfo::addEndPathFindingNode(PathFindingNode* endPathFindingNode) -> void{
this->endPathFindingNodeList->add(endPathFindingNode);
    
}


    auto PathFindingInfo::setPathFinder(GeographicPathFinderBase* pathFinder) -> void{
this->pathFinder= pathFinder;
    
}


    auto PathFindingInfo::getPathFindingNodeCostInfoFactoryInterface() -> PathFindingNodeCostInfoFactoryBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->pathFindingNodeCostInfoFactoryInterface;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHFINDINGINFO_CPP
