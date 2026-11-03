
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_CPP
        #define ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/resource/ResourceLoadingLevel.h"


ResourceLoadingLevelFactory::ResourceLoadingLevelFactory() : LOAD_EARLY(new ResourceLoadingLevel("Load Early", Integer.MAX_VALUE)), LOAD_TOUCH(new ResourceLoadingLevel("Load Touch", Integer.MAX_VALUE -1)), LOAD_GAME(new ResourceLoadingLevel("Load Game", Integer.MAX_VALUE -2)), LEVEL(new ResourceLoadingLevel("Level", Integer.MAX_VALUE -99)), MAX_LEVEL(new ResourceLoadingLevel("Max Level", Integer.MAX_VALUE -100)), LOAD_ALL(new ResourceLoadingLevel("Load All",  -1)), RESOURCE_LOADING_LEVEL_ARRAY(
                                                        {
                                                            this->LOAD_ALL,this->MAX_LEVEL,this->LEVEL,this->LOAD_GAME,this->LOAD_TOUCH,this->LOAD_EARLY
                                                        }) {
        }
        auto ResourceLoadingLevelFactory::instance_owner() -> ResourceLoadingLevelFactory* { static std::unique_ptr<ResourceLoadingLevelFactory> value(new ResourceLoadingLevelFactory()); return value.get(); }
ResourceLoadingLevelFactory* ResourceLoadingLevelFactory::instance = ResourceLoadingLevelFactory::instance_owner();

    auto ResourceLoadingLevelFactory::getInstance() -> ResourceLoadingLevelFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ResourceLoadingLevelFactory::instance;
    
}


    auto ResourceLoadingLevelFactory::getLevelString(int32_t level) -> std::string{




                        for (
    int32_t index = 0;index < this->RESOURCE_LOADING_LEVEL_ARRAY.size(); index++)
        {

                        if(level == this->RESOURCE_LOADING_LEVEL_ARRAY[index]->getLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->RESOURCE_LOADING_LEVEL_ARRAY[index]->getName();;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return std::to_string(level);;
    
}




        #endif //ORG_ALLBINARY_GAME_RESOURCE_RESOURCELOADINGLEVELFACTORY_CPP
