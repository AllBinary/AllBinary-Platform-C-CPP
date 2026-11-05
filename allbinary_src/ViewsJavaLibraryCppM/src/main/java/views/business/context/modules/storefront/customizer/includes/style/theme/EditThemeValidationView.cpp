
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_EDITTHEMEVALIDATIONVIEW_CPP
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_EDITTHEMEVALIDATIONVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/business/context/modules/storefront/customizer/includes/style/theme/EditThemeValidationView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <org/allbinary/business/category/CategoryFactoryInterface.h>

      
#include <org/allbinary/business/category/CategoryInterface.h>

      
#include <org/allbinary/business/category/store/theme/StoreThemeCategoryFactory.h>

      
#include <org/allbinary/business/category/store/theme/StoreThemeCategoryInterface.h>

      
#include <org/allbinary/business/category/store/theme/StoreThemeCategoryPathValidationView.h>

      
#include <org/allbinary/data/tree/category/CategoryLoaderFactory.h>

      
#include <org/allbinary/data/tree/category/CategoryLoaderInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/business/context/modules/storefront/customizer/includes/style/theme/ThemeCustomizerView.h"


EditThemeValidationView::EditThemeValidationView(TransformInfoInterface* transformInfoInterface) : ThemeCustomizerView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto EditThemeValidationView::isValid() -> bool{

        try {
            
    bool isValid = Boolean::TRUE;;
    

    CategoryFactoryInterface* categoryFactoryInterface = new StoreThemeCategoryFactory(this->getTransformInfoInterface());;
    

    CategoryLoaderInterface* categoryLoaderInterface = CategoryLoaderFactory::getInstance(categoryFactoryInterface);;
    

    StoreThemeCategoryInterface* rootStoreThemeCategoryInterface = dynamic_cast<StoreThemeCategoryInterface*>(categoryFactoryInterface->getRootInstance());;
    

    StoreThemeCategoryInterface* storeThemeCategoryInterface = dynamic_cast<StoreThemeCategoryInterface*>(categoryLoaderInterface->getAll(dynamic_cast<CategoryInterface*>(rootStoreThemeCategoryInterface)));;
    
this->validationInterface= new StoreThemeCategoryPathValidationView(dynamic_cast<StoreThemeCategoryInterface*>(storeThemeCategoryInterface));
    
isValid= this->validationInterface->isValid();
    

    DomNodeInterface* domNodeInterface = dynamic_cast<DomNodeInterface*>(this->validationInterface);;
    

    Document* document = DomDocumentHelper::create();;
    
document->appendChild(domNodeInterface->toXmlNode(document));
    

    std::string documentString = XmlDocumentHelper::toString(document);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Setting Data: ") +JavaString::valueOf(documentString), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->getTransformInfoInterface()->setData(documentString);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isValid;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto EditThemeValidationView::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->validationInterface->validationInfo());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Getting Validation Info";
    
}

}


    auto EditThemeValidationView::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto EditThemeValidationView::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto EditThemeValidationView::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ThemeCustomizerView::getTransformInfoInterface();;
    
}




        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_EDITTHEMEVALIDATIONVIEW_CPP
