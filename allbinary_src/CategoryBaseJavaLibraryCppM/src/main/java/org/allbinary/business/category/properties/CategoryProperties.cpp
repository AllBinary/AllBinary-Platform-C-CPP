
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/properties/CategoryProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"


CategoryProperties::CategoryProperties(std::string name) : logUtil(LogUtil::getInstance()){
this->category= name;
    
}


CategoryProperties::CategoryProperties(Node* node) : logUtil(LogUtil::getInstance()){
this->category= CategoryUtil::getNameFromNode(node);
    
}


CategoryProperties::CategoryProperties(HashMap<Object*, Object*>* categoryPropertiesHashMap) : logUtil(LogUtil::getInstance()){
this->category= .toCharArray();
    
}


    auto CategoryProperties::isRealRoot() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto CategoryProperties::isRoot() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto CategoryProperties::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getValue();
    
}


    auto CategoryProperties::getValue() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->category;
    
}


                //@Throws(Exception.constructor)
            
    auto CategoryProperties::getPath(CategoryHierarchyInterface* categoryHierarchyInterface) -> AbPath*{

    AbPathData* abPathData = AbPathData::getInstance();;
    

    StringMaker* pathStringBuffer = new StringMaker();;
    

    BasicArrayList* list = new BasicArrayListD();;
    

    CategoryInterface* nextParentCategoryInterface = categoryHierarchyInterface->getParent();;
    

                        if(this != nextParentCategoryInterface->getProperties())
                        
                                    {
                                    
    int32_t depthIndex = 0;;
    

        while(nextParentCategoryInterface != 
                                    nullptr
                                )
        {

                        if(nextParentCategoryInterface->getProperties()->isRealRoot())
                        
                                    {
                                    break;

                    

                                    }
                                

                        if(nextParentCategoryInterface->getProperties()->isRoot())
                        
                                    {
                                    list->addAt(0, nextParentCategoryInterface->getPath()->toString());
    

                                    }
                                
                        else {
                            pathStringBuffer->delete_(0, pathStringBuffer->length());
    
list->addAt(0, pathStringBuffer->append(abPathData->SEPARATOR)->append(nextParentCategoryInterface->getProperties()->getValue())->toString());
    

                        }
                            

                        if(nextParentCategoryInterface == nextParentCategoryInterface->getHierarchy()->getParent())
                        
                                    {
                                    break;

                    

                                    }
                                
nextParentCategoryInterface= nextParentCategoryInterface->getHierarchy()->getParent();
    
depthIndex++;
    

                        if(depthIndex > CategoryProperties::MAXDEPTH)
                        
                                    {
                                    


                            throw Exception("Probably Major Error");
                    

                                    }
                                
}


                                    }
                                
pathStringBuffer->delete_(0, pathStringBuffer->length());
    
pathStringBuffer->append(abPathData->SEPARATOR)->append(this->getValue());
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
pathStringBuffer->append(JavaBoxes::unbox<std::string>(list->get(index)));
    
}

pathStringBuffer->append(abPathData->SEPARATOR);
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("path = ") +JavaString::valueOf(pathStringBuffer->toString()), this, "getPath");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(pathStringBuffer->toString(), StringUtil::getInstance()->EMPTY_STRING);
    
}


    auto CategoryProperties::getFileName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getValue() +AbPathData::getInstance()->EXTENSION_SEP +CategoryData::getInstance()->UNCRYPTED_EXTENSION;
    
}


                //@Throws(Exception.constructor)
            
    auto CategoryProperties::getWebAppPath() -> AbPath*{



                            throw Exception("Not Root");
                    
}


    auto CategoryProperties::setValue(std::string value) -> void{
this->category= value;
    
}


    auto CategoryProperties::isValid() -> bool{

    bool returnBoolean = Boolean::FALSE;;
    

                        if(StringValidationUtil::getInstance()->isValidRequired(this->category, 1, AbSqlData::MAXSTRING))
                        
                                    {
                                    returnBoolean= Boolean::TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return returnBoolean;
    
}


    auto CategoryProperties::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* categoryHashMap = StdUtil::getInstance()->createHashMap();;
    
categoryHashMap->put(CategoryData::getInstance()->NAME, this->category);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryHashMap;
    
}


    auto CategoryProperties::toVector() -> BasicArrayList*{

    BasicArrayList* categoryVector = new BasicArrayListD();;
    
categoryVector->add(this->category);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryVector;
    
}


                //@Throws(Exception.constructor)
            
    auto CategoryProperties::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto CategoryProperties::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto CategoryProperties::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_CATEGORYPROPERTIES_CPP
