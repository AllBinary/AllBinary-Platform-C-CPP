
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFERESOURCES_H
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFERESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LifeResources
            : public virtual Object
         {

    private: static LifeResources* SINGLETON_owner();
    private: static LifeResources* SINGLETON;

    public: static LifeResources* getInstance();

    public: std::string RESOURCE = "life_drop_20_by_20.png";

private: LifeResources();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFERESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFERESOURCES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFERESOURCES_H_COMPLETE
        
        #endif
    
