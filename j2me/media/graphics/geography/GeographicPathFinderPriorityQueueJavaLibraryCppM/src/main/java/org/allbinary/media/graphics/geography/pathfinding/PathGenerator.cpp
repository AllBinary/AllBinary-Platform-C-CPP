
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
        

    private: static const SINGLETON: PathGenerator = new PathGenerator();

    public static PathGenerator getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathGenerator.SINGLETON;
    
}


private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public init(any = {} geographicMapInterface, int32_t totalPaths){
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getInstanceNoCache(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, int32_t totalPaths){

    geographicMapCellPositionBasicArrayList: BasicArrayList = this.create(geographicMapInterface, pathFindingInfo, totalPaths)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPositionBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList createList(BasicGeographicMap geographicMapInterface, GeographicMapCellHistory geographicMapCellHistory, PathFindingInfo pathFindingInfo, int32_t totalPaths){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    BasicArrayList create(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, int32_t totalPaths){

    startPathFindingNodeList: BasicArrayList = pathFindingInfo!.getStartPathFindingNodeList()!;;
    

    endPathFindingNodeList: BasicArrayList = pathFindingInfo!.getEndPathFindingNodeList()!;;
    

    geographicPathFinderInterface: GeographicPathFinderBase = pathFindingInfo!.getPathFinder()!;;
    

    geographicMapCellPositionBasicArrayList: BasicArrayList = geographicPathFinderInterface!.searchTotalPath(startPathFindingNodeList, endPathFindingNodeList, totalPaths)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPositionBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList createN(BasicGeographicMap geographicMapInterface, PathFindingInfo pathFindingInfo, int32_t totalPaths, MultipassState multipassState){

    startPathFindingNodeList: BasicArrayList = pathFindingInfo!.getStartPathFindingNodeList()!;;
    

    endPathFindingNodeList: BasicArrayList = pathFindingInfo!.getEndPathFindingNodeList()!;;
    

    geographicPathFinderInterface: GeographicPathFinderBase = pathFindingInfo!.getPathFinder()!;;
    

    geographicMapCellPositionBasicArrayList: BasicArrayList = geographicPathFinderInterface!.searchTotalPathN(startPathFindingNodeList, endPathFindingNodeList, totalPaths, multipassState)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPositionBasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    bool isValid(BasicArrayList pathList, GeographicMapCellHistory geographicMapCellHistory){



                            throw new RuntimeException();
                    
}


};

            

