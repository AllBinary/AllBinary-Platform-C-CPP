
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StdUtil;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InGameFeatureChoiceGroups
            : public virtual Object
         {

    private: static InGameFeatureChoiceGroups* gameFeatureChoiceGroupsExclusive_owner();
    private: static InGameFeatureChoiceGroups* gameFeatureChoiceGroupsExclusive;

    private: static InGameFeatureChoiceGroups* gameFeatureChoiceGroupsMultiple_owner();
    private: static InGameFeatureChoiceGroups* gameFeatureChoiceGroupsMultiple;

    public: static InGameFeatureChoiceGroups* getExclusiveInstance();

    public: static InGameFeatureChoiceGroups* getMultipleInstance();

    private: ABHashtable<Object*, Object*>* hashtable;

private: InGameFeatureChoiceGroups();

    public: ABHashtable<Object*, Object*>* get();

    public: void add(std::string name, BasicArrayList* list);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_H_COMPLETE
        #if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
