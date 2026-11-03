
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/validate/ValidatorBase.h"
        

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

auto ValidatorBase::instance_owner() -> ValidatorBase* { static std::unique_ptr<ValidatorBase> value(new ValidatorBase()); return value.get(); }
ValidatorBase* ValidatorBase::instance = ValidatorBase::instance_owner();

    auto ValidatorBase::getInstance() -> ValidatorBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ValidatorBase::instance;
    
}


ValidatorBase::ValidatorBase(){
}


    auto ValidatorBase::isValid() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BooleanFactory::getInstance()->TRUE;
    
}


    auto ValidatorBase::validationInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto ValidatorBase::toHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::getInstance()->NULL_TABLE;
    
}


    auto ValidatorBase::toList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicArrayListUtil::getInstance()->getImmutableInstance();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_CPP
