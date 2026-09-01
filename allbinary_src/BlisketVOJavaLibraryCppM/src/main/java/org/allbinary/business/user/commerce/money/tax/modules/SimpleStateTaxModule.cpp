
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../java/lang/Float.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/address/StreetAddress.h>

      
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/business/user/commerce/money/tax/components/TaxData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TaxModuleInterface.h"

class SimpleStateTaxModule
            : public Object
        : public TaxModuleInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: StreetAddress streetAddress;

    private: StoreFrontInterface storeFrontInterface;

    private: const std::string ALL = CommonPhoneStrings::getInstance().STAR;

    private: const std::string STATETAXPATH = "/generic/taxes/";

    private: const std::string STATETAXFILE = "stateTaxation.xml";

    private: Document document;

public: SimpleStateTaxModule(){
}


                //@Throws(Exception.constructor)
            
    public: number getTaxRate(StreetAddress streetAddress, StoreFrontInterface storeFrontInterface){
this->streetAddress= streetAddress;
    
this->storeFrontInterface= storeFrontInterface;
    

    AbPath fileAbPath = AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance().XSLPATH +this->storeFrontInterface.getName() +this->STATETAXPATH, this->STATETAXFILE);;
    

    std::string data = CryptFileReader(TransformInfoObjectConfigData::getInstance().UNCRYPTED_EXTENSION, TransformInfoObjectConfigData::getInstance().ENCRYPTED_EXTENSION).get(fileAbPath);;
    
this->document= DomDocumentHelper::create(data);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAX))
                        
                                    {
                                    this->logUtil.putF("Tax Doc: " +DomDocumentHelper::toString(this->document), this, "getTaxRate");
    

                                    }
                                

    std::string state = this->streetAddress.getState();;
    

    std::string country = this->streetAddress.getCountry();;
    
state= state.toUpperCase();
    

    NodeList nodeList = this->document.getElementsByTagName(TaxData::NAME);;
    




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node node = nodeList.item(index);;
    

    NodeList taxNodeChildren = node.getChildNodes();;
    

    Node streetAddressNode = DomSearchHelper::getNode(StreetAddressData::NAME, taxNodeChildren);;
    

    StreetAddress taxableStreetAddress = StreetAddress(streetAddressNode);;
    

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil.isEmpty(country) && !stringValidationUtil.isEmpty(taxableStreetAddress.getCountry()) && country.compareTo(taxableStreetAddress.getCountry()) == 0)
                        
                                    {
                                    
                        if(true && taxableStreetAddress.getState() != 
                                    nullptr
                                 && state.compareTo(taxableStreetAddress.getState()) == 0)
                        
                                    {
                                    
    Node rateNode = DomSearchHelper::getNode(TaxData::RATE, taxNodeChildren);;
    

    std::string taxRate = DomNodeHelper::getTextNodeValue(rateNode);;
    

    number taxRateFloat = number(number(taxRate) *.01);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return taxRateFloat;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return number(0);
    
}


    public: Boolean isValid(StreetAddress streetAddress, StoreFrontInterface storeFrontInterface){

        try {
            this->streetAddress= streetAddress;
    
this->storeFrontInterface= storeFrontInterface;
    

    AbPath fileAbPath = AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance().XSLPATH +this->storeFrontInterface.getName() +this->STATETAXPATH, this->STATETAXFILE);;
    

    std::string data = CryptFileReader(TransformInfoObjectConfigData::getInstance().UNCRYPTED_EXTENSION, TransformInfoObjectConfigData::getInstance().ENCRYPTED_EXTENSION).get(fileAbPath);;
    
this->document= DomDocumentHelper::create(data);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAX))
                        
                                    {
                                    this->logUtil.putF("Tax Doc: " +DomDocumentHelper::toString(this->document), this, this->commonStrings.IS_VALID);
    

                                    }
                                

    std::string country = this->streetAddress.getCountry();;
    

    Node rootNode = this->document.getElementsByTagName(TransformInfoObjectConfigData::getInstance().NAME).item(0);;
    

    NodeList nodeList = this->document.getElementsByTagName(TaxData::NAME);;
    




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node node = nodeList.item(index);;
    

    NodeList taxNodeChildren = node.getChildNodes();;
    

    Node streetAddressNode = DomSearchHelper::getNode(StreetAddressData::NAME, taxNodeChildren);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAX))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("StreetAddress Node: ");
    
stringBuffer.append(streetAddressNode.getNodeName());
    
stringBuffer.append(" Value: ");
    
stringBuffer.append(streetAddressNode.getNodeValue());
    
stringBuffer.append(" Number Of Children: ");
    
stringBuffer.appendint(streetAddressNode.getChildNodes().getLength());
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.IS_VALID);
    

                                    }
                                

    StreetAddress taxableStreetAddress = StreetAddress(streetAddressNode);;
    

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil.isEmpty(country) && !stringValidationUtil.isEmpty(taxableStreetAddress.getCountry()) && taxableStreetAddress.getCountry().compareTo(this->ALL) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                

                        if(!stringValidationUtil.isEmpty(country) && !stringValidationUtil.isEmpty(taxableStreetAddress.getCountry()) && country.compareTo(taxableStreetAddress.getCountry()) == 0)
                        
                                    {
                                    
    std::string state = this->streetAddress.getState();;
    

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
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Failed to validate", this, this->commonStrings.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


};

            

