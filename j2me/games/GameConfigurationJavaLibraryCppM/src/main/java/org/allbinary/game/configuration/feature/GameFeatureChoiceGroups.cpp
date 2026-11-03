
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECHOICEGROUPS_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECHOICEGROUPS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto GameFeatureChoiceGroups::gameFeatureChoiceGroupsExclusive_owner() -> GameFeatureChoiceGroups* { static std::unique_ptr<GameFeatureChoiceGroups> value(new GameFeatureChoiceGroups()); return value.get(); }
GameFeatureChoiceGroups* GameFeatureChoiceGroups::gameFeatureChoiceGroupsExclusive = GameFeatureChoiceGroups::gameFeatureChoiceGroupsExclusive_owner();
auto GameFeatureChoiceGroups::gameFeatureChoiceGroupsMultiple_owner() -> GameFeatureChoiceGroups* { static std::unique_ptr<GameFeatureChoiceGroups> value(new GameFeatureChoiceGroups()); return value.get(); }
GameFeatureChoiceGroups* GameFeatureChoiceGroups::gameFeatureChoiceGroupsMultiple = GameFeatureChoiceGroups::gameFeatureChoiceGroupsMultiple_owner();

GameFeatureChoiceGroups::GameFeatureChoiceGroups() : hashtable(StdUtil::getInstance()->createHashtable()){
}


    auto GameFeatureChoiceGroups::getExclusiveInstance() -> GameFeatureChoiceGroups*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameFeatureChoiceGroups::gameFeatureChoiceGroupsExclusive;
    
}


    auto GameFeatureChoiceGroups::getMultipleInstance() -> GameFeatureChoiceGroups*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameFeatureChoiceGroups::gameFeatureChoiceGroupsMultiple;
    
}


    auto GameFeatureChoiceGroups::get() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hashtable;
    
}


    auto GameFeatureChoiceGroups::add(std::string name, BasicArrayList* list) -> void{
this->hashtable->put(name, list);
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_GAMEFEATURECHOICEGROUPS_CPP
