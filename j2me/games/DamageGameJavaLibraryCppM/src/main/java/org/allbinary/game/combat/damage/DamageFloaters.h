
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEFLOATERS_H
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEFLOATERS_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DamageFloaters: public Paintable {

    private: static const DamageFloaters SINGLETON = DamageFloaters();

    public: static DamageFloaters getInstance();

    public: void add(int32_t damage);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_DAMAGEFLOATERS_H
