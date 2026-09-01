
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyableInterface.h"

class DestroyableBaseBehavior
            : public Object
        : public DestroyableInterface {

    private: static DestroyableBaseBehavior instance() { return DestroyableBaseBehavior(); }

    public: static DestroyableBaseBehavior getInstance();

    public: std::string getName();

                //@Throws(Exception.constructor)
            
    public: bool isDestroyed();

    public: void setDestroyed(bool destroyed);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYABLEBASEBEHAVIOR_H
