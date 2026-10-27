
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class DirectionFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LayerPlacementType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerPlacementTypeFactory
            : public virtual Object
         {

    private: static LayerPlacementTypeFactory* instance_owner();
    private: static LayerPlacementTypeFactory* instance;

    public: static LayerPlacementTypeFactory* getInstance();


            
    public: LayerPlacementTypeFactory();
        
    public: LayerPlacementType* MAP;

    public: LayerPlacementType* LEFT;

    public: LayerPlacementType* DOWN;

    public: LayerPlacementType* UP;

    public: LayerPlacementType* RIGHT;

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/direction/DirectionFactory.h>)
#include <org/allbinary/direction/DirectionFactory.h>
#endif
#if __has_include("org/allbinary/game/layer/LayerPlacementType.h")
#include "org/allbinary/game/layer/LayerPlacementType.h"
#endif

        #endif
    
