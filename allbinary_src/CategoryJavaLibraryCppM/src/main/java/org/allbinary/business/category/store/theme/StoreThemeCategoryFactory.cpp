
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/store/theme/StoreThemeCategoryFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactory.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/root/store/theme/RootStoreThemeCategoryPropertiesFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/store/theme/StoreThemeCategory.h"


StoreThemeCategoryFactory::StoreThemeCategoryFactory(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "StoreCategoryFactory(TransformInfoInterface transformInfoInterface)");
    

                                    }
                                
this->transformInfoInterface= transformInfoInterface;
    
}


    auto StoreThemeCategoryFactory::getRootInstance() -> CategoryInterface*{

        try {
            
    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new RootStoreThemeCategoryPropertiesFactory(this->transformInfoInterface));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new StoreThemeCategory(this->transformInfoInterface, categoryPropertiesFactoryInterface, 0));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getRootInstance()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StoreThemeCategoryFactory::getRootInstance(AbPath* categoryAbPath) -> CategoryInterface*{

        try {
            
    int32_t level = CategoryUtil::getPathLevel(categoryAbPath);;
    

    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new RootStoreThemeCategoryPropertiesFactory(this->transformInfoInterface, categoryAbPath));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new StoreThemeCategory(this->transformInfoInterface, categoryPropertiesFactoryInterface, level));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getRootInstance(String)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StoreThemeCategoryFactory::getRootInstanceFromNode(Node* node) -> CategoryInterface*{

        try {
            
    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new RootStoreThemeCategoryPropertiesFactory(this->transformInfoInterface, node));;
    

    AbPath* categoryPath = new AbPath(CategoryUtil::getNameFromNode(node), StringUtil::getInstance()->EMPTY_STRING);;
    

    int32_t level = CategoryUtil::getPathLevel(categoryPath);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new StoreThemeCategory(this->transformInfoInterface, node, categoryPropertiesFactoryInterface, level));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getRootInstance(node)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StoreThemeCategoryFactory::getInstance(std::string categoryPath, int32_t level) -> CategoryInterface*{

        try {
            
    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(categoryPath));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new StoreThemeCategory(this->transformInfoInterface, categoryPropertiesFactoryInterface, level));
    

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


    auto StoreThemeCategoryFactory::getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, std::string categoryPath) -> CategoryInterface*{

        try {
            
    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(categoryPath));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new StoreThemeCategory(this->transformInfoInterface, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface , String, int)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StoreThemeCategoryFactory::getInstance(Node* node, int32_t level) -> CategoryInterface*{

        try {
            
    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(node));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new StoreThemeCategory(this->transformInfoInterface, categoryPropertiesFactoryInterface, level));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getInstance(Node, int)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StoreThemeCategoryFactory::getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, Node* node) -> CategoryInterface*{

        try {
            
    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(node));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new StoreThemeCategory(this->transformInfoInterface, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, Node, int)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StoreThemeCategoryFactory::getInstance(HashMap<Object*, Object*>* categoryPropertiesHashMap, int32_t level) -> CategoryInterface*{

        try {
            
    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(categoryPropertiesHashMap));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new StoreThemeCategory(this->transformInfoInterface, categoryPropertiesFactoryInterface, level));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getInstance(HashMap)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto StoreThemeCategoryFactory::getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap) -> CategoryInterface*{

        try {
            
    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(categoryPropertiesHashMap));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new StoreThemeCategory(this->transformInfoInterface, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, HashMap)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_STORE_THEME_STORETHEMECATEGORYFACTORY_CPP
