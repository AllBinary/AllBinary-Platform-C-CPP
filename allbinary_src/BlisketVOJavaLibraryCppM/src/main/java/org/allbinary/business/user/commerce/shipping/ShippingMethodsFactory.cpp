
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/shipping/ShippingMethodsFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/BasicWeightShippingModuleView.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/NoShippingModuleView.h>

      
#include <org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/shipping/ShippingMethodsData.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodData.h"

int32_t ShippingMethodsFactory::initResult = ShippingMethodsFactory::init();
        auto ShippingMethodsFactory::init() -> int32_t {
                    

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string sep = AbPathData::getInstance()->SEPARATOR;;
    
stringBuffer->append(sep);
    
stringBuffer->append("generic");
    
stringBuffer->append(sep);
    
stringBuffer->append("shipping");
    
stringBuffer->append(sep);
    
SHIPPINGMETHODSFILEPATHSTRING= stringBuffer->toString();
    


                    return 0;
        }
                
ShippingMethodsFactory::ShippingMethodsFactory(AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface){

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string sep = AbPathData::getInstance()->SEPARATOR;;
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    
stringBuffer->append(storeFrontInterface->getName());
    
stringBuffer->append(sep);
    
stringBuffer->append(ShippingMethodsFactory::SHIPPINGMETHODSFILEPATHSTRING);
    

    AbPath* abPath = dynamic_cast<AbPath*>(new AbPath(stringBuffer->toString(), this->SHIPPINGMETHODSFILENAME));;
    

    std::string data = (new CryptFileReader(TransformInfoObjectConfigData::getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData::getInstance()->ENCRYPTED_EXTENSION))->get(abPath);;
    
this->document= DomDocumentHelper::create(data);
    
this->shippingVector= new BasicArrayListD();
    

    NodeList* nodeList = this->document->getElementsByTagName(ShippingMethodsData::NAME);;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* node = nodeList->item(index);;
    

    NodeList* shippingMethodNodeChildren = node->getChildNodes();;
    

    Node* shippingMethodNameNode = DomSearchHelper::getNode(ShippingMethodData::NAME, shippingMethodNodeChildren);;
    

    Node* classNameNode = DomSearchHelper::getNode(DynamicObjectData::NAME, shippingMethodNameNode->getChildNodes());;
    

    std::string shippingMethodClassName = DomNodeHelper::getTextNodeValue(classNameNode);;
    

    ShippingInterface* shippingMethodInterface = dynamic_cast<ShippingInterface*>(AbeFactory::getInstance()->getInstance(abeClientInformation, shippingMethodClassName));;
    
this->shippingVector->add(shippingMethodInterface);
    

    Node* defaultShippingMethodNameNode = DomSearchHelper::getNode(ShippingMethodData::DEFAULT, shippingMethodNameNode->getChildNodes());;
    

    std::string defaultShippingMethodNameNodeValue = DomNodeHelper::getTextNodeValue(defaultShippingMethodNameNode);;
    

                        if(true && defaultShippingMethodNameNodeValue.compare(ShippingMethodData::DEFAULT) == 0)
                        this->defaultShippingMethodInterface= shippingMethodInterface;
                                
}


                        if(this->shippingVector->size() < 1)
                        
                                    {
                                    this->defaultShippingMethodInterface= new BasicWeightShippingModuleView();
    
this->shippingVector->add(this->defaultShippingMethodInterface);
    
this->shippingVector->add(new NoShippingModuleView());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto ShippingMethodsFactory::getInstance() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shippingVector;
    
}


    auto ShippingMethodsFactory::getDefaultInstance() -> ShippingInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->defaultShippingMethodInterface;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_SHIPPING_SHIPPINGMETHODSFACTORY_CPP
