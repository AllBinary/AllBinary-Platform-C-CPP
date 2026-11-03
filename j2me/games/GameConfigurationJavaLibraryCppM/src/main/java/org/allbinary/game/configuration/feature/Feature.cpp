
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/feature/Feature.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
ABHashtable<Object*, Object*>* Feature::hashtable = StdUtil::getInstance()->createHashtable();

Feature::Feature(std::string name){
this->name= name;
    
Feature::add(name, this);
    
ChangedGameFeatureListener::getInstance()->add(this);
    
}


    auto Feature::getInstance(std::string name) -> Feature*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<Feature*>(Feature::hashtable->get(name));
    
}


    auto Feature::add(std::string name, Feature* gameFeature) -> void{
Feature::hashtable->put(name, gameFeature);
    
}


    auto Feature::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getName();;
    
}


    auto Feature::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_CPP
