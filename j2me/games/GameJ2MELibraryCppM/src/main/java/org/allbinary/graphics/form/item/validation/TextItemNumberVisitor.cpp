
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/validation/TextItemNumberVisitor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/TextNotificationUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

TextItemNumberVisitor::TextItemNumberVisitor() : logUtil(LogUtil::getInstance()){
}


    auto TextItemNumberVisitor::visit(Object* anyType) -> Object*{

    std::string value = anyType;;
    

                        if(value.size() < 2)
                        
                                    {
                                    
    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil->isNumber(value))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance()->TRUE;
    

                                    }
                                
                        else {
                            
        try {
            TextNotificationUtil::getInstance()->fireError("Numbers Only");
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->VISIT, &e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance()->FALSE;
    

                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance()->FALSE;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_CPP
