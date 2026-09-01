
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
        



            #include "../../../../../java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreCategoryFactory: public CategoryAbstractFactory, public CategoryFactoryInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: TransformInfoInterface transformInfoInterface;

public: StoreCategoryFactory(TransformInfoInterface transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().CATEGORY))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "StoreCategoryFactory(TransformInfoInterface transformInfoInterface)");
    

                                    }
                                
this->transformInfoInterface= transformInfoInterface;
    
}


    public: CategoryInterface getRootInstance(){

        try {
            
    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = RootStoreCategoryPropertiesFactory(this->transformInfoInterface) as CategoryPropertiesFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Category(categoryPropertiesFactoryInterface) as CategoryInterface;
    

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


    public: CategoryInterface getRootInstance(AbPath categoryPath){

        try {
            
    int32_t level = CategoryUtil::getPathLevel(categoryPath);;
    

    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = RootStoreCategoryPropertiesFactory(this->transformInfoInterface, categoryPath) as CategoryPropertiesFactoryInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Category(categoryPropertiesFactoryInterface, level) as CategoryInterface;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().ENTITYFACTORYERROR))
                        
                                    {
                                    this->logUtil.put(commonStrings.EXCEPTION, this, "getInstance(String, int)", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: CategoryInterface getRootInstanceFromNode(Node node){

        try {
            
    CategoryPropertiesFactoryInterface categoryPropertiesFactoryInterface = RootStoreCategoryPropertiesFactory(this->transformInfoInterface, node) as CategoryPropertiesFactoryInterface;;
    

    AbPath categoryPath = AbPath(CategoryUtil::getNameFromNode(node), StringUtil::getInstance().EMPTY_STRING);;
    

    int32_t level = CategoryUtil::getPathLevel(categoryPath);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Category(categoryPropertiesFactoryInterface, level) as CategoryInterface;
    

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


};

            

