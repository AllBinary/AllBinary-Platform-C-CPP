
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
        
class TextItemUserIdentifierVisitor: public Visitor {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: TextItemUserIdentifierVisitor(){
}


    public: Object* visit(Object* anyType){

    std::string value = anyType;;
    

                        if(value.size() < 2)
                        
                                    {
                                    
    char charValue = value[0];;
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil->isNumber(value))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance()->TRUE;
    

                                    }
                                
                             else 
                        if(this->isLetter(charValue))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance()->TRUE;
    

                                    }
                                
                        else {
                            
        try {
            TextNotificationUtil::getInstance()->fireError("Only Letters & Numbers Allowed");
    

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


    public: bool isLetter(char charValue){

    int32_t value = static_cast<int32_t>(charValue);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value > 64 && value < 91) || (value > 96 && value < 123);
    
}


};

            

