
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_CPP
        #define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/event/LayerManagerEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/LayerManager.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LayerManagerEvent::LayerManagerEvent(LayerManager* layerManager, std::string crud) : AllBinaryEventObject(layerManager), layerInterface(AllBinaryLayer::NULL_ALLBINARY_LAYER){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->crud= crud;
    
}


    auto LayerManagerEvent::getLayerInterface() -> AllBinaryLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerInterface;
    
}


    auto LayerManagerEvent::setLayerInterface(AllBinaryLayer* layerInterface) -> void{
this->layerInterface= layerInterface;
    
}


    auto LayerManagerEvent::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("LayerManagerEvent: \n");
    
stringBuffer->append("LayerInterface: ");
    
stringBuffer->append(this->getLayerInterface()->toString());
    
stringBuffer->append("\nCRUD: ");
    
stringBuffer->append(this->crud.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_CPP
