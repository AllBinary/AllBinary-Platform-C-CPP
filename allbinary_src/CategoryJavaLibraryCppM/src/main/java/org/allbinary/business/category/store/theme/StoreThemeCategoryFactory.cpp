
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreThemeCategory.h"

class StoreThemeCategoryFactory
            : public Object
        : public CategoryFactoryInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: TransformInfoInterface transformInfoInterface;

public: StoreThemeCategoryFactory(TransformInfoInterface transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "StoreCategoryFactory(TransformInfoInterface transformInfoInterface)");
    

                                    }
                                
this->transformInfoInterface= transformInfoInterface;
    
}


    public: CategoryInterface getRootInstance(){

        try {
            
    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = RootStoreThemeCategoryPropertiesFactory(this->transformInfoInterface) as CategoryPropertiesFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreThemeCategory(this->transformInfoInterface, categoryPropertiesFactoryInterface, 0) as CategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getRootInstance()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: CategoryInterface getRootInstance(AbPath categoryAbPath){

        try {
            
    int32_t level = CategoryUtil::getPathLevel(categoryAbPath);;
    

    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = RootStoreThemeCategoryPropertiesFactory(this->transformInfoInterface, categoryAbPath) as CategoryPropertiesFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreThemeCategory(this->transformInfoInterface, categoryPropertiesFactoryInterface, level) as CategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getRootInstance(String)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: CategoryInterface getRootInstanceFromNode(Node node){

        try {
            
    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = RootStoreThemeCategoryPropertiesFactory(this->transformInfoInterface, node) as CategoryPropertiesFactoryInterface;;
    

    AbPath categoryPath = AbPath(CategoryUtil::getNameFromNode(node), StringUtil::getInstance().EMPTY_STRING);;
    

    int32_t level = CategoryUtil::getPathLevel(categoryPath);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreThemeCategory(this->transformInfoInterface, node, categoryPropertiesFactoryInterface, level) as CategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getRootInstance(node)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: CategoryInterface getInstance(std::string categoryPath, int32_t level){

        try {
            
    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(categoryPath) as CategoryPropertiesFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreThemeCategory(this->transformInfoInterface, categoryPropertiesFactoryInterface, level) as CategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getInstance(String, int)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, std::string categoryPath){

        try {
            
    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(categoryPath) as CategoryPropertiesFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreThemeCategory(this->transformInfoInterface, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface) as CategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface , String, int)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: CategoryInterface getInstance(Node node, int32_t level){

        try {
            
    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(node) as CategoryPropertiesFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreThemeCategory(this->transformInfoInterface, categoryPropertiesFactoryInterface, level) as CategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getInstance(Node, int)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, Node node){

        try {
            
    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(node) as CategoryPropertiesFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreThemeCategory(this->transformInfoInterface, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface) as CategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, Node, int)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: CategoryInterface getInstance(HashMap<any, any> categoryPropertiesHashMap, int32_t level){

        try {
            
    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(categoryPropertiesHashMap) as CategoryPropertiesFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreThemeCategory(this->transformInfoInterface, categoryPropertiesFactoryInterface, level) as CategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getInstance(HashMap)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, HashMap<any, any> categoryPropertiesHashMap){

        try {
            
    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(categoryPropertiesHashMap) as CategoryPropertiesFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreThemeCategory(this->transformInfoInterface, rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface) as CategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, HashMap)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

