
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
        



        #ifndef VIEWS_GENERIC_ADDRESS_STATESVIEW_CPP
        #define VIEWS_GENERIC_ADDRESS_STATESVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/generic/address/StatesView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/address/StreetAddressData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/LineReader.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

StatesView::StatesView() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


    auto StatesView::toXmlNode(Document* document) -> Node*{

        try {
            
    Node* node = document->createElement(StreetAddressData::STATES);;
    

    std::string statesFile = JavaString::valueOf(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance()->LINEDATAPATH) +JavaString::valueOf("states.txt");;
    

    LineReader* lineReader = new LineReader(statesFile);;
    

        while(lineReader->hasNext())
        {

    std::string option = lineReader->next();;
    
node->appendChild(ModDomHelper::createNameValueNodes(document, StreetAddressData::STATE, option));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "toXmlNode", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}




        #endif //VIEWS_GENERIC_ADDRESS_STATESVIEW_CPP
