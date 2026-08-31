
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: streetAddress: StreetAddress;

    private: storeFrontInterface: StoreFrontInterface;

    private: const ALL: string = CommonPhoneStrings.getInstance()!.STAR;

    private: const STATETAXPATH: string = "/generic/taxes/";

    private: const STATETAXFILE: string = "stateTaxation.xml";

    private: document: Document;

public constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public number getTaxRate(StreetAddress streetAddress, StoreFrontInterface storeFrontInterface){
this.streetAddress= streetAddress;
    
this.storeFrontInterface= storeFrontInterface;
    

    fileAbPath: AbPath = new AbPath(URLGLOBALS.getMainPath() +FREEBLISKET_PATH_GLOBALS.getInstance()!.XSLPATH +this.storeFrontInterface!.getName() +this.STATETAXPATH, this.STATETAXFILE);;
    

    data: string = new CryptFileReader(TransformInfoObjectConfigData.getInstance()!.UNCRYPTED_EXTENSION, TransformInfoObjectConfigData.getInstance()!.ENCRYPTED_EXTENSION).get(fileAbPath)!;;
    
this.document= DomDocumentHelper.create(data);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAX))
                        
                                    {
                                    this.logUtil!.putF("Tax Doc: " +DomDocumentHelper.toString(this.document), this, "getTaxRate");
    

                                    }
                                

    state: string = this.streetAddress!.getState()!;;
    

    country: string = this.streetAddress!.getCountry()!;;
    
state= state.toUpperCase();
    

    nodeList: NodeList = this.document.getElementsByTagName(TaxData.NAME)!;;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    node: Node = nodeList!.item(index)!;;
    

    taxNodeChildren: NodeList = node.getChildNodes()!;;
    

    streetAddressNode: Node = DomSearchHelper.getNode(StreetAddressData.NAME, taxNodeChildren)!;;
    

    taxableStreetAddress: StreetAddress = new StreetAddress(streetAddressNode);;
    

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(!stringValidationUtil!.isEmpty(country) && !stringValidationUtil!.isEmpty(taxableStreetAddress!.getCountry()) && country.compareTo(taxableStreetAddress!.getCountry()) == 0)
                        
                                    {
                                    
                        if(state != 
                                    null
                                 && taxableStreetAddress!.getState() != 
                                    null
                                 && state.compareTo(taxableStreetAddress!.getState()) == 0)
                        
                                    {
                                    
    rateNode: Node = DomSearchHelper.getNode(TaxData.RATE, taxNodeChildren)!;;
    

    taxRate: string = DomNodeHelper.getTextNodeValue(rateNode)!;;
    

    taxRateFloat: number = new number(new number(taxRate) *.01);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return taxRateFloat;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new number(0);
    
}


    public Boolean isValid(StreetAddress streetAddress, StoreFrontInterface storeFrontInterface){

        try {
            this.streetAddress= streetAddress;
    
this.storeFrontInterface= storeFrontInterface;
    

    fileAbPath: AbPath = new AbPath(URLGLOBALS.getMainPath() +FREEBLISKET_PATH_GLOBALS.getInstance()!.XSLPATH +this.storeFrontInterface!.getName() +this.STATETAXPATH, this.STATETAXFILE);;
    

    data: string = new CryptFileReader(TransformInfoObjectConfigData.getInstance()!.UNCRYPTED_EXTENSION, TransformInfoObjectConfigData.getInstance()!.ENCRYPTED_EXTENSION).get(fileAbPath)!;;
    
this.document= DomDocumentHelper.create(data);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAX))
                        
                                    {
                                    this.logUtil!.putF("Tax Doc: " +DomDocumentHelper.toString(this.document), this, this.commonStrings!.IS_VALID);
    

                                    }
                                

    country: string = this.streetAddress!.getCountry()!;;
    

    rootNode: Node = this.document.getElementsByTagName(TransformInfoObjectConfigData.getInstance()!.NAME)!.item(0)!;;
    

    nodeList: NodeList = this.document.getElementsByTagName(TaxData.NAME)!;;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    node: Node = nodeList!.item(index)!;;
    

    taxNodeChildren: NodeList = node.getChildNodes()!;;
    

    streetAddressNode: Node = DomSearchHelper.getNode(StreetAddressData.NAME, taxNodeChildren)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAX))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("StreetAddress Node: ");
    
stringBuffer!.append(streetAddressNode!.getNodeName());
    
stringBuffer!.append(" Value: ");
    
stringBuffer!.append(streetAddressNode!.getNodeValue());
    
stringBuffer!.append(" Number Of Children: ");
    
stringBuffer!.appendint(streetAddressNode!.getChildNodes()!.getLength());
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.IS_VALID);
    

                                    }
                                

    taxableStreetAddress: StreetAddress = new StreetAddress(streetAddressNode);;
    

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(!stringValidationUtil!.isEmpty(country) && !stringValidationUtil!.isEmpty(taxableStreetAddress!.getCountry()) && taxableStreetAddress!.getCountry()!.compareTo(this.ALL) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                                    }
                                

                        if(!stringValidationUtil!.isEmpty(country) && !stringValidationUtil!.isEmpty(taxableStreetAddress!.getCountry()) && country.compareTo(taxableStreetAddress!.getCountry()) == 0)
                        
                                    {
                                    
    state: string = this.streetAddress!.getState()!;;
    

                        if(state != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEWERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to validate", this, this.commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


};

            

