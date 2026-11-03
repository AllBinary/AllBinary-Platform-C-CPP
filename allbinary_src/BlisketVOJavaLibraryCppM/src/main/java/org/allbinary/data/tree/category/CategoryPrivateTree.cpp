
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYPRIVATETREE_CPP
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYPRIVATETREE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/category/CategoryPrivateTree.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryComponent.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileWriter.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CategoryPrivateTree::CategoryPrivateTree(CategoryFactoryInterface* categoryFactoryInterface) : logUtil(LogUtil::getInstance()){

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->CATEGORY))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, "CategoryPrivateTree(CategoryFactoryInterface categoryFactoryInterface)");
    

                                    }
                                
this->categoryFactoryInterface= categoryFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryPrivateTree::save(CategoryInterface* categoryInterface) -> void{

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Saving Category File: ") +JavaString::valueOf(categoryInterface->getFilePath()), this, "save()");
    

                                    }
                                

    Document* document = (new CategoryComponent(categoryInterface))->toXmlDoc();;
    

    CryptFileWriter* cryptFileWriter = new CryptFileWriter(CategoryData::getInstance()->UNCRYPTED_EXTENSION, CategoryData::getInstance()->ENCRYPTED_EXTENSION);;
    
cryptFileWriter->write(categoryInterface->getFilePath(), document);
    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF("end", this, "save()");
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryPrivateTree::delete_(CategoryInterface* categoryInterface) -> void{

                        if(categoryInterface->isLeaf())
                        
                                    {
                                    
    AbFile* categoryFile = AbFile::createAbFileFromAbPath(categoryInterface->getFilePath());;
    

                        if(categoryFile->delete_())
                        
                                    {
                                    
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Removed: ") +JavaString::valueOf(categoryInterface->getFilePath()), this, "delete(CategoryInterface)");
    

                                    }
                                

                                    }
                                

                                    }
                                
                        else {
                            
                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF("Not a leaf unable to remove", this, "delete(CategoryInterface)");
    

                                    }
                                

                        }
                            
}




        #endif //ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYPRIVATETREE_CPP
