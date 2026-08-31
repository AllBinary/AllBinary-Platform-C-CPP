
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

            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InGameFeatureChoiceGroups
            : public Object
         {
        

    private: static gameFeatureChoiceGroupsExclusive: InGameFeatureChoiceGroups = new InGameFeatureChoiceGroups();

    private: static gameFeatureChoiceGroupsMultiple: InGameFeatureChoiceGroups = new InGameFeatureChoiceGroups();

    public static InGameFeatureChoiceGroups getExclusiveInstance();

    public static InGameFeatureChoiceGroups getMultipleInstance();

    private: hashtable: Hashtable<any, any> = new Hashtable<any, any>();

private constructor ();

    public Hashtable<any, any> get();

    public add(string name, BasicArrayList list);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_INGAMEFEATURECHOICEGROUPS_H
