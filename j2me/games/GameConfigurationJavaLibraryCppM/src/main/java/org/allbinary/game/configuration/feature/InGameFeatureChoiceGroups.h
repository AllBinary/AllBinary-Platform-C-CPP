
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InGameFeatureChoiceGroups
            : public Object
         {

    private: static InGameFeatureChoiceGroups* gameFeatureChoiceGroupsExclusive() { static std::unique_ptr<InGameFeatureChoiceGroups> value(new InGameFeatureChoiceGroups()); return value.get(); }

    private: static InGameFeatureChoiceGroups* gameFeatureChoiceGroupsMultiple() { static std::unique_ptr<InGameFeatureChoiceGroups> value(new InGameFeatureChoiceGroups()); return value.get(); }

    public: static InGameFeatureChoiceGroups* getExclusiveInstance();

    public: static InGameFeatureChoiceGroups* getMultipleInstance();

    private: ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();

private: InGameFeatureChoiceGroups();

    public: ABHashtable<Object*, Object*>* get();

    public: void add(std::string name, BasicArrayList* list);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_H
