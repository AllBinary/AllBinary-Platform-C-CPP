
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
        
class GameFeatureChoiceGroups
            : public Object
         {
        

    private: static gameFeatureChoiceGroupsExclusive: GameFeatureChoiceGroups = new GameFeatureChoiceGroups();

    private: static gameFeatureChoiceGroupsMultiple: GameFeatureChoiceGroups = new GameFeatureChoiceGroups();

    public static GameFeatureChoiceGroups getExclusiveInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureChoiceGroups.gameFeatureChoiceGroupsExclusive;
    
}


    public static GameFeatureChoiceGroups getMultipleInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureChoiceGroups.gameFeatureChoiceGroupsMultiple;
    
}


    private: hashtable: Hashtable<any, any> = new Hashtable<any, any>();

private constructor (){

            super();
        }


    public Hashtable<any, any> get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable;
    
}


    public add(string name, BasicArrayList list){
this.hashtable.put(name, list);
    
}


};

            

