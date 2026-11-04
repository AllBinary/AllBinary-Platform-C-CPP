
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_TITLE_TITLENOTREQUIREDVALIDATION_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_TITLE_TITLENOTREQUIREDVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleNotRequiredValidation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleView.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h"


TitleNotRequiredValidation::TitleNotRequiredValidation() : TitleView(), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


TitleNotRequiredValidation::TitleNotRequiredValidation(Node* node) : TitleView(node), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


TitleNotRequiredValidation::TitleNotRequiredValidation(HashMap<Object*, Object*>* hashMap) : TitleView(hashMap), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto TitleNotRequiredValidation::isValid() -> bool{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->IS_VALID);
    

                                    }
                                

    bool valid = Boolean::TRUE;;
    

                        if(!StringValidationUtil::getInstance()->isValidNotRequired(this->getTitle(), 0, TitleData::getInstance()->MAXLEN))
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Title: ");
    
stringBuffer->append(this->getTitle());
    
stringBuffer->append("End: ");
    
stringBuffer->appendboolean(valid);
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto TitleNotRequiredValidation::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Title is not valid.");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Validating Form";
    
}

}


    auto TitleNotRequiredValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto TitleNotRequiredValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_TITLE_TITLENOTREQUIREDVALIDATION_CPP
