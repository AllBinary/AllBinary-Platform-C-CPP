
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYMODIFIERTREE_CPP
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYMODIFIERTREE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/category/CategoryModifierTree.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

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
        #include "org/allbinary/data/tree/category/CategoryPrivateTree.h"
#include "org/allbinary/data/tree/category/CategoryModifierTreeInterface.h"


CategoryModifierTree::CategoryModifierTree(CategoryFactoryInterface* categoryFactoryInterface) : CategoryPrivateTree(categoryFactoryInterface), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), directory(Directory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "CategoryModifierTree(CategoryFactoryInterface categoryFactoryInterface)");
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryModifierTree::insert(CategoryInterface* parentCategoryInterface, CategoryInterface* newChildCategoryInterface) -> void{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF("Inserting", this, "insert()");
    

                                    }
                                

                        if(JavaBoxes::value<bool>(parentCategoryInterface->isValid()))
                        
                                    {
                                    parentCategoryInterface->addChild(newChildCategoryInterface);
    

    AbPath* directoryToBeCreatedAbPath = new AbPath(JavaString::valueOf(newChildCategoryInterface->getRootFilePath()) +JavaString::valueOf(newChildCategoryInterface->getPath()), StringUtil::getInstance()->EMPTY_STRING);;
    
this->directory->create(directoryToBeCreatedAbPath);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF("Saving", this, "insert()");
    

                                    }
                                
this->save(parentCategoryInterface);
    
this->save(newChildCategoryInterface);
    

                                    }
                                
                             else 
                        if()
                        

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "insert", &e);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryModifierTree::delete_(CategoryInterface* parentCategoryInterface, CategoryInterface* existingChildCategoryInterface) -> void{

        try {
            
                        if(JavaBoxes::value<bool>(parentCategoryInterface->isValid()))
                        
                                    {
                                    parentCategoryInterface->addChild(existingChildCategoryInterface);
    

    AbPath* directoryToBeDeletedAbPath = new AbPath(JavaString::valueOf(existingChildCategoryInterface->getRootFilePath()) +JavaString::valueOf(existingChildCategoryInterface->getPath()), StringUtil::getInstance()->EMPTY_STRING);;
    
this->CategoryPrivateTree::delete_(existingChildCategoryInterface);
    
parentCategoryInterface->removeChild(existingChildCategoryInterface);
    
this->save(parentCategoryInterface);
    
this->directory->remove(directoryToBeDeletedAbPath);
    

                                    }
                                
                             else 
                        if()
                        

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->delete_, &e);
    

                                    }
                                
}

}




        #endif //ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYMODIFIERTREE_CPP
