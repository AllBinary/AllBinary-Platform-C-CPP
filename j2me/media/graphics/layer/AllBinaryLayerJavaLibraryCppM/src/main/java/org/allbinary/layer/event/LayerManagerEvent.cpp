
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

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/LayerManager.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerManagerEvent: public AllBinaryEventObject {

    private: AllBinaryLayer layerInterface = AllBinaryLayer::NULL_ALLBINARY_LAYER;

    private: std::string crud;

public: LayerManagerEvent(LayerManager layerManager, std::string crud){
            super(layerManager);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->crud= crud;
    
}


    public: AllBinaryLayer getLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerInterface;
    
}


    public: void setLayerInterface(AllBinaryLayer layerInterface){
this->layerInterface= layerInterface;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("LayerManagerEvent: \n");
    
stringBuffer.append("LayerInterface: ");
    
stringBuffer.append(this->getLayerInterface().toString());
    
stringBuffer.append("\nCRUD: ");
    
stringBuffer.append(this->crud.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

