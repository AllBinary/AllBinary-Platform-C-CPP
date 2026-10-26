
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
        



        #ifndef ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H
        #define ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryLayer.h"
#include "AllBinaryLayerManager.h"

class BasicLayerProcessor
            : public Object
         {

    public: static const BasicLayerProcessor NULL_LAYER_PROCESSOR = BasicLayerProcessor();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const BasicArrayList list = BasicArrayListD();

protected: BasicLayerProcessor();

    public: void add(AllBinaryLayer layerInterface);

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager allBinaryLayerManager);

    public: BasicArrayList getList();

};

            


        #endif //ORG_ALLBINARY_LAYER_BASICLAYERPROCESSOR_H
