
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
        



            #include <vector>
        
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

    private: static ResourceLoadingLevelFactory instance() { return ResourceLoadingLevelFactory(); }

    public: static ResourceLoadingLevelFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ResourceLoadingLevelFactory::instance();
    
}


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

    public: std::string getLevelString(int32_t level){




                        for (
    int32_t index = 0;index < this->RESOURCE_LOADING_LEVEL_ARRAY.size(); index++)
        {

                        if(level == this->RESOURCE_LOADING_LEVEL_ARRAY[index]!.getLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->RESOURCE_LOADING_LEVEL_ARRAY[index]!.getName();;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return std::to_string(level);;
    
}


};

            

