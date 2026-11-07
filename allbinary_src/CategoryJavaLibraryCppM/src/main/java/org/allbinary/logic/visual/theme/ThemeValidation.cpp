
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/theme/ThemeValidation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/category/CategoryData.h>

      
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/store/theme/StoreThemeCategoryFactory.h>

      
#include <org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h>

      
#include <org/allbinary/data/tree/category/CategoryLoaderFactory.h>

      
#include <org/allbinary/data/tree/category/CategoryLoaderInterface.h>

      
#include <org/allbinary/data/tree/dom/DomData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/io/path/PathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/CssStyleValidation.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

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
        #include "org/allbinary/logic/visual/theme/ThemeInterface.h"
#include "org/allbinary/logic/visual/theme/ThemeData.h"


ThemeValidation::ThemeValidation(TransformInfoInterface* transformInfoInterface, CssStyleValidation* cssStyleValidation, std::string categoryThemePath) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->transformInfoInterface= transformInfoInterface;
    

    AbPathData* pathData = AbPathData::getInstance();;
    

    PathUtil* pathUtil = PathUtil::getInstance();;
    
this->categoryAbPath= pathUtil->removeNameFromPath(categoryThemePath);
    
this->themeName= pathData->getNameFromPath(categoryThemePath);
    
this->styleValidationInterface= cssStyleValidation;
    
this->init();
    
}


ThemeValidation::ThemeValidation(TransformInfoInterface* transformInfoInterface, HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->transformInfoInterface= transformInfoInterface;
    

    AbPath* categoryThemeAbPath = new AbPath(JavaBoxes::unbox<std::string>(hashMap->get(ThemeData::getInstance()->PATH)), StringUtil::getInstance()->EMPTY_STRING);;
    

    AbPathData* pathData = AbPathData::getInstance();;
    

    PathUtil* pathUtil = PathUtil::getInstance();;
    
this->categoryAbPath= pathUtil->removeNameFromPath(JavaString::valueOf(categoryThemeAbPath));
    
this->themeName= pathData->getNameFromPath(JavaString::valueOf(categoryThemeAbPath));
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("CategoryThemePath: ");
    
stringBuffer->append(JavaString::valueOf(categoryThemeAbPath));
    
stringBuffer->append(" & CategoryPath: ");
    
stringBuffer->append(JavaString::valueOf(this->categoryAbPath));
    
stringBuffer->append(" & ThemeName: ");
    
stringBuffer->append(this->themeName);
    
this->logUtil->putF("Http Request Constructor", this, JavaString::valueOf(stringBuffer));
    

                                    }
                                
this->init();
    
}


ThemeValidation::ThemeValidation(StoreThemeCategoryInterface* storeThemeCategoryInterface, Node* node) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->transformInfoInterface= storeThemeCategoryInterface->getTransformInfoInterface();
    
this->categoryAbPath= storeThemeCategoryInterface->getPath();
    

    Node* themeNameNode = DomSearchHelper::getNode(ThemeData::getInstance()->NAME, node->getChildNodes());;
    

    Node* valueNode = DomSearchHelper::getNode(DomData::VALUE, themeNameNode->getChildNodes());;
    
this->themeName= DomNodeHelper::getTextNodeValue(valueNode);
    

    Node* previewImageNameNode = DomSearchHelper::getNode(ThemeData::getInstance()->PREVIEW_IMAGE_NAME, node->getChildNodes());;
    

    Node* previewImageNameValueNode = DomSearchHelper::getNode(DomData::VALUE, previewImageNameNode->getChildNodes());;
    
this->themePreviewImageName= DomNodeHelper::getTextNodeValue(previewImageNameValueNode);
    
this->webAppAbPath= storeThemeCategoryInterface->getWebAppPath();
    
this->init(storeThemeCategoryInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto ThemeValidation::init() -> void{

    CategoryFactoryInterface* categoryFactoryInterface = new StoreThemeCategoryFactory(this->getTransformInfoInterface());;
    

    CategoryLoaderInterface* categoryLoaderInterface = CategoryLoaderFactory::getInstance(categoryFactoryInterface);;
    

    StoreThemeCategoryInterface* rootStoreThemeCategoryInterface = dynamic_cast<StoreThemeCategoryInterface*>(categoryFactoryInterface->getRootInstance());;
    
this->init(rootStoreThemeCategoryInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto ThemeValidation::init(StoreThemeCategoryInterface* storeThemeCategoryInterface) -> void{
this->fileAbPath= new AbPath(JavaString::valueOf(storeThemeCategoryInterface->getRootFilePath()) +JavaString::valueOf(this->categoryAbPath), StringUtil::getInstance()->EMPTY_STRING);
    
this->webAppAbPath= storeThemeCategoryInterface->getWebAppPath();
    
}


                //@Throws(Exception.constructor)
            
    auto ThemeValidation::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->transformInfoInterface;
    
}


    auto ThemeValidation::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->themeName;
    
}


    auto ThemeValidation::getPreviewImageName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->themePreviewImageName;
    
}


    auto ThemeValidation::getPreviewImagePath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->webAppAbPath) +JavaString::valueOf(this->categoryAbPath);
    
}


    auto ThemeValidation::getPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->categoryAbPath);;
    
}


                //@Throws(Exception.constructor)
            
    auto ThemeValidation::getCssStyleValidation() -> CssStyleValidation*{

                        if(this->styleValidationInterface == 
                                    nullptr
                                )
                        
                                    {
                                    
    AbPath* cssStyleFileAbPath = new AbPath(JavaString::valueOf(this->fileAbPath), this->themeName +AbPathData::getInstance()->EXTENSION_SEP +CategoryData::getInstance()->UNCRYPTED_EXTENSION);;
    

    CryptFileReader* cryptFileReader = new CryptFileReader(CategoryData::getInstance()->UNCRYPTED_EXTENSION, CategoryData::getInstance()->ENCRYPTED_EXTENSION);;
    

    Document* document = DomDocumentHelper::create(cryptFileReader->get(cssStyleFileAbPath));;
    
this->styleValidationInterface= new CssStyleValidation(document);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CssStyleValidation*>(this->styleValidationInterface);
    
}


    auto ThemeValidation::isValid() -> bool{

        try {
            
    bool isValid = Boolean::TRUE;;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->IS_VALID);
    

                                    }
                                

                        if(!StringValidationUtil::getInstance()->isValidRequired(JavaString::valueOf(this->categoryAbPath), AbSqlData::MINSTRING, AbSqlData::MAXSTRING))
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                

                        if(!StringValidationUtil::getInstance()->isValidRequired(this->themeName, AbSqlData::MINSTRING, AbSqlData::MAXSTRING))
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                

                        if(!this->getCssStyleValidation()->isValid())
                        
                                    {
                                    isValid= Boolean::FALSE;
    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("End: ") +JavaString::valueOf(isValid), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isValid;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto ThemeValidation::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Theme Validation Error");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Validating Form";
    
}

}


    auto ThemeValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto ThemeValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto ThemeValidation::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->getName());
    
}


    auto ThemeValidation::toVector() -> BasicArrayList*{

    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add(this->getName());
    
vector->add(this->getPath());
    
vector->add(this->getPreviewImageName());
    
vector->add(this->getPreviewImagePath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector;
    
}


    auto ThemeValidation::toHashMap() -> HashMap<Object*, Object*>*{

    ThemeData* themeData = ThemeData::getInstance();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(themeData->NAME, this->getName());
    
hashMap->put(themeData->PATH, this->getPath());
    
hashMap->put(themeData->PREVIEW_IMAGE_NAME, this->getPreviewImageName());
    
hashMap->put(themeData->PREVIEW_IMAGE_PATH, this->getPreviewImagePath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto ThemeValidation::toXmlNode(Document* document) -> Node*{

    Node* node = ModDomHelper::createNameValueNodes(document, ThemeData::getInstance()->NAME, this->toHashMap());;
    

    DomNodeInterface* domNodeInterface = dynamic_cast<DomNodeInterface*>(this->getCssStyleValidation());;
    
node->appendChild(domNodeInterface->toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_THEME_THEMEVALIDATION_CPP
