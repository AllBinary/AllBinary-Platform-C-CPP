
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILSNOTUSED_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILSNOTUSED_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/EmailsNotUsed.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/BasicErrorNodeUtil.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/EmailData.h"
#include "org/allbinary/logic/communication/smtp/Email.h"


EmailsNotUsed::EmailsNotUsed() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->emailInfoVector= new BasicArrayListD();
    
}


                //@Throws(Exception.constructor)
            
    auto EmailsNotUsed::toXmlNode(Document* document) -> Node*{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PAYMENT))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, "toXmlNode");
    

                                    }
                                

    Node* node = document->createElement(EmailData::NAME);;
    

    int32_t size = this->emailInfoVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Email* email = dynamic_cast<Email*>(this->emailInfoVector->get(index));;
    

    Node* emailNode = email->toXmlNode(document);;
    

                        if(emailNode != 
                                    nullptr
                                )
                        
                                    {
                                    node->appendChild(emailNode);
    

                                    }
                                
}


                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->PAYMENT))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->END, this, "toXmlNode()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "toXmlNode()", &e);
    

                                    }
                                

    std::string error = "Error Processing Order.  Please contact us if error persists.<p/>";;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicErrorNodeUtil::get(document, error);;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAILSNOTUSED_CPP
