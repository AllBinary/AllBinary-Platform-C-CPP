
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_CPP
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/identification/BasicGroupFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/identification/Group.h"


BasicGroupFactory::BasicGroupFactory() : GOOD(new Group("Good Guys", 0)), ENEMY(new Group("Bad Guys", 1)), ENEMY_ON_LEVEL(new Group("Bad Guys on Level", 2)), NONE(new Group("Not On A Team", 3)), GOOD_ARRAY(
                                                        {
                                                            this->GOOD
                                                        }), ENEMY_ARRAY(
                                                        {
                                                            this->ENEMY
                                                        }), ENEMY_ON_LEVEL_ARRAY(
                                                        {
                                                            this->ENEMY,this->ENEMY_ON_LEVEL
                                                        }), NONE_ARRAY(
                                                        {
                                                            this->NONE
                                                        }) {
        }
        Object* BasicGroupFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto BasicGroupFactory::getInstance() -> BasicGroupFactory*{

                        if(BasicGroupFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    BasicGroupFactory::instance= new BasicGroupFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<BasicGroupFactory*>(BasicGroupFactory::instance);
    
}




        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_BASICGROUPFACTORY_CPP
