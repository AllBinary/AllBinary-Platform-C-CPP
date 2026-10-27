
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/LevelLayersFinder.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Enumeration.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LevelLayersFinder::LevelLayersFinder() : enumerationUtil(EnumerationUtil::getInstance()) {
        }
        auto LevelLayersFinder::instance_owner() -> LevelLayersFinder* { static std::unique_ptr<LevelLayersFinder> value(new LevelLayersFinder()); return value.get(); }
LevelLayersFinder* LevelLayersFinder::instance = LevelLayersFinder::instance_owner();

    auto LevelLayersFinder::getInstance() -> LevelLayersFinder*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LevelLayersFinder::instance;
    
}


    auto LevelLayersFinder::get(ABHashtable<Object*, Object*>* hashtable) -> BasicArrayList*{

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    BasicArrayList* list = new BasicArrayListD();;
    

    Enumeration<Object*>* enumeration = hashtable->keys();;
    

    ABHashtable<Object*, Object*>* layerHashtableCanBeNull;;
    

    int32_t integerCanBeNull;;
    

    int32_t cachedIntegerCanBeNull;;
    

        while(this->enumerationUtil->hasMoreElements(enumeration))
        {
layerHashtableCanBeNull= dynamic_cast<ABHashtable<Object*, Object*>*>(hashtable->get(this->enumerationUtil->nextElement(enumeration)));
    
integerCanBeNull= layerHashtableCanBeNull->get(Layer::ID);
    
cachedIntegerCanBeNull= smallIntegerSingletonFactory->getAt(integerCanBeNull.intValue());
    

                        if(!list->contains(cachedIntegerCanBeNull))
                        
                                    {
                                    list->add(cachedIntegerCanBeNull);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_LEVELLAYERSFINDER_CPP
