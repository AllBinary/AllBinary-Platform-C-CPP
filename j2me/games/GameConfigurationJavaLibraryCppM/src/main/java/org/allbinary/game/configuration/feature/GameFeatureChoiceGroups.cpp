
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameFeatureChoiceGroups
            : public Object
         {

    private: static GameFeatureChoiceGroups* gameFeatureChoiceGroupsExclusive() { static std::unique_ptr<GameFeatureChoiceGroups> value(new GameFeatureChoiceGroups()); return value.get(); }

    private: static GameFeatureChoiceGroups* gameFeatureChoiceGroupsMultiple() { static std::unique_ptr<GameFeatureChoiceGroups> value(new GameFeatureChoiceGroups()); return value.get(); }

    public: static GameFeatureChoiceGroups* getExclusiveInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureChoiceGroups::gameFeatureChoiceGroupsExclusive();
    
}


    public: static GameFeatureChoiceGroups* getMultipleInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureChoiceGroups::gameFeatureChoiceGroupsMultiple();
    
}


    private: ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();

private: GameFeatureChoiceGroups(){
}


    public: ABHashtable<Object*, Object*>* get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


    public: void add(std::string name, BasicArrayList* list){
this->hashtable->put(name, list);
    
}


};

            

