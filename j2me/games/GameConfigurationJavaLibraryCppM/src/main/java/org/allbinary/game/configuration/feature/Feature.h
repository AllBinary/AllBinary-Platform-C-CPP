
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class ChangedGameFeatureListener;
class StdUtil;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Feature
            : public virtual Object
         {

    private: static ABHashtable<Object*, Object*>* hashtable;

    public: static Feature* getInstance(std::string name);

    private: static void add(std::string name, Feature* gameFeature);

    private: std::string name;

public: Feature(std::string name);

    public: std::string toString();

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>)
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
