
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
                *  II
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeDataFactory.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetaAttributeValuesData.h>

      
#include <org/allbinary/logic/visual/dhtml/html/head/meta/HtmlMetasData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MetaValidation.h"

class MetasValidation: public Validation: public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: storeFrontInterface: StoreFrontInterface;

    private: metaValidationVector: Vector;

public constructor (string storeName){

            super();
        this.storeFrontInterface= StoreFrontFactory.getInstance(storeName);
    
this.metaValidationVector= new Vector();
    

    contentValue: string = this.storeFrontInterface!.getName() +" E-Commerce Site";;
    

    keywordsMetaValidation: MetaValidation = new MetaValidation(HtmlMetaAttributeDataFactory.getInstance()!.NAME, "Keywords", HtmlMetaAttributeValuesData.getInstance()!.KEYWORDS, contentValue);;
    

    abstractMetaValidation: MetaValidation = new MetaValidation(HtmlMetaAttributeDataFactory.getInstance()!.NAME, "Abstract", HtmlMetaAttributeValuesData.getInstance()!.ABSTRACT, contentValue);;
    

    descriptionMetaValidation: MetaValidation = new MetaValidation(HtmlMetaAttributeDataFactory.getInstance()!.NAME, "Description", HtmlMetaAttributeValuesData.getInstance()!.DESCRIPTION, contentValue);;
    
this.metaValidationVector!.add(keywordsMetaValidation);
    
this.metaValidationVector!.add(abstractMetaValidation);
    
this.metaValidationVector!.add(descriptionMetaValidation);
    
}


public constructor (Document document){

            super();
        


                            throw new Exception(CommonStrings.getInstance()!.NOT_IMPLEMENTED);
                    
}


    public Boolean isValid(){

        try {
            
    valid: Boolean = Boolean.TRUE;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to validate form", this, this.commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public string validationInfo(){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = document.createElement(HtmlMetasData.getInstance()!.NAME)!;;
    

    metaArray: std::vector<MetaValidation> = this.metaValidationVector!.toArray([]) as MetaValidation[];;
    

    size: int32_t = metaArray!.length
                ;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    metaValidation: MetaValidation = metaArray[i]!;;
    
node.appendChild(metaValidation!.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

