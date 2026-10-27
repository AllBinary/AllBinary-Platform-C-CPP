
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/media/graphics/geography/map/racetrack/BasePathFinderGraphVisitor.h"
//1.4.2
class PathFinderGraphHackVisitor: public BasePathFinderGraphVisitor {

public: PathFinderGraphHackVisitor(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) : BasePathFinderGraphVisitor(geographicMapInterface, edgeMinimum, minPathWeight, maxPathWeight){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void visit(Object* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList){
this->fixStart(graph, startPathFindingNodeList);
    
this->fixEnd(graph, endPathFindingNodeList);
    
this->fixOverPassEdges(graph);
    
}


                //@Throws(Exception.constructor)
            
    private: void fixStart(Object* graph, BasicArrayList* startPathFindingNodeList){
}


                //@Throws(Exception.constructor)
            
    private: void fixEnd(Object* graph, BasicArrayList* endPathFindingNodeList){
}


                //@Throws(Exception.constructor)
            
    private: void fixOverPassEdges(Object* graph){
}


                //@Throws(Exception.constructor)
            
    public: void fixPath(BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList){
}


                //@Throws(Exception.constructor)
            
    private: void removeOverPassEdges(BasicArrayList* pathList){
}


    public: bool isValid(Object* graphPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

