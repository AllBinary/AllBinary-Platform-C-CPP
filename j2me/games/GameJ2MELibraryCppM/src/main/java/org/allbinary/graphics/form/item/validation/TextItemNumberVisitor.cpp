
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/TextNotificationUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TextItemNumberVisitor: public Visitor {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: TextItemNumberVisitor(){
}


    public: Object* visit(Object* anyType){

    std::string value = anyType;;
    

                        if(value.size() < 2)
                        
                                    {
                                    
    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil.isNumber(value))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance().TRUE;
    

                                    }
                                
                        else {
                            
        try {
            TextNotificationUtil::getInstance().fireError("Numbers Only");
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.VISIT, e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance().FALSE;
    

                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance().FALSE;
    

                        }
                            
}


};

            

