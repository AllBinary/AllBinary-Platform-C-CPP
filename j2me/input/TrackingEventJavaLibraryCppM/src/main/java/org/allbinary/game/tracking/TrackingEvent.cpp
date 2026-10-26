
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
        



#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TrackingEventHandler.h"

class TrackingEvent: public AllBinaryEventObject {

    private: AllBinaryLayer layerInterface = AllBinaryLayer::NULL_ALLBINARY_LAYER;

public: TrackingEvent(Object* allBinaryLayerInterface) : AllBinaryEventObject(allBinaryLayerInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(allBinaryLayerInterface != TrackingEventHandler::getInstance())
                        
                                    {
                                    this->setLayerInterface(*dynamic_cast<AllBinaryLayer*>(allBinaryLayerInterface));
    

                                    }
                                
}


    public: void init(Object* anyType){
this->setSource(anyType);
    
}


    public: AllBinaryLayer getLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerInterface;
    
}


    private: void setLayerInterface(AllBinaryLayer layerInterface){
this->layerInterface= layerInterface;
    
}


    public: void setLayerInterfaceForCircularStaticPool(AllBinaryLayer layerInterface){
this->layerInterface= layerInterface;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("TrackingEvent: \n");
    
stringBuffer.append("LayerInterface: ");
    
stringBuffer.append(this->layerInterface.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

