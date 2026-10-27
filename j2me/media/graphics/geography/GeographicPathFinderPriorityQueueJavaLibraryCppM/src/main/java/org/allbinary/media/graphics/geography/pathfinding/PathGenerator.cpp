
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

class PathGenerator
            : public Object
        , public PathGeneratorInterface {

    private: static PathGenerator* SINGLETON() { static std::unique_ptr<PathGenerator> value(new PathGenerator()); return value.get(); }

    public: static PathGenerator* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathGenerator::SINGLETON();
    
}


private: PathGenerator(){
}


                //@Throws(Exception.constructor)
            
    public: void init(Object* geographicMapInterface, int32_t totalPaths){
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getInstanceNoCache(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths){

    BasicArrayList* geographicMapCellPositionBasicArrayList = this->create(geographicMapInterface, pathFindingInfo, totalPaths);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPositionBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* createList(BasicGeographicMap* geographicMapInterface, GeographicMapCellHistory* geographicMapCellHistory, PathFindingInfo* pathFindingInfo, int32_t totalPaths){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    private: BasicArrayList* create(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths){

    BasicArrayList* startPathFindingNodeList = pathFindingInfo->getStartPathFindingNodeList();;
    

    BasicArrayList* endPathFindingNodeList = pathFindingInfo->getEndPathFindingNodeList();;
    

    GeographicPathFinderBase* geographicPathFinderInterface = pathFindingInfo->getPathFinder();;
    

    BasicArrayList* geographicMapCellPositionBasicArrayList = geographicPathFinderInterface->searchTotalPath(startPathFindingNodeList, endPathFindingNodeList, totalPaths);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPositionBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* createN(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths, MultipassState* multipassState){

    BasicArrayList* startPathFindingNodeList = pathFindingInfo->getStartPathFindingNodeList();;
    

    BasicArrayList* endPathFindingNodeList = pathFindingInfo->getEndPathFindingNodeList();;
    

    GeographicPathFinderBase* geographicPathFinderInterface = pathFindingInfo->getPathFinder();;
    

    BasicArrayList* geographicMapCellPositionBasicArrayList = geographicPathFinderInterface->searchTotalPathN(startPathFindingNodeList, endPathFindingNodeList, totalPaths, multipassState);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPositionBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    private: bool isValid(BasicArrayList* pathList, GeographicMapCellHistory* geographicMapCellHistory){



                            throw new RuntimeException();
                    
}


};

            

