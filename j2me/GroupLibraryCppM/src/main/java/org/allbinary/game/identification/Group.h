
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/identification/GroupInterface.h"
class GroupCommonFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Group
            : public virtual Object
        , public virtual GroupInterface {

    private: std::string name;

    private: int16_t teamId;

    private: std::string string;

public: Group(std::string teamName, int16_t teamId);

    public: std::string getGroupName();

    public: void setName(std::string name);

    public: int16_t getGroupId();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUP_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/game/identification/GroupInterface.h")
#include "org/allbinary/game/identification/GroupInterface.h"
#endif
#if __has_include("org/allbinary/game/identification/GroupCommonFactory.h")
#include "org/allbinary/game/identification/GroupCommonFactory.h"
#endif

        #endif
    
