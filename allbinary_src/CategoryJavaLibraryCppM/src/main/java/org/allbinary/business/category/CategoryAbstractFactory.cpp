
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYABSTRACTFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYABSTRACTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/CategoryAbstractFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactory.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/CategoryFactoryInterface.h"
#include "org/allbinary/business/category/CategoryInterface.h"
#include "org/allbinary/business/category/Category.h"


CategoryAbstractFactory::CategoryAbstractFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


    auto CategoryAbstractFactory::getRootInstance() -> CategoryInterface*{



                            throw RuntimeException();
                    
}


    auto CategoryAbstractFactory::getRootInstance(AbPath* categoryAbPath) -> CategoryInterface*{



                            throw RuntimeException();
                    
}


    auto CategoryAbstractFactory::getRootInstanceFromNode(Node* node) -> CategoryInterface*{



                            throw RuntimeException();
                    
}


    auto CategoryAbstractFactory::getInstance(std::string categoryName) -> CategoryInterface*{

        try {
            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "getInstance(String)");
    

                                    }
                                

    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(categoryName));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new Category(categoryPropertiesFactoryInterface));
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getInstance(String, int)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto CategoryAbstractFactory::getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, std::string categoryName) -> CategoryInterface*{

        try {
            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "getInstance(CategoryInterface, CategoryInterface, String)");
    

                                    }
                                

    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(categoryName));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new Category(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface , String, int)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto CategoryAbstractFactory::getInstance(Node* node) -> CategoryInterface*{

        try {
            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "getInstance(Node)");
    

                                    }
                                

    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(node));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new Category(categoryPropertiesFactoryInterface));
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getInstance(Node, int)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto CategoryAbstractFactory::getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, Node* node) -> CategoryInterface*{

        try {
            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "getInstance(CategoryInterface, CategoryInterface, Node)");
    

                                    }
                                

    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(node));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new Category(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, Node, int)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto CategoryAbstractFactory::getInstance(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap) -> CategoryInterface*{

        try {
            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "getInstance(CategoryInterface, CategoryInterface, HashMap)");
    

                                    }
                                

    CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface = dynamic_cast<CategoryPropertiesFactoryInterface*>(new CategoryPropertiesFactory(categoryPropertiesHashMap));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CategoryInterface*>(new Category(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface));
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->CATEGORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, HashMap)", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORYABSTRACTFACTORY_CPP
