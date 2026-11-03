
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/pathfinding/PathGeneratorInterface.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/GeographicPathFinderBase.h"
#include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"

auto PathGenerator::SINGLETON_owner() -> PathGenerator* { static std::unique_ptr<PathGenerator> value(new PathGenerator()); return value.get(); }
PathGenerator* PathGenerator::SINGLETON = PathGenerator::SINGLETON_owner();

    auto PathGenerator::getInstance() -> PathGenerator*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PathGenerator::SINGLETON;
    
}


PathGenerator::PathGenerator(){
}


                //@Throws(Exception.constructor)
            
    auto PathGenerator::init(Object* geographicMapInterface, int32_t totalPaths) -> void{
}


                //@Throws(Exception.constructor)
            
    auto PathGenerator::getInstanceNoCache(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths) -> BasicArrayList*{

    BasicArrayList* geographicMapCellPositionBasicArrayList = this->create(geographicMapInterface, pathFindingInfo, totalPaths);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return geographicMapCellPositionBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    auto PathGenerator::createList(BasicGeographicMap* geographicMapInterface, GeographicMapCellHistory* geographicMapCellHistory, PathFindingInfo* pathFindingInfo, int32_t totalPaths) -> BasicArrayList*{



                            throw RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    auto PathGenerator::create(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths) -> BasicArrayList*{

    BasicArrayList* startPathFindingNodeList = pathFindingInfo->getStartPathFindingNodeList();;
    

    BasicArrayList* endPathFindingNodeList = pathFindingInfo->getEndPathFindingNodeList();;
    

    GeographicPathFinderBase* geographicPathFinderInterface = pathFindingInfo->getPathFinder();;
    

    BasicArrayList* geographicMapCellPositionBasicArrayList = geographicPathFinderInterface->searchTotalPath(startPathFindingNodeList, endPathFindingNodeList, totalPaths);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return geographicMapCellPositionBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    auto PathGenerator::createN(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths, MultipassState* multipassState) -> BasicArrayList*{

    BasicArrayList* startPathFindingNodeList = pathFindingInfo->getStartPathFindingNodeList();;
    

    BasicArrayList* endPathFindingNodeList = pathFindingInfo->getEndPathFindingNodeList();;
    

    GeographicPathFinderBase* geographicPathFinderInterface = pathFindingInfo->getPathFinder();;
    

    BasicArrayList* geographicMapCellPositionBasicArrayList = geographicPathFinderInterface->searchTotalPathN(startPathFindingNodeList, endPathFindingNodeList, totalPaths, multipassState);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return geographicMapCellPositionBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    auto PathGenerator::isValid(BasicArrayList* pathList, GeographicMapCellHistory* geographicMapCellHistory) -> bool{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHGENERATOR_CPP
