
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H
        #define ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Enumeration.h>
class Layer;
class SmallIntegerSingletonFactory;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class BasicArrayListD;
class EnumerationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LevelLayersFinder
            : public virtual Object
         {

    private: static LevelLayersFinder* instance_owner();
    private: static LevelLayersFinder* instance;

    public: static LevelLayersFinder* getInstance();


            
    public: LevelLayersFinder();
        
    private: EnumerationUtil* enumerationUtil;

    public: BasicArrayList* get(ABHashtable<Object*, Object*>* hashtable);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<org/allbinary/layer/Layer.h>)
#include <org/allbinary/layer/Layer.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/util/EnumerationUtil.h>)
#include <org/allbinary/util/EnumerationUtil.h>
#endif

        #endif
    
