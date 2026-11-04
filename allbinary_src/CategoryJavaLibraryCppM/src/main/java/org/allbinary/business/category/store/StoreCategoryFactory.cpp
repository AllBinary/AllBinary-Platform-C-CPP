
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/store/StoreCategoryFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/category/Category.h>

      
#include <org/allbinary/business/category/CategoryAbstractFactory.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/root/store/RootStoreCategoryPropertiesFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

StoreCategoryFactory::StoreCategoryFactory(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "StoreCategoryFactory(TransformInfoInterface transformInfoInterface)");
    

                                    }
                                
this->transformInfoInterface= transformInfoInterface;
    
}


    auto StoreCategoryFactory::getRootInstance() -> CategoryInterface*{

        try {
            
    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new RootStoreCategoryPropertiesFactory(this->transformInfoInterface));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new Category(categoryPropertiesFactoryInterface));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getInstance(String, int)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StoreCategoryFactory::getRootInstance(AbPath* categoryPath) -> CategoryInterface*{

        try {
            
    int32_t level = CategoryUtil::getPathLevel(categoryPath);;
    

    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new RootStoreCategoryPropertiesFactory(this->transformInfoInterface, categoryPath));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new Category(categoryPropertiesFactoryInterface, level));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings.EXCEPTION, this, "getInstance(String, int)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StoreCategoryFactory::getRootInstanceFromNode(Node* node) -> CategoryInterface*{

        try {
            
    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new RootStoreCategoryPropertiesFactory(this->transformInfoInterface, node));;
    

    AbPath* categoryPath = new AbPath(CategoryUtil::getNameFromNode(node), StringUtil::getInstance()->EMPTY_STRING);;
    

    int32_t level = CategoryUtil::getPathLevel(categoryPath);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new Category(categoryPropertiesFactoryInterface, level));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getInstance(String, int)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_STORECATEGORYFACTORY_CPP
