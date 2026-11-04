
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
        



        #ifndef TAGHELPERS_VIEWHELPER_CPP
        #define TAGHELPERS_VIEWHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "taghelpers/ViewHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ViewHelper::ViewHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){
this->componentInterface= TransformFactory::getInstance()->getInstance(this->abeClientInformation, hashMap, pageContext);
    
}


    auto ViewHelper::getTypeId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->NO_TYPE;
    
}


                //@Throws(Exception.constructor)
            
    auto ViewHelper::view() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->componentInterface->view();;
    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to View: ";;
    

                        if(this->componentInterface != 
                                    nullptr
                                )
                        error += this->componentInterface->getClass()->getName();
                                
                             else 
                        if()
                        

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto ViewHelper::toXmlDoc() -> Document*{

        try {
            


                            throw Exception(JavaString::valueOf("Hmm: ") +JavaString::valueOf(this->componentInterface->getTransformDocumentInterface()->getDoc()));
                    

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed to View: ";;
    

                        if(this->componentInterface != 
                                    nullptr
                                )
                        error += this->componentInterface->getClass()->getName();
                                
                             else 
                        if()
                        

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto ViewHelper::getViewObject() -> TransformInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->componentInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto ViewHelper::getTransformInfoInterface() -> TransformInfoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->componentInterface->getTransformInfoInterface();;
    
}


    auto ViewHelper::getTransformDocumentInterface() -> TransformDocumentInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto ViewHelper::setTransformDocumentInterface(TransformDocumentInterface* viewDocumentInterface) -> void{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    
}




        #endif //TAGHELPERS_VIEWHELPER_CPP
