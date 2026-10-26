
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
        
            #include "java/lang/RuntimeException.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactory.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryFactoryInterface.h"
#include "CategoryInterface.h"
#include "Category.h"

class CategoryAbstractFactory
            : public Object
        : public CategoryFactoryInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

public: CategoryAbstractFactory(){
}


    public: CategoryInterface getRootInstance(){



                            throw RuntimeException();
                    
}


    public: CategoryInterface getRootInstance(AbPath categoryAbPath){



                            throw RuntimeException();
                    
}


    public: CategoryInterface getRootInstanceFromNode(Node node){



                            throw RuntimeException();
                    
}


    public: CategoryInterface getInstance(std::string categoryName){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "getInstance(String)");
    

                                    }
                                

    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(categoryName);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Category(categoryPropertiesFactoryInterface);
    

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


    public: CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, std::string categoryName){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "getInstance(CategoryInterface, CategoryInterface, String)");
    

                                    }
                                

    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(categoryName);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Category(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface , String, int)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: CategoryInterface getInstance(Node node){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "getInstance(Node)");
    

                                    }
                                

    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(node);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Category(categoryPropertiesFactoryInterface);
    

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
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "getInstance(CategoryInterface, CategoryInterface, Node)");
    

                                    }
                                

    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(node);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Category(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface);
    

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


    public: CategoryInterface getInstance(CategoryInterface rootCategoryInterface, CategoryInterface parentCategoryInterface, HashMap<Object*, Object*> categoryPropertiesHashMap){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "getInstance(CategoryInterface, CategoryInterface, HashMap)");
    

                                    }
                                

    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = CategoryPropertiesFactory(categoryPropertiesHashMap);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Category(rootCategoryInterface, parentCategoryInterface, categoryPropertiesFactoryInterface);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORYERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, "getInstance(CategoryInterface, CategoryInterface, HashMap)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

