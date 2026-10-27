
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/identification/Group.h"

class BasicGroupFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static BasicGroupFactory* getInstance();

    public: const std::string NAME = "GROUP_NAME";

    public: const std::string NO_SUCH_GROUP = "No Such Group: ";

    public: Group* GOOD = new Group("Good Guys", 0);

    public: Group* ENEMY = new Group("Bad Guys", 1);

    public: Group* ENEMY_ON_LEVEL = new Group("Bad Guys on Level", 2);

    public: Group* NONE = new Group("Not On A Team", 3);

    public: const std::vector<Group*> GOOD_ARRAY = 
                                                        {
                                                            this->GOOD
                                                        };

    public: const std::vector<Group*> ENEMY_ARRAY = 
                                                        {
                                                            this->ENEMY
                                                        };

    public: const std::vector<Group*> ENEMY_ON_LEVEL_ARRAY = 
                                                        {
                                                            this->ENEMY,this->ENEMY_ON_LEVEL
                                                        };

    public: const std::vector<Group*> NONE_ARRAY = 
                                                        {
                                                            this->NONE
                                                        };

};

            


        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_H
