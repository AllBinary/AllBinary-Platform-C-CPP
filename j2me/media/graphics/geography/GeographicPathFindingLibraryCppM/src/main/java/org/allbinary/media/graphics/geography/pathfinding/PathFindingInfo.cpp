
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PathFindingInfoInterface.h"
#include "PathFindingNodeCostInfoFactoryBase.h"
#include "GeographicPathFinderBase.h"
#include "PathFindingNode.h"

class PathFindingInfo
            : public Object
        : public PathFindingInfoInterface {

    public: static const PathFindingInfo NULL_PATH_FINDING_INFO = PathFindingInfo(PathFindingNodeCostInfoFactoryBase::NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE, BasicArrayListUtil::getInstance().getImmutableInstance(), BasicArrayListUtil::getInstance().getImmutableInstance());

    private: GeographicPathFinderBase pathFinder = GeographicPathFinderBase::NULL_GEOGRAPHIC_PATH_FINDER_BASE;

    private: BasicArrayList startPathFindingNodeList;

    private: BasicArrayList endPathFindingNodeList;

    private: PathFindingNodeCostInfoFactoryBase pathFindingNodeCostInfoFactoryInterface;

public: PathFindingInfo(PathFindingNodeCostInfoFactoryBase pathFindingNodeCostInfoFactoryInterface, BasicArrayList startPathFindingNodeList, BasicArrayList endPathFindingNodeList){
this->pathFindingNodeCostInfoFactoryInterface= pathFindingNodeCostInfoFactoryInterface;
    
this->startPathFindingNodeList= startPathFindingNodeList;
    
this->endPathFindingNodeList= endPathFindingNodeList;
    
}


    public: BasicArrayList getStartPathFindingNodeList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->startPathFindingNodeList;
    
}


    public: BasicArrayList getEndPathFindingNodeList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->endPathFindingNodeList;
    
}


    public: GeographicPathFinderBase getPathFinder(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pathFinder;
    
}


    public: void addStartPathFindingNode(PathFindingNode startPathFindingNode){
this->startPathFindingNodeList.add(startPathFindingNode);
    
}


    public: void addEndPathFindingNode(PathFindingNode endPathFindingNode){
this->endPathFindingNodeList.add(endPathFindingNode);
    
}


    public: void setPathFinder(GeographicPathFinderBase pathFinder){
this->pathFinder= pathFinder;
    
}


    public: PathFindingNodeCostInfoFactoryBase getPathFindingNodeCostInfoFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->pathFindingNodeCostInfoFactoryInterface;
    
}


};

            

