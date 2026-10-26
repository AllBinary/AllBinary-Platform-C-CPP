
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ValidatorBaseInterface.h"

class ValidatorBase
            : public Object
        : public ValidatorBaseInterface {

    private: static ValidatorBase instance() { return ValidatorBase(); }

    public: static ValidatorBase getInstance();

public: ValidatorBase();

    public: Boolean isValid();

    public: std::string validationInfo();

    public: ABHashtable<Object*, Object*> toHashtable();

    public: BasicArrayList toList();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_H
