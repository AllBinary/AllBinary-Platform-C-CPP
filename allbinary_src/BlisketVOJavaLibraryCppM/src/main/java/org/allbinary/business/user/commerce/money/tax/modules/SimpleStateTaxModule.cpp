
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_SIMPLESTATETAXMODULE_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_SIMPLESTATETAXMODULE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/tax/modules/SimpleStateTaxModule.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
            #include "java/lang/Float.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/business/user/commerce/money/tax/components/TaxData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/tax/modules/TaxModuleInterface.h"


SimpleStateTaxModule::SimpleStateTaxModule() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), ALL(CommonPhoneStrings::getInstance()->STAR){
}


                //@Throws(Exception.constructor)
            
    auto SimpleStateTaxModule::getTaxRate(StreetAddress* streetAddress, StoreFrontInterface* storeFrontInterface) -> float{
this->streetAddress= streetAddress;
    
this->storeFrontInterface= storeFrontInterface;
    

    AbPath* fileAbPath = new AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH +this->storeFrontInterface->getName() +this->STATETAXPATH, this->STATETAXFILE);;
    

    std::string data = (new CryptFileReader(TransformInfoObjectConfigData::getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData::getInstance()->ENCRYPTED_EXTENSION))->get(fileAbPath);;
    
this->document= DomDocumentHelper::create(data);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAX))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Tax Doc: ") +JavaString::valueOf(XmlDocumentHelper::toString(this->document)), this, "getTaxRate");
    

                                    }
                                

    std::string state = this->streetAddress->getState();;
    

    std::string country = this->streetAddress->getCountry();;
    
state= JavaString::toUpperCase(state);
    

    NodeList* nodeList = this->document->getElementsByTagName(TaxData::NAME);;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* node = nodeList->item(index);;
    

    NodeList* taxNodeChildren = node->getChildNodes();;
    

    Node* streetAddressNode = DomSearchHelper::getNode(StreetAddressData::NAME, taxNodeChildren);;
    

    StreetAddress* taxableStreetAddress = new StreetAddress(streetAddressNode);;
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isEmpty(country) && !stringValidationUtil->isEmpty(taxableStreetAddress->getCountry()) && country.compare(taxableStreetAddress->getCountry()) == 0)
                        
                                    {
                                    
                        if(true && taxableStreetAddress->getState() != 
                                    nullptr
                                 && state.compare(taxableStreetAddress->getState()) == 0)
                        
                                    {
                                    
    Node* rateNode = DomSearchHelper::getNode(TaxData::RATE, taxNodeChildren);;
    

    std::string taxRate = DomNodeHelper::getTextNodeValue(rateNode);;
    

    float taxRateFloat = float((Float.valueOf(taxRate)) *.01);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return taxRateFloat;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return float(0);
    
}


    auto SimpleStateTaxModule::isValid(StreetAddress* streetAddress, StoreFrontInterface* storeFrontInterface) -> bool{

        try {
            this->streetAddress= streetAddress;
    
this->storeFrontInterface= storeFrontInterface;
    

    AbPath* fileAbPath = new AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH +this->storeFrontInterface->getName() +this->STATETAXPATH, this->STATETAXFILE);;
    

    std::string data = (new CryptFileReader(TransformInfoObjectConfigData::getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData::getInstance()->ENCRYPTED_EXTENSION))->get(fileAbPath);;
    
this->document= DomDocumentHelper::create(data);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAX))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Tax Doc: ") +JavaString::valueOf(XmlDocumentHelper::toString(this->document)), this, this->commonStrings->IS_VALID);
    

                                    }
                                

    std::string country = this->streetAddress->getCountry();;
    

    Node* rootNode = this->document->getElementsByTagName(TransformInfoObjectConfigData::getInstance()->NAME)->item(0);;
    

    NodeList* nodeList = this->document->getElementsByTagName(TaxData::NAME);;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* node = nodeList->item(index);;
    

    NodeList* taxNodeChildren = node->getChildNodes();;
    

    Node* streetAddressNode = DomSearchHelper::getNode(StreetAddressData::NAME, taxNodeChildren);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAX))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("StreetAddress Node: ");
    
stringBuffer->append(streetAddressNode->getNodeName());
    
stringBuffer->append(" Value: ");
    
stringBuffer->append(streetAddressNode->getNodeValue());
    
stringBuffer->append(" Number Of Children: ");
    
stringBuffer->appendint(streetAddressNode->getChildNodes()->getLength());
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->IS_VALID);
    

                                    }
                                

    StreetAddress* taxableStreetAddress = new StreetAddress(streetAddressNode);;
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isEmpty(country) && !stringValidationUtil->isEmpty(taxableStreetAddress->getCountry()) && taxableStreetAddress->getCountry()->compareTo(this->ALL) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                                    }
                                

                        if(!stringValidationUtil->isEmpty(country) && !stringValidationUtil->isEmpty(taxableStreetAddress->getCountry()) && country.compare(taxableStreetAddress->getCountry()) == 0)
                        
                                    {
                                    
    std::string state = this->streetAddress->getState();;
    

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

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




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_TAX_MODULES_SIMPLESTATETAXMODULE_CPP
