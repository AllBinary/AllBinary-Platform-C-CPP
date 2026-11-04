
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/Category.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchy.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesFactoryInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/CategoryInterface.h"


Category::Category(CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), childCategoryVector(new BasicArrayListD()), typeVector(new BasicArrayListD()), PROPERTIES(int32_t(1)), CATEGORY(int32_t(0)){

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, "Category(CategoryPropertiesFactoryInterface)");
    

                                    }
                                
this->categoryPropertiesInterface= categoryPropertiesFactoryInterface->getInstance();
    
this->categoryHierarchyInterface= dynamic_cast<CategoryHierarchyInterface*>(new CategoryHierarchy(this, this));
    
this->log();
    
}


Category::Category(CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface, int32_t level) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), childCategoryVector(new BasicArrayListD()), typeVector(new BasicArrayListD()), PROPERTIES(int32_t(1)), CATEGORY(int32_t(0)){
this->categoryPropertiesInterface= categoryPropertiesFactoryInterface->getInstance();
    
this->categoryHierarchyInterface= dynamic_cast<CategoryHierarchyInterface*>(new CategoryHierarchy(this, this, level));
    
this->log();
    
}


Category::Category(CategoryInterface* rootCategoryInterface, CategoryInterface* parentCategoryInterface, CategoryPropertiesFactoryInterface* categoryPropertiesFactoryInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), childCategoryVector(new BasicArrayListD()), typeVector(new BasicArrayListD()), PROPERTIES(int32_t(1)), CATEGORY(int32_t(0)){
this->categoryPropertiesInterface= dynamic_cast<CategoryPropertiesInterface*>(categoryPropertiesFactoryInterface->getInstance());
    
this->categoryHierarchyInterface= dynamic_cast<CategoryHierarchyInterface*>(new CategoryHierarchy(rootCategoryInterface, parentCategoryInterface));
    
this->log();
    
}


                //@Throws(Exception.constructor)
            
    auto Category::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->categoryPropertiesInterface->getKey();;
    
}


                //@Throws(Exception.constructor)
            
    auto Category::getRootFilePath() -> AbPath*{

    AbPath* rootAbPath = new AbPath(NOT_ROOT, StringUtil::getInstance()->EMPTY_STRING);;
    

    CategoryInterface* categoryInterface = this->categoryHierarchyInterface->getRoot();;
    

                        if(categoryInterface->getProperties()->isRoot())
                        
                                    {
                                    
    RootCategoryPropertiesInterface* rootCategoryPropertiesInterface = dynamic_cast<RootCategoryPropertiesInterface*>(categoryInterface->getProperties());;
    
rootAbPath= rootCategoryPropertiesInterface->getRootFilePath();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rootAbPath;
    
}


                //@Throws(Exception.constructor)
            
    auto Category::getFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbPath(this->getRootFilePath()->toString() +this->getProperties()->getPath(this->getHierarchy())->toString(), this->getProperties()->getFileName());
    
}


                //@Throws(Exception.constructor)
            
    auto Category::getWebAppPath() -> AbPath*{

    CategoryInterface* categoryInterface = this->categoryHierarchyInterface->getRoot();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return categoryInterface->getProperties()->getWebAppPath();;
    
}


                //@Throws(Exception.constructor)
            
    auto Category::getPath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->categoryPropertiesInterface->getPath(this->categoryHierarchyInterface);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto Category::addChildProperty(CategoryPropertiesInterface* categoryPropertiesInterface) -> bool{
this->typeVector->add(this->PROPERTIES);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->childCategoryVector->add(categoryPropertiesInterface);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto Category::addChild(CategoryInterface* categoryInterface) -> bool{
this->removeDuplicateChild(categoryInterface);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF("adding", this, "addChild");
    

                                    }
                                

    CategoryHierarchyInterface* childCategoryHierarchyInterface = categoryInterface->getHierarchy();;
    
childCategoryHierarchyInterface->setParent(this);
    
childCategoryHierarchyInterface->setRoot(this->getHierarchy()->getRoot());
    
categoryInterface->setHierarchy(childCategoryHierarchyInterface);
    
this->typeVector->add(this->CATEGORY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->childCategoryVector->add(categoryInterface);;
    
}


    auto Category::getChildNodes() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->childCategoryVector;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto Category::removeChild(CategoryInterface* categoryInterface) -> bool{

    BasicArrayList* removalVector = new BasicArrayListD();;
    

    bool bool_return = false;;
    

    int32_t size = this->childCategoryVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->CATEGORY == this->typeVector->get(index))
                        
                                    {
                                    
    Object* anyType = JavaBoxes::toObject(this->childCategoryVector->get(index));;
    

    CategoryInterface* currentCategoryInterface = dynamic_cast<CategoryInterface*>(anyType);;
    

                        if(currentCategoryInterface->getProperties()->getValue()->compareTo(categoryInterface->getProperties()->getValue()) == 0)
                        
                                    {
                                    removalVector->add(currentCategoryInterface);
    
bool_return= true;
    

                                    }
                                

                                    }
                                
}

this->removal(removalVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return bool_return;
    
}


    auto Category::removal(BasicArrayList* removalVector) -> void{

    int32_t removalSize = removalVector->size();;
    




                        for (
    int32_t index = 0;index < removalSize; index++)
        {

    Object* anyType = JavaBoxes::toObject(removalVector->get(index));;
    

    int32_t objectIndex = this->childCategoryVector->indexOf(anyType);;
    
this->typeVector->remove(objectIndex);
    
this->childCategoryVector->remove(objectIndex);
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto Category::removeDuplicateChild(CategoryInterface* categoryInterface) -> bool{

    BasicArrayList* removalVector = new BasicArrayListD();;
    

    bool bool_return = false;;
    

    int32_t size = this->childCategoryVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = JavaBoxes::toObject(this->childCategoryVector->get(index));;
    

                        if(this->PROPERTIES == this->typeVector->get(index))
                        
                                    {
                                    
    CategoryPropertiesInterface* categoryPropertiesInterface = dynamic_cast<CategoryPropertiesInterface*>(anyType);;
    

                        if(categoryInterface->getProperties()->getValue()->compareTo(categoryPropertiesInterface->getValue()) == 0)
                        
                                    {
                                    removalVector->add(categoryPropertiesInterface);
    
bool_return= true;
    
break;

                    

                                    }
                                

                                    }
                                
                             else 
                        if(this->CATEGORY == this->typeVector->get(index))
                        
                                    {
                                    
    CategoryInterface* existingCategoryInterface = dynamic_cast<CategoryInterface*>(anyType);;
    

    CategoryPropertiesInterface* categoryPropertiesInterface = existingCategoryInterface->getProperties();;
    

                        if(categoryInterface->getProperties()->getValue()->compareTo(categoryPropertiesInterface->getValue()) == 0)
                        
                                    {
                                    removalVector->add(existingCategoryInterface);
    
bool_return= true;
    
break;

                    

                                    }
                                

                                    }
                                
}

this->removal(removalVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return bool_return;
    
}


                //@Throws(Exception.constructor)
            
    auto Category::isLeaf() -> bool{

                        if(this->childCategoryVector == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Category Error");
                    

                                    }
                                

                        if(this->childCategoryVector->size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto Category::getProperties() -> CategoryPropertiesInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->categoryPropertiesInterface;
    
}


    auto Category::setProperties(CategoryPropertiesInterface* categoryPropertiesInterface) -> void{
this->categoryPropertiesInterface= categoryPropertiesInterface;
    
}


    auto Category::getHierarchy() -> CategoryHierarchyInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->categoryHierarchyInterface;
    
}


    auto Category::setHierarchy(CategoryHierarchyInterface* categoryHierarchyInterface) -> void{
this->categoryHierarchyInterface= categoryHierarchyInterface;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto Category::isValid() -> bool{

                        if(!this->categoryPropertiesInterface->isValid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

    int32_t size = this->childCategoryVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = JavaBoxes::toObject(this->childCategoryVector->get(index));;
    

                        if(this->PROPERTIES == this->typeVector->get(index))
                        
                                    {
                                    
    CategoryPropertiesInterface* categoryPropertiesInterface = dynamic_cast<CategoryPropertiesInterface*>(anyType);;
    

                        if(!categoryPropertiesInterface->isValid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                
                             else 
                        if(this->CATEGORY == this->typeVector->get(index))
                        
                                    {
                                    
    CategoryInterface* categoryInterface = dynamic_cast<CategoryInterface*>(anyType);;
    

                        if(!categoryInterface->isValid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


                //@Throws(Exception.constructor)
            
    auto Category::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto Category::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto Category::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto Category::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* categoryHashMap = this->categoryPropertiesInterface->toHashMap();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return categoryHashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto Category::toVector() -> BasicArrayList*{

    BasicArrayList* categoryVector = this->categoryPropertiesInterface->toVector();;
    
categoryVector->add(this->childCategoryVector);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return categoryVector;
    
}


                //@Throws(Exception.constructor)
            
    auto Category::log() -> void{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->CATEGORY))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Category Name: ");
    
stringBuffer->append(this->categoryPropertiesInterface->getValue());
    
stringBuffer->append("\nPath = ");
    
stringBuffer->append(this->getPath()->toString());
    
stringBuffer->append("\nFile Path: ");
    
stringBuffer->append(this->getFilePath()->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, "log()");
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_CATEGORY_CPP
