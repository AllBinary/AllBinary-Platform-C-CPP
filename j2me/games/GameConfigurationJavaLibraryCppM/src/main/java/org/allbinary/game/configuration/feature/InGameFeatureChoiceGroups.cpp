
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto InGameFeatureChoiceGroups::gameFeatureChoiceGroupsExclusive_owner() -> InGameFeatureChoiceGroups* { static std::unique_ptr<InGameFeatureChoiceGroups> value(new InGameFeatureChoiceGroups()); return value.get(); }
InGameFeatureChoiceGroups* InGameFeatureChoiceGroups::gameFeatureChoiceGroupsExclusive = InGameFeatureChoiceGroups::gameFeatureChoiceGroupsExclusive_owner();
auto InGameFeatureChoiceGroups::gameFeatureChoiceGroupsMultiple_owner() -> InGameFeatureChoiceGroups* { static std::unique_ptr<InGameFeatureChoiceGroups> value(new InGameFeatureChoiceGroups()); return value.get(); }
InGameFeatureChoiceGroups* InGameFeatureChoiceGroups::gameFeatureChoiceGroupsMultiple = InGameFeatureChoiceGroups::gameFeatureChoiceGroupsMultiple_owner();

InGameFeatureChoiceGroups::InGameFeatureChoiceGroups() : hashtable(StdUtil::getInstance()->createHashtable()){
}


    auto InGameFeatureChoiceGroups::getExclusiveInstance() -> InGameFeatureChoiceGroups*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InGameFeatureChoiceGroups::gameFeatureChoiceGroupsExclusive;
    
}


    auto InGameFeatureChoiceGroups::getMultipleInstance() -> InGameFeatureChoiceGroups*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InGameFeatureChoiceGroups::gameFeatureChoiceGroupsMultiple;
    
}


    auto InGameFeatureChoiceGroups::get() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hashtable;
    
}


    auto InGameFeatureChoiceGroups::add(std::string name, BasicArrayList* list) -> void{
this->hashtable->put(name, list);
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_CPP
