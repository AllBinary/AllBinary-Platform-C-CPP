
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevel.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInitializedEvent: public AllBinaryEventObject {
        

    private: resourceLoadingLevel: ResourceLoadingLevel = ResourceLoadingLevelFactory.getInstance()!.LEVEL;

    private: level: int32_t= 0;

public constructor (any = {} anyType){
            super(anyType);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public setLevel(int32_t level){
this.level= level;
    
this.resourceLoadingLevel= ResourceLoadingLevelFactory.getInstance()!.LEVEL;
    
}


    public int32_t getLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.level;
    
}


    public setResourceLoadingLevel(ResourceLoadingLevel resourceLoadingLevel){
this.resourceLoadingLevel= resourceLoadingLevel;
    
this.level= this.resourceLoadingLevel!.getLevel();
    
}


    public ResourceLoadingLevel getResourceLoadingLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.resourceLoadingLevel;
    
}


};

            

