
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullPathFindingLayer.h"
#include "PathFindingLayerInterface.h"

class RTSLayerEvent: public AllBinaryEventObject {

    private: PathFindingLayerInterface rtsLayer = NullPathFindingLayer::NULL_PATH_FINDING_LAYER;

public: RTSLayerEvent(PathFindingLayerInterface rtsLayer) : AllBinaryEventObject(rtsLayer){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("RTSLayerEvent: \n");
    
stringBuffer.append("RTSLayer: ");
    
stringBuffer.append(this->getRtsLayer().toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: PathFindingLayerInterface getRtsLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsLayer;
    
}


    public: void setRtsLayer(PathFindingLayerInterface rtsLayer){
this->rtsLayer= rtsLayer;
    
}


};

            

