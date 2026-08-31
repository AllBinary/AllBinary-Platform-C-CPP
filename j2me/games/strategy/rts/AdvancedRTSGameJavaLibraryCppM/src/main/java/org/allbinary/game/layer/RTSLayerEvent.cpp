
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
        

    private: rtsLayer: PathFindingLayerInterface = NullPathFindingLayer.NULL_PATH_FINDING_LAYER;

public constructor (PathFindingLayerInterface rtsLayer){
            super(rtsLayer);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("RTSLayerEvent: \n");
    
stringBuffer!.append("RTSLayer: ");
    
stringBuffer!.append(this.getRtsLayer()!.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public PathFindingLayerInterface getRtsLayer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsLayer;
    
}


    public setRtsLayer(PathFindingLayerInterface rtsLayer){
this.rtsLayer= rtsLayer;
    
}


};

            

