
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RootStoreCategoryProperties.h"

class RootStoreCategoryPropertiesFactory
            : public Object
        : public CategoryPropertiesFactoryInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: CategoryPropertiesInterface categoryPropertiesInterface;

public: RootStoreCategoryPropertiesFactory(TransformInfoInterface transformInfoInterface){
this->categoryPropertiesInterface= RootStoreCategoryProperties(transformInfoInterface) as CategoryPropertiesInterface;
    
}


public: RootStoreCategoryPropertiesFactory(TransformInfoInterface transformInfoInterface, AbPath abPath){
this->categoryPropertiesInterface= RootStoreCategoryProperties(transformInfoInterface, abPath) as CategoryPropertiesInterface;
    
}


public: RootStoreCategoryPropertiesFactory(TransformInfoInterface transformInfoInterface, Node node){
this->categoryPropertiesInterface= RootStoreCategoryProperties(transformInfoInterface, node) as CategoryPropertiesInterface;
    
}


public: RootStoreCategoryPropertiesFactory(TransformInfoInterface transformInfoInterface, HashMap<any, any> categoryPropertiesHashMap){
this->categoryPropertiesInterface= RootStoreCategoryProperties(transformInfoInterface, categoryPropertiesHashMap) as CategoryPropertiesInterface;
    
}


    public: CategoryPropertiesInterface getInstance(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->categoryPropertiesInterface as CategoryPropertiesInterface;
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

