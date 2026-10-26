
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

protected: BasicLayerProcessor(){
}


    public: void add(AllBinaryLayer layerInterface){

                        if(!this->list.contains(layerInterface))
                        
                                    {
                                    this->list.add(layerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager allBinaryLayerManager){



                            throw Exception(CommonStrings::getInstance().NOT_IMPLEMENTED);
                    
}


    public: BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


};

            

