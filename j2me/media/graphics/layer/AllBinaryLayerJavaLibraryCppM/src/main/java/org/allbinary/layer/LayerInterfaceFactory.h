
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORY_H
        #define ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORY_H

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

class LayerInterfaceFactory
            : public Object
         {

    private: static LayerInterfaceFactory* SINGLETON() { static std::unique_ptr<LayerInterfaceFactory> value(new LayerInterfaceFactory()); return value.get(); }

    public: static LayerInterfaceFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: BasicArrayList* list = BasicArrayListUtil::getInstance()->getImmutableInstance();

    public: void init();

    private: const std::string HASHTABLE_LABEL = "Hashtable: ";

                //@Throws(Exception.constructor)
            
    public: AllBinaryLayer* getNexInstance(ABHashtable<Object*, Object*>* hashtable, int32_t x, int32_t y, int32_t z);

    public: void add(LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERINTERFACEFACTORY_H
