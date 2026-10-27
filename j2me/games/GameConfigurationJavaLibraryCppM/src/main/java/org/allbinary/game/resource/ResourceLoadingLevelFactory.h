
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/resource/ResourceLoadingLevel.h"

class ResourceLoadingLevelFactory
            : public Object
         {

    private: static ResourceLoadingLevelFactory* instance() { static std::unique_ptr<ResourceLoadingLevelFactory> value(new ResourceLoadingLevelFactory()); return value.get(); }

    public: static ResourceLoadingLevelFactory* getInstance();

    public: ResourceLoadingLevel* LOAD_EARLY = new ResourceLoadingLevel("Load Early", Integer.MAX_VALUE);

    public: ResourceLoadingLevel* LOAD_TOUCH = new ResourceLoadingLevel("Load Touch", Integer.MAX_VALUE -1);

    public: ResourceLoadingLevel* LOAD_GAME = new ResourceLoadingLevel("Load Game", Integer.MAX_VALUE -2);

    public: ResourceLoadingLevel* LEVEL = new ResourceLoadingLevel("Level", Integer.MAX_VALUE -99);

    public: ResourceLoadingLevel* MAX_LEVEL = new ResourceLoadingLevel("Max Level", Integer.MAX_VALUE -100);

    public: ResourceLoadingLevel* LOAD_ALL = new ResourceLoadingLevel("Load All",  -1);

    private: const std::vector<ResourceLoadingLevel*> RESOURCE_LOADING_LEVEL_ARRAY = 
                                                        {
                                                            this->LOAD_ALL,this->MAX_LEVEL,this->LEVEL,this->LOAD_GAME,this->LOAD_TOUCH,this->LOAD_EARLY
                                                        };

    public: std::string getLevelString(int32_t level);

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H
