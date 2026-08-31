
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ResourceLoadingLevel.h"

class ResourceLoadingLevelFactory
            : public Object
         {
        

    private: static const instance: ResourceLoadingLevelFactory = new ResourceLoadingLevelFactory();

    public static ResourceLoadingLevelFactory getInstance();

    public const LOAD_EARLY: ResourceLoadingLevel = new ResourceLoadingLevel("Load Early", Integer.MAX_VALUE);

    public const LOAD_TOUCH: ResourceLoadingLevel = new ResourceLoadingLevel("Load Touch", Integer.MAX_VALUE -1);

    public const LOAD_GAME: ResourceLoadingLevel = new ResourceLoadingLevel("Load Game", Integer.MAX_VALUE -2);

    public const LEVEL: ResourceLoadingLevel = new ResourceLoadingLevel("Level", Integer.MAX_VALUE -99);

    public const MAX_LEVEL: ResourceLoadingLevel = new ResourceLoadingLevel("Max Level", Integer.MAX_VALUE -100);

    public const LOAD_ALL: ResourceLoadingLevel = new ResourceLoadingLevel("Load All",  -1);

    private: const RESOURCE_LOADING_LEVEL_ARRAY: std::vector<ResourceLoadingLevel> = 
                                                        [
                                                            this.LOAD_ALL,this.MAX_LEVEL,this.LEVEL,this.LOAD_GAME,this.LOAD_TOUCH,this.LOAD_EARLY
                                                        ];

    public string getLevelString(int32_t level);

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_H
