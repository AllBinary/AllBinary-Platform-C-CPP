
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_H
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Group;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGroupFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static BasicGroupFactory* getInstance();


            
    public: BasicGroupFactory();
        
    public: const std::string NAME = "GROUP_NAME";

    public: const std::string NO_SUCH_GROUP = "No Such Group: ";

    public: Group* GOOD;

    public: Group* ENEMY;

    public: Group* ENEMY_ON_LEVEL;

    public: Group* NONE;

    public: std::vector<Group*> GOOD_ARRAY;

    public: std::vector<Group*> ENEMY_ARRAY;

    public: std::vector<Group*> ENEMY_ON_LEVEL_ARRAY;

    public: std::vector<Group*> NONE_ARRAY;

};

            


        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/game/identification/Group.h")
#include "org/allbinary/game/identification/Group.h"
#endif

        #endif
    
