
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
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/validate/ValidatorBaseInterface.h"

class ValidatorBase
            : public Object
        , public ValidatorBaseInterface {

    private: static ValidatorBase* instance() { static std::unique_ptr<ValidatorBase> value(new ValidatorBase()); return value.get(); }

    public: static ValidatorBase* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ValidatorBase::instance();
    
}


public: ValidatorBase(){
}


    public: bool isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanFactory::getInstance()->TRUE;
    
}


    public: std::string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    public: ABHashtable<Object*, Object*>* toHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::getInstance()->NULL_TABLE;
    
}


    public: BasicArrayList* toList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    
}


};

            

