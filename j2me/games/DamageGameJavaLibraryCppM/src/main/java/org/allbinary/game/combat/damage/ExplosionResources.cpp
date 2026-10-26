
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ExplosionResources
            : public Object
         {

    private: static ExplosionResources instance() { return ExplosionResources(); }

    public: static ExplosionResources getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ExplosionResources::instance();
    
}


private: ExplosionResources(){
}


    public: const std::string EXPLOSION_90_RESOURCE = "/explosion_sprite_90_by_90.png";

    public: const std::string EXPLOSION_60_RESOURCE = "/explosion_sprite_60_by_60.png";

    public: const std::string HALF_EXPLOSION_RESOURCE = "/explosion_sprite_30_by_30.png";

    public: const std::string THIRD_EXPLOSION_RESOURCE = "/explosion_sprite_15_by_15.png";

};

            

