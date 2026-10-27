
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PickedUpLayerType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PickedUpLayerTypeFactory
            : public virtual Object
         {

    private: static PickedUpLayerTypeFactory* instance_owner();
    private: static PickedUpLayerTypeFactory* instance;

    public: static PickedUpLayerTypeFactory* getInstance();


            
    public: PickedUpLayerTypeFactory();
        
    public: PickedUpLayerType* NONE;

    public: PickedUpLayerType* BEAM;

    public: PickedUpLayerType* MINE;

    public: PickedUpLayerType* PROJECTILE;

    public: PickedUpLayerType* ENHANCEMENT;

    public: PickedUpLayerType* MORPH;

    public: PickedUpLayerType* PART;

    public: PickedUpLayerType* HEAL;

    public: PickedUpLayerType* LIFE;

    public: PickedUpLayerType* POINTS;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERTYPEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerType.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#endif

        #endif
    
