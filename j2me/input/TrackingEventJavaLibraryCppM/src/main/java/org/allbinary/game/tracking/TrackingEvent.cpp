
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TrackingEventHandler.h"

class TrackingEvent: public AllBinaryEventObject {
        

    private: layerInterface: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

public constructor (any = {} allBinaryLayerInterface){
            super(allBinaryLayerInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(allBinaryLayerInterface != TrackingEventHandler.getInstance())
                        
                                    {
                                    this.setLayerInterface(allBinaryLayerInterface as AllBinaryLayer);
    

                                    }
                                
}


    public init(any = {} anyType){
this.setSource(anyType);
    
}


    public AllBinaryLayer getLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.layerInterface;
    
}


    setLayerInterface(AllBinaryLayer layerInterface){
this.layerInterface= layerInterface;
    
}


    public setLayerInterfaceForCircularStaticPool(AllBinaryLayer layerInterface){
this.layerInterface= layerInterface;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("TrackingEvent: \n");
    
stringBuffer!.append("LayerInterface: ");
    
stringBuffer!.append(this.layerInterface!.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

