
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
        



        #ifndef TAGS_HELPERTAG_CPP
        #define TAGS_HELPERTAG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "tags/HelperTag.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <admin/taghelpers/TagHelperFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "tags/PropertiesTag.h"


HelperTag::HelperTag(TagHelperFactoryInterface* tagHelperFactoryInterface) : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->tagHelperFactoryInterface= tagHelperFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto HelperTag::setHelper() -> void{

                        if(this->anyType == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Creating TagHelper with: \n") +JavaString::valueOf(this->getPropertiesHashMap()->toString()), this, "doStartTag");
    

                                    }
                                
this->anyType= this->tagHelperFactoryInterface->getInstance(this->getPropertiesHashMap(), this->pageContext);
    

                                    }
                                
}


    auto HelperTag::getHelper() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(this->anyType);
    
}


    auto HelperTag::doEndTag() -> int32_t{

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->JSPTAG))
                        
                                    {
                                    this->logUtil->putF("Tag Ended", this, "doEndTag");
    

                                    }
                                
this->anyType= 
                                        nullptr
                                    ;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PropertiesTag::doEndTag();;
    
}




        #endif //TAGS_HELPERTAG_CPP
