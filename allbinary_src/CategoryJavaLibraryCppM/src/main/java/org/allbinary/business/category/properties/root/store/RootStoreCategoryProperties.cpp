
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIES_CPP
        #define ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/category/properties/root/store/RootStoreCategoryProperties.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryUtil.h>

      
#include <org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h>

      
#include <org/allbinary/business/category/properties/CategoryPropertiesInterface.h>

      
#include <org/allbinary/business/category/properties/root/RootCategoryPropertiesInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RootStoreCategoryProperties::RootStoreCategoryProperties(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()), pathData(AbPathData::getInstance()){
this->transformInfoInterface= transformInfoInterface;
    
this->abPath= AbPath::createAbPath();
    
this->category= CategoryData::getInstance()->ROOTCATEGORY;
    
this->isRealRoot_= true;
    
this->initPath();
    
this->log();
    
}


RootStoreCategoryProperties::RootStoreCategoryProperties(TransformInfoInterface* transformInfoInterface, AbPath* categoryAbPath) : logUtil(LogUtil::getInstance()), pathData(AbPathData::getInstance()){
this->transformInfoInterface= transformInfoInterface;
    
this->abPath= categoryAbPath;
    
this->category= this->pathData->getNameFromPath(categoryAbPath->toString());
    

                        if(StringValidationUtil::getInstance()->isEmpty(this->category))
                        
                                    {
                                    this->isRealRoot_= true;
    
this->category= CategoryData::getInstance()->ROOTCATEGORY;
    

                                    }
                                
this->initPath();
    
this->log();
    
}


RootStoreCategoryProperties::RootStoreCategoryProperties(TransformInfoInterface* transformInfoInterface, Node* node) : logUtil(LogUtil::getInstance()), pathData(AbPathData::getInstance()){
this->transformInfoInterface= transformInfoInterface;
    

    std::string categoryPath = CategoryUtil::getNameFromNode(node);;
    
this->abPath= new AbPath(categoryPath, StringUtil::getInstance()->EMPTY_STRING);
    
this->category= this->pathData->getNameFromPath(categoryPath);
    

                        if(StringValidationUtil::getInstance()->isEmpty(this->category))
                        
                                    {
                                    this->isRealRoot_= true;
    
this->category= CategoryData::getInstance()->ROOTCATEGORY;
    

                                    }
                                
this->initPath();
    
this->log();
    
}


RootStoreCategoryProperties::RootStoreCategoryProperties(TransformInfoInterface* transformInfoInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap) : logUtil(LogUtil::getInstance()), pathData(AbPathData::getInstance()){
this->transformInfoInterface= transformInfoInterface;
    

    std::string categoryPath = .toCharArray();;
    
this->abPath= new AbPath(categoryPath, StringUtil::getInstance()->EMPTY_STRING);
    
this->category= this->pathData->getNameFromPath(categoryPath);
    

                        if(StringValidationUtil::getInstance()->isEmpty(this->category))
                        
                                    {
                                    this->isRealRoot_= true;
    
this->category= CategoryData::getInstance()->ROOTCATEGORY;
    

                                    }
                                
this->initPath();
    
this->log();
    
}


                //@Throws(Exception.constructor)
            
    auto RootStoreCategoryProperties::initPath() -> void{

    TransformInfoHttpInterface* transformInfoHttpStoreInterface = dynamic_cast<TransformInfoHttpInterface*>(this->transformInfoInterface);;
    

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(transformInfoHttpStoreInterface->getStoreName());;
    

    std::string postPath = storeFrontInterface->getCurrentHostNamePath() +storeFrontInterface->getCategoryPath();;
    

    HttpServletRequest* httpServletRequest = dynamic_cast<HttpServletRequest*>(transformInfoHttpStoreInterface->getPageContext()->getRequest());;
    
this->webAppAbPath= new AbPath(JavaString::valueOf(httpServletRequest->getContextPath()) +JavaString::valueOf(postPath), StringUtil::getInstance()->EMPTY_STRING);
    
this->setRootFilePath(new AbPath(JavaString::valueOf(URLGLOBALS::getMainPath()) +JavaString::valueOf(postPath), StringUtil::getInstance()->EMPTY_STRING));
    
}


    auto RootStoreCategoryProperties::isRealRoot() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isRealRoot_;
    
}


    auto RootStoreCategoryProperties::isRoot() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto RootStoreCategoryProperties::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getValue();
    
}


    auto RootStoreCategoryProperties::setPath(AbPath* path) -> void{
this->abPath= path;
    
}


    auto RootStoreCategoryProperties::setRootFilePath(AbPath* value) -> void{
this->fileAbPath= value;
    
}


    auto RootStoreCategoryProperties::getRootFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->fileAbPath;
    
}


    auto RootStoreCategoryProperties::getValue() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->category;
    
}


                //@Throws(Exception.constructor)
            
    auto RootStoreCategoryProperties::getWebAppPath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->webAppAbPath;
    
}


    auto RootStoreCategoryProperties::getPath(CategoryHierarchyInterface* categoryHierarchyInterface) -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->abPath;
    
}


    auto RootStoreCategoryProperties::getFileName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getValue() +AbPathData::getInstance()->EXTENSION_SEP +CategoryData::getInstance()->UNCRYPTED_EXTENSION;
    
}


    auto RootStoreCategoryProperties::setValue(std::string value) -> void{
this->category= value;
    
}


    auto RootStoreCategoryProperties::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    
}


    auto RootStoreCategoryProperties::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* categoryHashMap = StdUtil::getInstance()->createHashMap();;
    
categoryHashMap->put(CategoryData::getInstance()->NAME, this->getValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return categoryHashMap;
    
}


    auto RootStoreCategoryProperties::toVector() -> BasicArrayList*{

    BasicArrayList* categoryVector = new BasicArrayListD();;
    
categoryVector->add(this->getValue());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return categoryVector;
    
}


                //@Throws(Exception.constructor)
            
    auto RootStoreCategoryProperties::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto RootStoreCategoryProperties::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto RootStoreCategoryProperties::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto RootStoreCategoryProperties::log() -> void{

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->CATEGORY))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("filePath = ")->append(this->fileAbPath->toString())->append("\npath = ")->append(this->abPath->toString())->append("\ncategory = ")->append(this->category)->toString(), this, "log()");
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_BUSINESS_CATEGORY_PROPERTIES_ROOT_STORE_ROOTSTORECATEGORYPROPERTIES_CPP
