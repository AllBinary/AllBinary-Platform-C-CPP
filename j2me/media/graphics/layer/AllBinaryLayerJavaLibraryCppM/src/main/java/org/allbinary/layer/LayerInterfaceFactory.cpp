
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/LayerInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/LayerInterfaceFactoryInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"


LayerInterfaceFactory::LayerInterfaceFactory() : logUtil(LogUtil::getInstance()), list(BasicArrayListUtil::getInstance()->getImmutableInstance()) {
        }
        auto LayerInterfaceFactory::SINGLETON_owner() -> LayerInterfaceFactory* { static std::unique_ptr<LayerInterfaceFactory> value(new LayerInterfaceFactory()); return value.get(); }
LayerInterfaceFactory* LayerInterfaceFactory::SINGLETON = LayerInterfaceFactory::SINGLETON_owner();

    auto LayerInterfaceFactory::getInstance() -> LayerInterfaceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LayerInterfaceFactory::SINGLETON;
    
}


    auto LayerInterfaceFactory::init() -> void{
this->list= new BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            
    auto LayerInterfaceFactory::getNexInstance(ABHashtable<Object*, Object*>* hashtable, int32_t x, int32_t y, int32_t z) -> AllBinaryLayer*{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->HASHTABLE_LABEL)->append(StringUtil::getInstance()->toString(hashtable))), this, commonStrings->GET_INSTANCE);
    

    int32_t typeInteger = JavaBoxes::unbox<int32_t>(hashtable->get(Layer::ID));;
    

    LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface = dynamic_cast<LayerInterfaceFactoryInterface*>(this->list->objectArray[typeInteger -1]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return layerInterfaceFactoryInterface->getNextInstance(hashtable, x, y, z);;
    
}


    auto LayerInterfaceFactory::add(LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) -> void{
this->list->add(layerInterfaceFactoryInterface);
    
}




        #endif //ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORY_CPP
