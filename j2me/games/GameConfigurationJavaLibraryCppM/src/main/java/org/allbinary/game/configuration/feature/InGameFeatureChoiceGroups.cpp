
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InGameFeatureChoiceGroups
            : public Object
         {

    private: static InGameFeatureChoiceGroups gameFeatureChoiceGroupsExclusive = InGameFeatureChoiceGroups();

    private: static InGameFeatureChoiceGroups gameFeatureChoiceGroupsMultiple = InGameFeatureChoiceGroups();

    public: static InGameFeatureChoiceGroups getExclusiveInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InGameFeatureChoiceGroups::gameFeatureChoiceGroupsExclusive;
    
}


    public: static InGameFeatureChoiceGroups getMultipleInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InGameFeatureChoiceGroups::gameFeatureChoiceGroupsMultiple;
    
}


    private: Hashtable<any, any> hashtable = Hashtable<any, any>();

private: InGameFeatureChoiceGroups(){
}


    public: Hashtable<any, any> get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


    public: void add(std::string name, BasicArrayList list){
this->hashtable.put(name, list);
    
}


};

            

