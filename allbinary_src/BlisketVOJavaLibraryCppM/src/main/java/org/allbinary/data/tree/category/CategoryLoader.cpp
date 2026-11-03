
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADER_CPP
        #define ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/category/CategoryLoader.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryProperties.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/category/CategoryModifierTree.h"
#include "org/allbinary/data/tree/category/CategoryLoaderInterface.h"


CategoryLoader::CategoryLoader(CategoryFactoryInterface* categoryFactoryInterface) : CategoryModifierTree(categoryFactoryInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "CategoryLoader(CategoryFactoryInterface categoryFactoryInterface)");
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryLoader::getDoc(CategoryInterface* categoryInterface) -> Document*{

        try {
            
                        if(categoryInterface->getProperties()->getPath(categoryInterface->getHierarchy()) != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(categoryInterface->getHierarchy()->getLevel() == 1)
                        
                                    {
                                    
    AbFile* rootAbFile = AbFile::createAbFileFromAbPath(categoryInterface->getRootFilePath());;
    

                        if(!rootAbFile->isDirectory())
                        
                                    {
                                    rootAbFile->mkdirs();
    

                        if(!rootAbFile->isDirectory())
                        
                                    {
                                    


                            throw Exception("Could Not Create Directory");
                    

                                    }
                                
this->save(categoryInterface);
    

                                    }
                                

                                    }
                                

    AbPath* fileAbPath = categoryInterface->getFilePath();;
    

    CryptFileReader* cryptFileReader = new CryptFileReader(CategoryData::getInstance()->UNCRYPTED_EXTENSION, CategoryData::getInstance()->ENCRYPTED_EXTENSION);;
    

    Document* document = DomDocumentHelper::create(cryptFileReader->get(fileAbPath));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return document;
    

                                    }
                                
                        else {
                            


                            throw Exception("Null Category");
                    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    
        try {
            categoryInterface->log();
    

                //: 
} catch(Exception& e2) 
            {
this->logUtil->put("Could Not Log Category", this, "getDoc", &e);
    
}

this->logUtil->put(this->commonStrings->FAILURE, this, "getDoc", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryLoader::get(CategoryInterface* categoryInterface) -> CategoryInterface*{

        try {
            
    Document* document = this->getDoc(categoryInterface);;
    

    Node* categoryNode = DomSearchHelper::getNode(CategoryData::getInstance()->NAME, document->getChildNodes());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->addProperties(categoryInterface, categoryNode->getChildNodes());;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->GET, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryLoader::get(Document* document) -> CategoryInterface*{

        try {
            
    Node* categoryNode = DomSearchHelper::getNode(CategoryData::getInstance()->NAME, document->getChildNodes());;
    

    CategoryInterface* loadedCategoryInterface = this->categoryFactoryInterface->getRootInstanceFromNode(categoryNode);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->addProperties(loadedCategoryInterface, categoryNode->getChildNodes());;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->GET, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryLoader::getAll(CategoryInterface* categoryInterface) -> CategoryInterface*{

        try {
            
    Document* document = this->getDoc(categoryInterface);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getAll(document);;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->GET, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryLoader::getAll(Document* document) -> CategoryInterface*{

        try {
            
    Node* categoryNode = DomSearchHelper::getNode(CategoryData::getInstance()->NAME, document->getChildNodes());;
    

    CategoryInterface* loadedCategoryInterface = this->categoryFactoryInterface->getRootInstanceFromNode(categoryNode);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->addProperties(loadedCategoryInterface, categoryNode->getChildNodes());;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->GET, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryLoader::getAll(CategoryInterface* parentCategoryInterface, NodeList* categoryNodeList) -> CategoryInterface*{

        try {
            
                        if(categoryNodeList != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < categoryNodeList->getLength(); index++)
        {

    Node* categoryNode = categoryNodeList->item(index);;
    

                        if(categoryNode != 
                                    nullptr
                                 && categoryNode->getNodeName()->compareTo(CategoryData::getInstance()->NAME) == 0)
                        
                                    {
                                    
    CategoryInterface* categoryInterface = dynamic_cast<CategoryInterface*>(this->categoryFactoryInterface->getInstance(parentCategoryInterface->getHierarchy()->getRoot(), parentCategoryInterface, categoryNode));;
    
parentCategoryInterface->addChild(categoryInterface);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return parentCategoryInterface;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->GET, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto CategoryLoader::addProperties(CategoryInterface* loadedCategoryInterface, NodeList* categoryNodeList) -> CategoryInterface*{

        try {
            
                        if(categoryNodeList != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < categoryNodeList->getLength(); index++)
        {

    Node* categoryNode = categoryNodeList->item(index);;
    

                        if(categoryNode != 
                                    nullptr
                                 && categoryNode->getNodeName()->compareTo(CategoryData::getInstance()->NAME) == 0)
                        
                                    {
                                    
    CategoryPropertiesInterface* categoryPropertiesInterface = dynamic_cast<CategoryPropertiesInterface*>(new CategoryProperties(categoryNode));;
    
loadedCategoryInterface->addChildProperty(categoryPropertiesInterface);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return loadedCategoryInterface;
    

                //: 
} catch(Exception& e) 
            {

                        if(allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, this->commonStrings->GET, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //ORG_ALLBINARY_DATA_TREE_CATEGORY_CATEGORYLOADER_CPP
