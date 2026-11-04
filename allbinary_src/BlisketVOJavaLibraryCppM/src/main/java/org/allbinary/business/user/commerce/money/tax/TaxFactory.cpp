
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_TAXFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_TAXFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/tax/TaxFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/commerce/money/tax/components/TaxData.h>

      
#include <org/allbinary/business/user/commerce/money/tax/modules/SimpleStateTaxModule.h>

      
#include <org/allbinary/business/user/commerce/money/tax/modules/TaxModuleInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto TaxFactory::instance_owner() -> TaxFactory* { static std::unique_ptr<TaxFactory> value(new TaxFactory()); return value.get(); }
TaxFactory* TaxFactory::instance = TaxFactory::instance_owner();

    auto TaxFactory::getInstance() -> TaxFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TaxFactory::instance;
    
}


TaxFactory::TaxFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto TaxFactory::getInstance(AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface) -> TaxModuleInterface*{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    
stringBuffer->append(storeFrontInterface->getName());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append("generic");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append("taxes");
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    

    AbPath* abPath = new AbPath(stringBuffer->toString(), TAXATIONFILENAME);;
    

    TransformInfoObjectConfigData* transformInfoObjectConfigData = TransformInfoObjectConfigData::getInstance();;
    

    std::string data = (new CryptFileReader(transformInfoObjectConfigData->UNCRYPTED_EXTENSION, transformInfoObjectConfigData->ENCRYPTED_EXTENSION))->get(abPath);;
    

    Document* document = DomDocumentHelper::create(data);;
    

    NodeList* taxNameNodeList = document->getElementsByTagName(TaxData::NAME);;
    




                        for (
    int32_t index = 0;index < taxNameNodeList->getLength(); index++)
        {

    Node* node = taxNameNodeList->item(index);;
    

    NodeList* nodeList = node->getChildNodes();;
    

                        if(nodeList != 
                                    nullptr
                                )
                        
                                    {
                                    
    Node* classNameNode = DomSearchHelper::getNode(DynamicObjectData::NAME, nodeList);;
    

                        if(classNameNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string className = DomNodeHelper::getTextNodeValue(classNameNode);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<TaxModuleInterface*>(AbeFactory::getInstance()->getInstance(abeClientInformation, className));
    

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAX))
                        
                                    {
                                    this->logUtil->putF("Class Node Null", this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                

                        }
                            

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAX))
                        
                                    {
                                    this->logUtil->putF("Tax Name Node Node Children", this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<TaxModuleInterface*>(new SimpleStateTaxModule());
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_TAXFACTORY_CPP
