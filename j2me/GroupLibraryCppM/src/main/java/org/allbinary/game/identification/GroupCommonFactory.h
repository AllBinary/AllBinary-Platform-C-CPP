
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_H
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class NullUtil;
class SmallIntegerSingletonFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GroupCommonFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static GroupCommonFactory* getInstance();


            
    public: GroupCommonFactory();
        
    public: int32_t ID;

    public: const std::string GROUP_NAME_LABEL = "Group Name: ";

    public: const std::string ID_LABEL = " Id: ";

    public: const std::string ADDING_LABEL = "Adding: ";

    public: const std::string TO_LABEL = " to: ";

};

            


        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPCOMMONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif

        #endif
    
