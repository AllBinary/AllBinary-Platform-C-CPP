
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Boolean.h"
        
class StdUtil;
class BooleanFactory;
class StringUtil;
class BasicArrayList;
class BasicArrayListUtil;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/validate/ValidatorBaseInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ValidatorBase
            : public virtual Object
        , public virtual ValidatorBaseInterface {

    private: static ValidatorBase* instance_owner();
    private: static ValidatorBase* instance;

    public: static ValidatorBase* getInstance();

public: ValidatorBase();

    public: bool isValid();

    public: std::string validationInfo();

    public: ABHashtable<Object*, Object*>* toHashtable();

    public: BasicArrayList* toList();

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/logic/control/validate/ValidatorBaseInterface.h")
#include "org/allbinary/logic/control/validate/ValidatorBaseInterface.h"
#endif

        #endif
    
