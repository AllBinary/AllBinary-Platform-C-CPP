
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H
        #define ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ResourceLoadingLevel;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ResourceLoadingLevelFactory
            : public virtual Object
         {

    private: static ResourceLoadingLevelFactory* instance_owner();
    private: static ResourceLoadingLevelFactory* instance;

    public: static ResourceLoadingLevelFactory* getInstance();


            
    public: ResourceLoadingLevelFactory();
        
    public: ResourceLoadingLevel* LOAD_EARLY;

    public: ResourceLoadingLevel* LOAD_TOUCH;

    public: ResourceLoadingLevel* LOAD_GAME;

    public: ResourceLoadingLevel* LEVEL;

    public: ResourceLoadingLevel* MAX_LEVEL;

    public: ResourceLoadingLevel* LOAD_ALL;

    private: std::vector<ResourceLoadingLevel*> RESOURCE_LOADING_LEVEL_ARRAY;

    public: std::string getLevelString(int32_t level);

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/game/resource/ResourceLoadingLevel.h")
#include "org/allbinary/game/resource/ResourceLoadingLevel.h"
#endif

        #endif
    
