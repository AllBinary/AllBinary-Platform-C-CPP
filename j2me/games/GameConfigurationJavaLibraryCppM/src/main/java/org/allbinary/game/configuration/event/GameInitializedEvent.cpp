
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/resource/ResourceLoadingLevel.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInitializedEvent: public AllBinaryEventObject {

    private: ResourceLoadingLevel* resourceLoadingLevel = ResourceLoadingLevelFactory::getInstance()->LEVEL;

    private: int32_t level= 0;

public: GameInitializedEvent(Object* anyType) : AllBinaryEventObject(anyType){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void setLevel(int32_t level){
this->level= level;
    
this->resourceLoadingLevel= ResourceLoadingLevelFactory::getInstance()->LEVEL;
    
}


    public: int32_t getLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->level;
    
}


    public: void setResourceLoadingLevel(ResourceLoadingLevel* resourceLoadingLevel){
this->resourceLoadingLevel= resourceLoadingLevel;
    
this->level= this->resourceLoadingLevel->getLevel();
    
}


    public: ResourceLoadingLevel* getResourceLoadingLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->resourceLoadingLevel;
    
}


};

            

