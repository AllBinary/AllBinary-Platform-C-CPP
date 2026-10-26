
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ResourceLoadingLevel.h"

class ResourceLoadingLevelFactory
            : public Object
         {

    private: static ResourceLoadingLevelFactory instance() { return ResourceLoadingLevelFactory(); }

    public: static ResourceLoadingLevelFactory getInstance();

    public: const ResourceLoadingLevel LOAD_EARLY = ResourceLoadingLevel("Load Early", Integer::MAX_VALUE);

    public: const ResourceLoadingLevel LOAD_TOUCH = ResourceLoadingLevel("Load Touch", Integer::MAX_VALUE -1);

    public: const ResourceLoadingLevel LOAD_GAME = ResourceLoadingLevel("Load Game", Integer::MAX_VALUE -2);

    public: const ResourceLoadingLevel LEVEL = ResourceLoadingLevel("Level", Integer::MAX_VALUE -99);

    public: const ResourceLoadingLevel MAX_LEVEL = ResourceLoadingLevel("Max Level", Integer::MAX_VALUE -100);

    public: const ResourceLoadingLevel LOAD_ALL = ResourceLoadingLevel("Load All",  -1);

    private: const std::vector<ResourceLoadingLevel> RESOURCE_LOADING_LEVEL_ARRAY = 
                                                        {
                                                            this->LOAD_ALL,this->MAX_LEVEL,this->LEVEL,this->LOAD_GAME,this->LOAD_TOUCH,this->LOAD_EARLY
                                                        };

    public: std::string getLevelString(int32_t level);

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H
