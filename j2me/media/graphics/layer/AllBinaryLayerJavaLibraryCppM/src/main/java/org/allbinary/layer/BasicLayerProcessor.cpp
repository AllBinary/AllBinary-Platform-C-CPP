
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
        



        #ifndef ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_CPP
        #define ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/BasicLayerProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

auto BasicLayerProcessor::NULL_LAYER_PROCESSOR_owner() -> BasicLayerProcessor* { static std::unique_ptr<BasicLayerProcessor> value(new BasicLayerProcessor()); return value.get(); }
BasicLayerProcessor* BasicLayerProcessor::NULL_LAYER_PROCESSOR = BasicLayerProcessor::NULL_LAYER_PROCESSOR_owner();

BasicLayerProcessor::BasicLayerProcessor() : logUtil(LogUtil::getInstance()), list(new BasicArrayListD()){
}


    auto BasicLayerProcessor::add(AllBinaryLayer* layerInterface) -> void{

                        if(!this->list->contains(layerInterface))
                        
                                    {
                                    this->list->add(layerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto BasicLayerProcessor::process(AllBinaryLayerManager* allBinaryLayerManager) -> void{



                            throw Exception(CommonStrings::getInstance()->NOT_IMPLEMENTED);
                    
}


    auto BasicLayerProcessor::getList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list;
    
}




        #endif //ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_CPP
